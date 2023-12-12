#ifndef	_2D_OGLR_UniformHandler
#define	_2D_OGLR_UniformHandler

#include "GLEW/glew.h"
#include <vector>
#include <string>

namespace OGLR
{
	enum class UniformType
	{
		INT, UINT, FLOAT, VEC2, VEC3, VEC4
	};

	class Shader;
	class UniformHandler;

	class Uniform
	{
		public:
			Uniform(UniformType type, const char* id, const void* location, const Shader& shader);

			void updateValue() const;

		private:
			UniformType m_Type;
			const char* m_Id;
			const void* m_ValLocation;
			int m_UniLocation;

			friend UniformHandler;
	};

	class UniformHandler
	{
		public:
			UniformHandler();
			UniformHandler(std::vector<Uniform> uniforms);

			void updateUniforms() const;

			void addUniform(Uniform uniform);
			void removeUniform(const char* id);
			void removeAll();
			bool hasUniform(const char* id) const;
			unsigned int count() const;

		private:
			std::vector<Uniform> m_Uniforms;
	};
}

#endif