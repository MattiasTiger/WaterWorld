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
    VertexArrayObject()		{ openglHandler = -1; }
    ~VertexArrayObject()	{ destroy(); }
	
    bool create()			{ glGenVertexArrays(1, &openglHandler); return true; }
    void destroy()			{ glDeleteVertexArrays(1, &openglHandler); openglHandler = -1; }
	bool isCreated()		{ return openglHandler != -1; return true; }
    bool bind()				{ glBindVertexArray(openglHandler); return true; }	// Generate GL_INVALID_OPERATION if openglHandler is invalid
    void release()			{ glBindVertexArray(0); }
	
	GLuint getID()			{ return openglHandler; }

public:
    GLuint openglHandler;
};

#endif //VERTEX_ARRAY_OBJECT_HPP
