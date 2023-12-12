#ifndef _2D_OGLR_Shader
#define _2D_OGLR_Shader

#include "GLEW/glew.h"
#include <string>
#include "UniformHandler/UniformHandler.h"

#ifdef DEBUG
#include <iostream>
#endif

namespace OGLR
{
	class Shader
	{
		public:
			Shader(std::string vertexShaderCode, std::string fragmentShaderCode);
			Shader(std::string vertexShaderCode, std::string fragmentShaderCode, std::string geometryShaderCode);
			~Shader();

			void select() const;
			void updateUniforms() const;
			void addUniforms(std::vector<Uniform> uniforms);
			void addUniform(Uniform uniforms);
			bool validate() const;
			int getUniformLocation(const char* id) const;
			
		private:
			void initialize();
			void compileShader(unsigned int id);
			void linkProgram();

		private:
			unsigned int m_ProgramId;
			std::string m_VShader, m_FShader, m_GShader;
			UniformHandler m_UniformHandler;
	};
}

#endif