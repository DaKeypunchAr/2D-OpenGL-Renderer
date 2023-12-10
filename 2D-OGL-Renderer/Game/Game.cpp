#include <iostream>
#include "Renderer/Renderer.h"

void onEventChange(OGLR::KeyboardEvent event)
{
	static bool shift = false;
	if (event.isShift())
	{
		shift = !shift;
	}
	if ((event.getEvent() == OGLR::K_Event::KEY_ENTER || event.getEvent() == OGLR::K_Event::KEY_NUM_ENTER) && event.getOperation() == OGLR::K_Operation::KEY_PRESS)
		std::cout << '\n';
	if (event.hasCharRepresentation() && event.getOperation() == OGLR::K_Operation::KEY_PRESS)
	{
		std::cout << event.getCharRepresentation(shift);
	}
}

int main()
{
	glfwInit();

	OGLR::Window window(800, 800, "2D OpenGL Renderer Version 1.0 BETA");
	window.addKeyEventChangeCallback(onEventChange);
	
	while (!window.shouldClose())
	{
		window.update();
	}
}