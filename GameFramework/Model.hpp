#ifndef MODEL_HPP
#define MODEL_HPP

#include "../OpenglWrapper/OpenGL.hpp"
#include <vector>
#include <glm/glm.hpp>

class Model
{
public:
    Model() {}

    void loadFromFile(std::string path);
    void loadFromString(std::string objText);
    void loadFromData(std::vector<glm::vec3> vertices, std::vector<glm::vec3> normals, std::vector<glm::vec3> textureCoordinates);

public:
    VertexArrayObject vertexArray;
    BufferObject vertexBuffer, normalBuffer, textureBuffer, indexBuffer;

    std::vector<glm::vec3> vertices;
    std::vector<glm::vec3> normals;
    std::vector<glm::vec2> textureCoordinates;
    std::vector<unsigned int> indices;
};

#endif // MODEL_HPP
