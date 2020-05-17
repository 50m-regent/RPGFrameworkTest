#include "entity.hpp"

#include "identity.hpp"

int &Entity::Hp(int _hp = -1) {
    if (_hp < 0) return this->hp;
    else         return this->hp = _hp;
}

Entity Entity::step() {


    return *this;
}