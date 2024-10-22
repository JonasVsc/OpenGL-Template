#include <GL/glew.h>
#include <GLFW/glfw3.h>


int main() {

	GLFWwindow* window;
	
	glfwInit();

	window = glfwCreateWindow(1280, 720, "OpenGL Application", NULL, NULL);
	glfwMakeContextCurrent(window);

	glewInit();

	while(!glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT);


		glfwPollEvents();
		glfwSwapBuffers(window);
	}

	return 0;
}