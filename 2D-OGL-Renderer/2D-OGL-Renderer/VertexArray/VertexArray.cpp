#include "VertexArray.h"

namespace OGLR
{
	VertexArray::VertexArray(std::vector<float> vboBufferData, std::vector<unsigned short> eboBufferData, VertexAttribs attribs)
		: m_Vbo(vboBufferData), m_Ebo(eboBufferData)
	{
		initialize(attribs);
	}

	VertexArray::VertexArray(std::vector<float> vboBufferData, unsigned int floatsPerVertex, VertexAttribs attribs)
		: m_Vbo(vboBufferData), m_Ebo(genEmptyEboData((vboBufferData.size()/floatsPerVertex)))
	{
		initialize(attribs);
	}

	VertexArray::~VertexArray()
	{
		glDeleteVertexArrays(1, &m_VaoId);
	}

	void VertexArray::select() const
	{
		glBindVertexArray(m_VaoId);
	}

	void VertexArray::selectNothing() const
	{
		glBindVertexArray(0);
	}

	std::vector<unsigned short> VertexArray::genEmptyEboData(unsigned int size)
	{
		std::vector<unsigned short> vec;
		for (unsigned short i = 0; i < size; i++) vec.push_back(i);
		return vec;
	}

	void VertexArray::initialize(VertexAttribs attribs)
	{
		glGenVertexArrays(1, &m_VaoId);
		select();
		m_Vbo.select();
		m_Ebo.select();
		m_Vbo.setVertexAttribList(attribs);
		selectNothing();
		m_Vbo.selectNothing();
		m_Ebo.selectNothing();
		select();
	}

	VertexAttribs VertexArray::getDefaultAttribList()
	{
		std::vector<unsigned int> sizes =
		{
			2, // POS
			4, // COLOR
		};
		std::vector<unsigned int> dataTypes =
		{
			GL_FLOAT,
			GL_FLOAT
		};
		std::vector<unsigned int> offsets =
		{
			0,
			2
		};
		return VertexAttribs(sizes, dataTypes, offsets);
	}
}