#include "Shader.h"

namespace OGLR
{
	Shader::Shader(std::string vs, std::string fs) : m_ProgramId(glCreateProgram()), m_VShader(vs), m_FShader(fs), m_GShader(), m_UniformHandler()
	{
		initialize();
	}
	Shader::Shader(std::string vs, std::string fs, std::string gs) : m_ProgramId(glCreateProgram()), m_VShader(vs), m_FShader(fs), m_GShader(gs), m_UniformHandler()
	{
		initialize();
	}
	Shader::~Shader()
	{
		glDeleteProgram(m_ProgramId);
	}

	void Shader::select() const
	{
		glUseProgram(m_ProgramId);
	}

	void Shader::addUniforms(std::vector<Uniform> uniforms)
	{
		for (const Uniform& uni : uniforms) m_UniformHandler.addUniform(uni);
	}
	void Shader::addUniform(Uniform uniform)
	{
		m_UniformHandler.addUniform(uniform);
	}

	bool Shader::validate() const
	{
		glValidateProgram(m_ProgramId);
		int result{};
		glGetProgramiv(m_ProgramId, GL_VALIDATE_STATUS, &result);

		return (bool)result;
	}

	void Shader::initialize()
	{
		unsigned int vs = glCreateShader(GL_VERTEX_SHADER);
		unsigned int fs = glCreateShader(GL_FRAGMENT_SHADER);
		const char* vsCStr = m_VShader.c_str();
		const char* fsCStr = m_FShader.c_str();

		glShaderSource(vs, 1, &vsCStr, nullptr);
		glShaderSource(fs, 1, &fsCStr, nullptr);

		compileShader(vs);
		compileShader(fs);

		glAttachShader(m_ProgramId, vs);
		glAttachShader(m_ProgramId, fs);

		if (m_GShader.size() != 0)
		{
			unsigned int gs = glCreateShader(GL_GEOMETRY_SHADER);
			const char* gsCStr = m_GShader.c_str();
			glShaderSource(gs, 1, &gsCStr, nullptr);
			compileShader(gs);
			glAttachShader(m_ProgramId, gs);
		}

		linkProgram();
	}

	void Shader::compileShader(unsigned int id)
	{
		glCompileShader(id);
		int result{};
		glGetShaderiv(id, GL_COMPILE_STATUS, &result);
		if (result) return;

#ifdef DEBUG
		int shaderType;
		glGetShaderiv(id, GL_SHADER_TYPE, &shaderType);

		std::vector<char> string;
		int length{};
		glGetShaderiv(id, GL_INFO_LOG_LENGTH, &length);
		glGetShaderInfoLog(id, length, nullptr, string.data());

		std::cerr << "Compilation Error [";
		std::cerr << (shaderType == GL_VERTEX_SHADER) ? "Vertex Shader" : ((shaderType == GL_FRAGMENT_SHADER) ? "Fragment Shader" : "Geometry Shader");
		std::cerr << '\n';
		for (char c : string) std::cerr << c;
		std::cerr << '\n';
#endif
	}

	void Shader::linkProgram()
	{
		glLinkProgram(m_ProgramId);
		int result{};
		glGetProgramiv(m_ProgramId, GL_LINK_STATUS, &result);
		if (result) return;

#ifdef DEBUG
		std::vector<char> string;
		int length{};
		glGetProgramiv(m_ProgramId, GL_INFO_LOG_LENGTH, &length);
		glGetProgramInfoLog(m_ProgramId, length, nullptr, string.data());
		std::cerr << "Linking Error: ";
		for (char c : string) std::cerr << c;
		std::cerr << '\n';
#endif
	}

	int Shader::getUniformLocation(const char* id) const
	{
		return glGetUniformLocation(m_ProgramId, id);
	}

	void Shader::updateUniforms() const
	{
		m_UniformHandler.updateUniforms();
	}
}