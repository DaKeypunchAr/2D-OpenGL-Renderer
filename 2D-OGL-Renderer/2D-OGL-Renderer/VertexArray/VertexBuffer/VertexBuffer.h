#ifndef _2D_OGLR_VertexBuffer
#define _2D_OGLR_VertexBuffer

#include "GLEW/glew.h"
#include <vector>

namespace OGLR
{
	class Renderer;

	struct VertexAttribs
	{
		std::vector<unsigned int> attribSizes;
		std::vector<unsigned int> attribDataTypes;
		std::vector<unsigned int> attribOffsets;

		VertexAttribs
			(std::vector<unsigned int> attribSizes,
			std::vector<unsigned int> attribDataTypes,
			std::vector<unsigned int> attribOffsets)
			: attribSizes(attribSizes), attribDataTypes(attribDataTypes), attribOffsets(attribOffsets) {}
	};

	class VertexBuffer
	{
		public:
			VertexBuffer(std::vector<float> buffer);
			~VertexBuffer();

			void select();
			void selectNothing();
			void setVertexAttribList(VertexAttribs attribList);

		private:
			unsigned int m_VboId;
			std::vector<float> m_Buffer;
			friend Renderer;
	};
}

#endif