#pragma once
#include "VertexBuffer.hpp"

class VertexBufferLayout;

class VertexArray
{
private:
    unsigned int m_RendererID;
public:
    VertexArray(/* args */);
    ~VertexArray();

    void AddBuffer(const VertexBuffer& vb , const VertexBufferLayout& layout);
    void Bind() const;
    void Unbind() const;
};


