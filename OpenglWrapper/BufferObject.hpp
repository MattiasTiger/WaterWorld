/*
 *
 */
#ifndef BUFFER_OBJECT_HPP
#define BUFFER_OBJECT_HPP

#include "OpenGL.hpp"

/* OpenGL Buffer Object
 * --------------------
 * Purpose, Usage...
 */
class BufferObject
{
public:
    BufferObject(Type type = Type::VertexBuffer, Usage usage = Usage::StaticDraw);
	
	enum Type
    {
        VertexBuffer        = GL_ARRAY_BUFFER,
        IndexBuffer         = GL_ELEMENT_ARRAY_BUFFER,
        PixelPackBuffer     = GL_PIXEL_PACK_BUFFER,
        PixelUnpackBuffer   = GL_PIXEL_UNPACK_BUFFER
    };
    enum Usage
    {
        StreamRead          = GL_STREAM_READ,
        StreamCopy          = GL_STREAM_COPY,
        StreamDraw          = GL_STREAM_DRAW,
        StaticRead          = GL_STATIC_READ,
        StaticCopy          = GL_STATIC_COPY,
        StaticDraw          = GL_STATIC_DRAW,
        DynamicRead         = GL_DYNAMIC_READ,
        DynamicCopy         = GL_DYNAMIC_COPY,
        DynamicDraw         = GL_DYNAMIC_DRAW
    };
	
	bool create();
	void destroy();
	bool isCreated();
	void bind();
	void release();
	
	int size();
	
	template <class DATA>
	bool read(int offset, std::vector<DATA> data);
	template <class DATA>
	void write(int offset, std::vector<DATA> data);
	template <class DATA>
	void allocate(std::vector<DATA> data);
    void allocate(int count);
	
	Type getType();
	Usage getUsage();	
    void setUsage(Usage usage);

public:
	GLuint openglHandler;
	int dataCount;
	Type type;
	Usage usage;
};

#endif //BUFFER_OBJECT_HPP
