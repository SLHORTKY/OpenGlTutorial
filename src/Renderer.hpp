#pragma once
#include "GL/glew.h"
#include <iostream>
#include <cassert>

#include "IndexBuffer.hpp"
#include "VertexArray.hpp"
#include "Shader.hpp"


#define ASSERT(x) \
    if (!(x))     \
        assert(false);
#define GLCall(x)   \
    GLClearError(); \
    x;              \
    ASSERT(GLLogCall(#x, __FILE__, __LINE__))

void GLClearError();
bool GLLogCall(const char *function, const char *file, int line);


class Renderer
{
private:
    
public:
    void Draw(const VertexArray& va, const IndexBuffer& ib, const Shader& shader) const ; 
};




