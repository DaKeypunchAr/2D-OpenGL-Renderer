#include "../Shader.h"

namespace OGLR
{
	Uniform::Uniform(UniformType type, const char* id, const void* location, const Shader& shader)
		: m_Type(type), m_Id(id), m_ValLocation(location), m_UniLocation(shader.getUniformLocation(id)) {}

	void Uniform::updateValue() const
	{
		switch (m_Type)
		{
			case UniformType::INT:
				glUniform1i(m_UniLocation, *((int*)(m_ValLocation)));
				break;
			case UniformType::UINT:
				glUniform1ui(m_UniLocation, *((unsigned int*)(m_ValLocation)));
				break;
			case UniformType::FLOAT:
				glUniform1f(m_UniLocation, *((float*)(m_ValLocation)));
				break;
			case UniformType::VEC2:
				glUniform2f(m_UniLocation, *((float*)(m_ValLocation)), *(((float*)(m_ValLocation)) + 1));
				break;
			case UniformType::VEC3:
				glUniform3f(m_UniLocation, *((float*)(m_ValLocation)), *(((float*)(m_ValLocation)) + 1), *(((float*)(m_ValLocation)) + 2));
				break;
			case UniformType::VEC4:
				glUniform4f(m_UniLocation, *((float*)(m_ValLocation)), *(((float*)(m_ValLocation)) + 1), *(((float*)(m_ValLocation)) + 2), *(((float*)(m_ValLocation)) + 3));
				break;
		}
	}

	UniformHandler::UniformHandler() : m_Uniforms() {}
	UniformHandler::UniformHandler(std::vector<Uniform> uniforms) : m_Uniforms(uniforms) {}

	void UniformHandler::updateUniforms() const
	{
		for (const Uniform& uni : m_Uniforms) uni.updateValue();
	}

	void UniformHandler::addUniform(Uniform uniform)
	{
		m_Uniforms.push_back(uniform);
	}

	void UniformHandler::removeUniform(const char* id)
	{
		std::string ID(id);
		for (unsigned int i = 0; i < m_Uniforms.size(); i++)
		{
			if (std::string(m_Uniforms[i].m_Id) == ID)
			{
				m_Uniforms.erase(m_Uniforms.begin() + i);
				break;
			}
		}
	}

	void UniformHandler::removeAll()
	{
		m_Uniforms.clear();
	}

	unsigned int UniformHandler::count() const { return m_Uniforms.size(); }

	bool UniformHandler::hasUniform(const char* id) const
	{
		std::string ID(id);
		for (const Uniform& uni : m_Uniforms) if (std::string(uni.m_Id) == ID) return true;
		return false;
	}
}