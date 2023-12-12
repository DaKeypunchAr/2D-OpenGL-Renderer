#include <iostream>
#include "Renderer/Renderer.h"
#include "glm/glm.hpp"

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
	OGLR::Renderer::initialize();

	OGLR::Window window(800, 800, "2D OpenGL Renderer Version 1.0 BETA");
	window.addKeyEventChangeCallback(onEventChange);

	OGLR::Renderer::selectWindow(&window);

	std::vector<float> vboData
	{
		-0.5f, +0.5f, // Vertex 1
		+0.5f, +0.5f, // Vertex 2
		+0.0f, -0.5f, // Vertex 3
	};

	std::string vsCode;
	vsCode += "#version 460 core\n";
	vsCode += "layout (location = 0) in vec2 _Position;\n";
	vsCode += "void main()\n";
	vsCode += "{\n";
	vsCode += "\tgl_Position = vec4(_Position, 0.0, 1.0);\n";
	vsCode += "}\n";

	std::string fsCode;
	fsCode += "#version 460 core\n";
	fsCode += "uniform vec4 color;\n";
	fsCode += "out vec4 fColor;\n";
	fsCode += "void main()\n";
	fsCode += "{\n";
	fsCode += "\tfColor = color;\n";
	fsCode += "}\n";

	glm::vec4 color(1.0f);
	OGLR::Shader shader(vsCode, fsCode);
	shader.addUniform(OGLR::Uniform(OGLR::UniformType::VEC4, "color", &color, shader));

	OGLR::VertexAttribs attribs({ 2 }, { GL_FLOAT }, { 0 });

	OGLR::VertexArray vao(vboData, 2, attribs);
	
	float speedR = -0.0000001f;
	float speedG = -0.0000002f;
	float speedB = -0.0000005f;

	bool click = false;

	while (window.isAlive())
	{
		OGLR::Renderer::renderVAO(vao, shader);
		color.r += speedR;
		color.g += speedG;
		color.b += speedB;

		if (color.r >= 1.0f || color.r <= 0.0f) speedR *= -1;
		if (color.g >= 1.0f || color.g <= 0.0f) speedG *= -1;
		if (color.b >= 1.0f || color.b <= 0.0f) speedB *= -1;

		if (window.getKey(OGLR::K_Event::KEY_SPACE) == OGLR::K_Operation::KEY_PRESS)
		{
			click = true;
			speedR = 0.0f;
			speedG = 0.0f;
			speedB = 0.0f;
		}
		else if (window.getKey(OGLR::K_Event::KEY_SPACE) == OGLR::K_Operation::KEY_RELEASE && click)
		{
			click = false;
			speedR = -0.0000001f;
			speedG = -0.0000002f;
			speedB = -0.0000005f;
		}
	}

	OGLR::Renderer::terminate();
}