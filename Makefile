MAKEFLAGS += --silent
NAME = test
CC = g++
CFLAGS = -std=c++11 -g3 -Wall -Wextra -Werror
SDL2INCLUDE = -lglfw -lGL -lGLEW
MAIN = main.cpp src/front/Shaders.cpp
SOURCES = Sources/game.cpp
DLIBS1 = Sources/dl1.cpp
DLIBS2 = Sources/dl2.cpp
DLIBS3 = Sources/dl3.cpp
OBJECTS = $(SOURCES:.cpp=.o)
SOBJECTS1 = $(DLIBS1:.cpp=.so)
SOBJECTS2 = $(DLIBS2:.cpp=.so)
SOBJECTS3 = $(DLIBS3:.cpp=.so)

all: test

dynamiclibs:
	echo "Finnished that part"

$(NAME): dynamiclibs
	$(CC) -o $(NAME) $(MAIN) $(SDL2INCLUDE)
	echo "test has been Compiled"

clean:
	rm *.o

fclean: clean
	rm $(NAME) *.so

re: fclean all
