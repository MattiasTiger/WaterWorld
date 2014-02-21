/*
 *
 */
#ifndef SHADER_HPP
#define SHADER_HPP

#include "OpenGL.hpp"

/* OpenGL Shader wrapper
 * --------------------
 * Purpose, Usage...
 *
 *
 * Default behavior: Pass-through vertex shader and fragment shader
 */
class Shader
{
public:
    Shader();
    ~Shader();

    void loadFromFile(std::string path);
    void loadFromFile(std::string vertexShaderPath, std::string fragmentShaderPath);
    void loadFromString(std::string code);
    void loadFromString(std::string vertexShaderCode, std::string fragmentShaderCode);
    void bind();
    // SetProperty(...)

public:

};

#endif //SHADER_HPP
