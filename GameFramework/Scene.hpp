#ifndef SCENE_HPP
#define SCENE_HPP

#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include "OpenglWrapper/Opengl.hpp"

class Scene
{
public:
    Scene() { window = 0; }

    void setWindow(sf::Window & window) { this->window = &window; }
    virtual void reset() {}
    virtual void update(float dt) {}
    virtual void render() {}

protected:
    sf::Window * window;
};

#endif // SCENE_HPP
