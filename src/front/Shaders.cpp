#include "../../Includes/Shaders.hpp"

Shader::Shader (const GLchar *vertexPath, const GLchar *fragmentPath)
{
    std::string vertexCode;
    std::string fragmentCode;
    std::ifstream vShaderFile;
    std::ifstream fShaderFile;

    vShaderFile.exceptions (std::ifstream::badbit);
    fShaderFile.exceptions (std::ifstream::badbit);
    try
    {
      vShaderFile.open (vertexPath);
      fShaderFile.open (fragmentPath);
      std::stringstream vShaderStream, fShaderStream;
      vShaderStream << vShaderFile.rdbuf();
      fShaderStream << fShaderFile.rdbuf();
      vShaderFile.close();
      fShaderFile.close();
      vertexCode = vShaderStream.str();
      fragmentCode = fShaderStream.str();
    }
    catch (std::ifstream::failure e)
    {
      std::cout <<"Error::Shader::FILE:: some shit read"<<std::endl;
    }
    const GLchar *vShaderCode = vertexCode.c_str();
    const GLchar *fShaderCode = fragmentCode.c_str();

    GLuint vertex, fragment;
    GLint success;
    GLchar infoLog[512];

    vertex = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertex, 1, &vShaderCode, NULL);
    glCompileShader(vertex);
    glGetShaderiv(vertex, GL_COMPILE_STATUS, &success);
    if (!success)
    {
      glGetShaderInfoLog(vertex, 512, NULL, infoLog);
      std::cout<<"Oopsie"<<infoLog<<std::endl;
    }
    fragment = glCreateShader (GL_FRAGMENT_SHADER);
    glShaderSource(fragment, 1, &fShaderCode, NULL);
    glCompileShader(fragment);

    glGetShaderiv(fragment, GL_COMPILE_STATUS, &success);
    if (!success)
    {
      glGetShaderInfoLog(fragment, 512, NULL, infoLog);
      std::cout<<"ah crap it doesn't work you idiot"<<std::endl;
    }
    this->Program = glCreateProgram();
    glAttachShader(this->Program, vertex);
    glAttachShader(this->Program, fragment);
    glLinkProgram(this->Program);

    glGetProgramiv(this->Program, GL_LINK_STATUS, &success);
    if(!success)
    {
      glGetProgramInfoLog(this->Program, 512, NULL, infoLog);
      std::cout<<"not happening here "<<infoLog<<std::endl;
    }
    glDeleteShader(vertex);
    glDeleteShader(fragment);

}

void Shader::Use()
{
  glUseProgram(this->Program);
}
