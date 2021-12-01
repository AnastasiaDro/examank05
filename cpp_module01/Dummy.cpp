//
// Created by Cesar Erebus on 12/1/21.
//

#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy") {}

Dummy::Dummy(const Dummy &orig) : ATarget(orig.type) {}

Dummy &Dummy::operator=(Dummy &orig) {
    if (this == &orig)
        return *this;
    this->type = orig.type;
    return *this;
}

Dummy::~Dummy() {}

Dummy *Dummy::clone() {
    return new Dummy;
}