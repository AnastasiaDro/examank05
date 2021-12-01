//
// Created by Cesar Erebus on 12/1/21.
//

#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {}

Fwoosh::Fwoosh(Fwoosh &orig) : ASpell(orig.name, orig.effects) {}

Fwoosh &Fwoosh::operator=(const Fwoosh &orig) {
    if (this == &orig)
        return *this;
    this->name = orig.name;
    this->effects = orig.effects;
    return *this;
}

Fwoosh::~Fwoosh() {}

Fwoosh *Fwoosh::clone() {
    return new Fwoosh;
}
