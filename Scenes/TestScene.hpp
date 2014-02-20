#ifndef TESTSCENE_HPP
#define TESTSCENE_HPP

#include "GameFramework/Scene.hpp"

class TestScene : public Scene
{
public:
    TestScene();

    void reset() override;
    void update(float dt) override;
    void render() override;
};

#endif // TESTSCENE_HPP
