////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <QOpenGLFunctions_4_0_Core>

#include <iostream>

int main()
{
    // Request a 32-bits depth buffer when creating the window, together with a specific opengl version
    sf::ContextSettings contextSettings;
    contextSettings.depthBits = 32;
    contextSettings.majorVersion = 4;
    contextSettings.minorVersion = 0;

    // Create the main window
    sf::Window window(sf::VideoMode(640, 480), "SFML window with OpenGL", sf::Style::Default, contextSettings);

    std::cout << "OpenGL version: " << window.getSettings().majorVersion << "." << window.getSettings().minorVersion << "\n";

    // Make it the active window for OpenGL calls
    window.setActive();

    // load resources, initialize the OpenGL states, ...

    bool running = true;
    while (running)
    {
        // handle events
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                running = false;
            }
            else if (event.type == sf::Event::Resized)
            {
                // adjust the viewport when the window is resized
                glViewport(0, 0, event.size.width, event.size.height);
            }
        }

        // clear the buffers
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        // draw...

        // end the current frame (internally swaps the front and back buffers)
        window.display();
    }

    // release resources...
    return 0;
 }
