#pragma once

#include "identity.hpp"
#include "vector3.hpp"

class Entity {
private:
    Identity id;
    Vector3  pos, vel;
    int      hp;
    
public:
    Entity() {}

    int& Hp(int _hp = -1);

    Entity step();
};