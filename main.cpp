#include <iostream>

#define GLEW_STATIC
#include <GL/glew.h>

#include <GLFW/glfw3.h>
#include "Includes/Shaders.hpp"

const GLint WIDTH = 800, HEIGHT = 600;

int main()
{
  glfwInit();
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
  glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
  glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

  GLFWwindow *window = glfwCreateWindow(WIDTH, HEIGHT, "Learn OpenGL", nullptr, nullptr);

  int screenWidth, screenHeight;
  glfwGetFramebufferSize(window, &screenWidth, &screenHeight);

  if (nullptr == window)
  {
    std::cout << "Failed to create the fucking window"<< std::endl;
    glfwTerminate();
    return -1;
  }
  glfwMakeContextCurrent(window);
  glewExperimental = GL_TRUE;

  if (GLEW_OK != glewInit())
  {
    std::cout << "Failed to initialize  some shit"<<std::endl;
    return -1;
  }
  glViewport(0,0, screenWidth, screenHeight);

  Shader ourShader ("Resources/shaders/core.vs", "Resources/shaders/core.frag");

  GLfloat vertices [] =
  {
    //position              // color
    -0.5f, -0.5f, 0.0f,     1.0f, 0.0f, 0.0f,//bottom left
    0.5f, -0.5f, 0.0f,      0.0f, 1.0f, 0.0f,//bottom right
    0.0f, 0.5f, 0.0f,       0.0f, 0.0f, 1.0f
  };

  GLuint VBO, VAO;
  glGenVertexArrays(1, &VAO);
  glGenBuffers(1, &VBO);

  glBindVertexArray(VAO);
  glBindBuffer(GL_ARRAY_BUFFER, VBO);
  glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GL_FLOAT), (GLvoid * )0);
  glEnableVertexAttribArray(0);

  glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GL_FLOAT), (GLvoid * )(3 * sizeof(GL_FLOAT)));
  glEnableVertexAttribArray(1);

  //glBindBuffer(GL_ARRAY_BUFFER, 0);
  glBindVertexArray(0);

  while (!glfwWindowShouldClose(window))
  {
    glfwPollEvents();
    glClearColor (0.2f, 0.3f, 0.3, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

//    glUseProgram(shaderProgram);
    ourShader.Use();
    glBindVertexArray(VAO);
    glDrawArrays(GL_TRIANGLES, 0, 3);
    glBindVertexArray(0);

    glfwSwapBuffers(window);
  }
  glDeleteVertexArrays(1, &VAO);
  glDeleteBuffers(1, & VBO);
  glfwTerminate();
  return 0;
}
