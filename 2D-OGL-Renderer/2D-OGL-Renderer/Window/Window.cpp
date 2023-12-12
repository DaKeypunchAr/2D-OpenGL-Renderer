#include "Window.h"

namespace OGLR
{
	Window::Window(unsigned short width, unsigned short height, const char* title)
		: m_Window(glfwCreateWindow(width, height, title, nullptr, nullptr)),
		m_Width(width), m_Height(height), m_Title(title), m_IsSelected(true),
		m_KeyboardEventHandler(m_Window)
	{
		select();
	}

	Window::~Window()
	{
		glfwDestroyWindow(m_Window);
	}

	void Window::update()
	{
		swapBuffers();
		glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);
		m_KeyboardEventHandler.pollEvents();
	}

	void Window::swapBuffers() { glfwSwapBuffers(m_Window); }

	void Window::select()
	{
		glfwMakeContextCurrent(m_Window);
	}

	K_Operation Window::getKey(K_Event event)
	{
		return m_KeyboardEventHandler.getCachedEvents()[KeyboardEventHandler::getKeyIndex(event)];
	}

	void Window::addKeyEventChangeCallback(OnEventChange func)
	{
		m_KeyboardEventHandler.addOnEventChangeFunc(func);
	}

	bool Window::isAlive()
	{
		return !glfwWindowShouldClose(m_Window);
	}
}