//
// Created by Cesar Erebus on 12/1/21.
//

#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell() {}

ASpell::ASpell(const ASpell &orig): name(orig.name), effects(orig.effects) {}

ASpell::ASpell(const std::string &nName, const std::string &effects): name(nName),
                                                                      effects(effects)
                                                                      {}

ASpell &ASpell::operator=(const ASpell &orig) {
    if (this == &orig)
        return *this;
    this->name = orig.name;
    this->effects = orig.effects;
    return *this;
}

ASpell::~ASpell() {}

const std::string &ASpell::getName() const {
    return this->name;
}

const std::string &ASpell::getAffect() const {
    return this->effects;
}

void ASpell::launchSpell(const ATarget &target) {
    target.getHitBySpell(*this);
}