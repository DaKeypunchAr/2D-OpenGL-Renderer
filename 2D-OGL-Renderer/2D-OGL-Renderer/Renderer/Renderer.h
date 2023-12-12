#ifndef _2D_OGLR_Renderer
#define _2D_OGLR_Renderer

#include "GLEW/glew.h"
#include "../Window/Window.h"
#include "../VertexArray/VertexArray.h"
#include "../Shader/Shader.h"

namespace OGLR
{
	class Scene;

	class Renderer
	{
		public:
			Renderer() = delete;
			~Renderer() = delete;

		public:
			static void initialize();
			static void terminate();
			static void selectWindow(Window* window);
			static void renderScene(const Scene& scene);
			static void renderVAO(const VertexArray& array, const Shader& shader);
			static void setFrameRate(unsigned short FPS);

		private:
			static Window* m_SelectedWindow;
			static double m_LastTick, m_TickDelay;
	};
}

#endif