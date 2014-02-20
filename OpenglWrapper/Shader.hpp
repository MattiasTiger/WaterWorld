/*
 *
 */
#ifndef SHADER_HPP
#define SHADER_HPP

#include "OpenGL.hpp"

/* OpenGL Shader wrapper
 * --------------------
 * Purpose, Usage...
 */
class Shader
{
public:
    Shader();
    ~Shader();

    void loadFromFile(std::string path);
    void loadFromString(std::string code);
    void bind();
    // SetProperty(...)

public:

};

#endif //SHADER_HPP
