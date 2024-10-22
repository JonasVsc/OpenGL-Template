#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <cstddef>



int main() {

	glfwInit();

	GLFWwindow* window = glfwCreateWindow(1280, 720, "Breakout Atari", NULL, NULL);
	glfwMakeContextCurrent(window);

	glewInit();



	while(glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT);


		glfwPollEvents();
		glfwSwapBuffers(window);
	}


	return 0;
}

/*
[submodule "3rdparty/glew"]
	path = 3rdparty/glew
	url = https://github.com/Perlmint/glew-cmake.git
[submodule "3rdparty/glm"]
	path = 3rdparty/glm
	url = https://github.com/g-truc/glm.git
[submodule "3rdparty/imgui"]
	path = 3rdparty/imgui
	url = https://github.com/ocornut/imgui.git
	branch = docking

*/