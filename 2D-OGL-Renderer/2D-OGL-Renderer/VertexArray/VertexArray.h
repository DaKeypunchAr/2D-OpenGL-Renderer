#ifndef _2D_OGLR_VertexArray
#define _2D_OGLR_VertexArray

#include <vector>
#include "VertexBuffer/VertexBuffer.h"
#include "ElementBuffer/ElementBuffer.h"

namespace OGLR
{
	class Renderer;

	class VertexArray
	{
	public:
		VertexArray(std::vector<float> vboBufferData, std::vector<unsigned short> eboBufferData, VertexAttribs attribs = getDefaultAttribList());
		VertexArray(std::vector<float> vboBufferData, unsigned int floatsPerVertex=1, VertexAttribs attribs = getDefaultAttribList());
		~VertexArray();

		void select() const;
		void selectNothing() const;
		unsigned int vertexCount() const { return m_Ebo.count(); }

		private:
			std::vector<unsigned short> genEmptyEboData(unsigned int size);
			static VertexAttribs getDefaultAttribList();
			void initialize(VertexAttribs attribs);

			friend Renderer;

		private:
			unsigned int m_VaoId;
			VertexBuffer m_Vbo;
			ElementBuffer m_Ebo;
	};
}

#endif