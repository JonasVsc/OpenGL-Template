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