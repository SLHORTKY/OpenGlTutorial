#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>
#include <sstream>
#include <GL/glew.h>

#include <unordered_map>

struct ShaderProgramSource
{
    std::string VertexSource;
    std::string FragmentSource;
};

class Shader
{
private:
    std::string m_FilePath;
    unsigned int m_RendererID;
    std::unordered_map<std::string, int> m_UniformLocationCache;

public:
    Shader(const std::string &filepath);
    ~Shader();

    void Bind() const;
    void Unbind() const;
    void SetUniform4f(const std::string &name, float v0, float v1, float v2, float v3);

private:
    ShaderProgramSource ParseShader(const std::string &filePath);
    unsigned int CreateShader(const std::string &vertexShader, const std::string &fragmentShader);
    unsigned int CompileShader(unsigned int type, const std::string &source);
    unsigned int GetUniformLocation(const std::string &name);
};
