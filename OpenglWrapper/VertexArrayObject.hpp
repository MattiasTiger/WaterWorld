/*
 *
 */
#ifndef VERTEX_ARRAY_OBJECT_HPP
#define VERTEX_ARRAY_OBJECT_HPP

#include "OpenGL.hpp"

/* OpenGL Vertex Array
 * --------------------
 * Purpose, Usage...
 */
class VertexArrayObject
{
public:
    VertexArrayObject();
    void create();
    void bind();
    void release();

public:
    GLuint openglHandler;
};

#endif //VERTEX_ARRAY_OBJECT_HPP
