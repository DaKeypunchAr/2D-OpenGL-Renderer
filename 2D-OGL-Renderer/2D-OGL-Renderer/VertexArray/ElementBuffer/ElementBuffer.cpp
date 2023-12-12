#include "ElementBuffer.h"

namespace OGLR
{
	ElementBuffer::ElementBuffer(std::vector<unsigned short> buffer)
		: m_Buffer(buffer)
	{
		glGenBuffers(1, &m_EboId);
		select();
		glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(buffer), buffer.data(), GL_STATIC_DRAW);
	}

	ElementBuffer::~ElementBuffer()
	{
		glDeleteBuffers(1, &m_EboId);
	}

	void ElementBuffer::select()
	{
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_EboId);
	}

	void ElementBuffer::selectNothing()
	{
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
	}
}