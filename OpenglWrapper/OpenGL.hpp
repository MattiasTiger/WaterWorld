#ifndef WRAPPER_OPENGL_HPP
#define WRAPPER_OPENGL_HPP

#ifdef _WIN32
    #include <QOpenGLFunctions_4_0_Core>
#elif _WIN64
    #include <QOpenGLFunctions_4_0_Core>
#elif __APPLE__

#endif

#include "VertexArrayObject.hpp"
#include "BufferObject.hpp"
//...


#endif //WRAPPER_OPENGL_HPP
