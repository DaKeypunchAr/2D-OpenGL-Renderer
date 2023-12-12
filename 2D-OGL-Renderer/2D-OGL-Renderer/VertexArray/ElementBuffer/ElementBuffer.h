#ifndef _2D_OGLR_ElementBuffer
#define _2D_OGLR_ElementBuffer

#include "GLEW/glew.h"
#include <vector>

namespace OGLR
{
	class ElementBuffer
	{
		public:
			ElementBuffer(std::vector<unsigned short> buffer);
			~ElementBuffer();

			void select();
			void selectNothing();
			unsigned int count() const { return m_Buffer.size(); }

		private:
			unsigned int m_EboId;
			std::vector<unsigned short> m_Buffer;
	};
}

#endif