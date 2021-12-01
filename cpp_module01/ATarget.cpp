//
// Created by Cesar Erebus on 12/1/21.
//

#include "ATarget.hpp"
#include "ASpell.hpp"
#include <iostream>
ATarget::ATarget() {}
ATarget::ATarget(const ATarget &orig): type(orig.type) {}
ATarget::ATarget(const std::string &type): type(type) {}
ATarget::~ATarget() {}
ATarget &ATarget::operator=(ATarget &orig) {
    if (this == &orig)
        return *this;
    this->type = orig.type;
    return *this;
}

void ATarget::getHitBySpell(const ASpell &aSpell) const{
    std::cout << this->type << " has been " << aSpell.getAffect() << "!" << std::endl;
}

const std::string &ATarget::getType() const {
    return type;
}
