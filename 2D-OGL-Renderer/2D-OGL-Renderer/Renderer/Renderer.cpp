#include "Renderer.h"

#ifdef DEBUG
#include <iostream>
#endif

namespace OGLR
{
	Window* Renderer::m_SelectedWindow = nullptr;
	double Renderer::m_LastTick = 0.0;
	double Renderer::m_TickDelay = 1.0/30;

	void Renderer::initialize()
	{
		if (!glfwInit())
		{
#ifdef DEBUG
			std::cerr << "Failed to initialize GLFW!\n";
#endif
			exit(1);
		}

		glfwWindowHint(GLFW_CLIENT_API, GLFW_OPENGL_API);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	}

	void Renderer::terminate()
	{
		glfwTerminate();
	}

	void Renderer::selectWindow(Window* window)
	{
		m_SelectedWindow = window;

		m_SelectedWindow->select();
		if (glewInit())
		{
#ifdef DEBUG
			std::cerr << "Failed to intialize GLEW!\n";
#endif
			exit(1);
		}
	}

	void Renderer::setFrameRate(unsigned short fps)
	{
		m_TickDelay = 1.0 / fps;
	}

	void Renderer::renderVAO(const VertexArray& vao, const Shader& shader)
	{
		if (glfwGetTime() < m_LastTick + m_TickDelay) return;

		vao.select();
		shader.select();
		shader.updateUniforms();
		glDrawElements(GL_TRIANGLES, vao.vertexCount(), GL_UNSIGNED_SHORT, nullptr);
		m_SelectedWindow->update();
		m_LastTick = glfwGetTime();
	}
}