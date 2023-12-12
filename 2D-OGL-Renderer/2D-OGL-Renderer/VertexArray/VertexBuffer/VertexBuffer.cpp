#include "VertexBuffer.h"

namespace OGLR
{
	VertexBuffer::VertexBuffer(std::vector<float> buffer)
		: m_Buffer(buffer)
	{
		glGenBuffers(1, &m_VboId);
		select();
		glBufferData(GL_ARRAY_BUFFER, buffer.size() * sizeof(float), buffer.data(), GL_STATIC_DRAW);
	}

	VertexBuffer::~VertexBuffer()
	{
		glDeleteBuffers(1, &m_VboId);
	}

	void VertexBuffer::select()
	{
		glBindBuffer(GL_ARRAY_BUFFER, m_VboId);
	}

	void VertexBuffer::selectNothing()
	{
		glBindBuffer(GL_ARRAY_BUFFER, 0);
	}

	void VertexBuffer::setVertexAttribList(VertexAttribs attribs)
	{
		unsigned int stride{};
		for (unsigned int size : attribs.attribSizes) stride += size;

		for (unsigned int i = 0; i < attribs.attribSizes.size(); i++)
		{
			glVertexAttribPointer(i, attribs.attribSizes[i], attribs.attribDataTypes[i], GL_FALSE, stride * sizeof(float), (void*)(attribs.attribOffsets[i]*sizeof(float)));
			glEnableVertexAttribArray(i);
		}
	}
}