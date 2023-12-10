#ifndef _2D_OGLR_WINDOW
#define _2D_OGLR_WINDOW

#include "GLFW/glfw3.h"
#include "../EventHandler/EventHandler.h"

namespace OGLR
{
	class Window
	{
		public:
			Window(unsigned short width, unsigned short height, const char* title);
			~Window();

			void update();
			void swapBuffers();
			void select();

			void addKeyEventChangeCallback(OnEventChange func);

			K_Operation getKey(K_Event event);
			bool shouldClose();

		public:
			unsigned short getWidth() const { return m_Width; }
			unsigned short getHeight() const { return m_Height; }
			const char* getTitle() const { return m_Title; }
			bool isSelected() const { return m_IsSelected; }

		private:
			GLFWwindow* m_Window;
			unsigned short m_Width, m_Height;
			const char* m_Title;
			bool m_IsSelected;
			KeyboardEventHandler m_KeyboardEventHandler;
	};
}

#endif