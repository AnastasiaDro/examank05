//
// Created by Cesar Erebus on 12/1/21.
//

#include "Warlock.hpp"
#include <iostream>
Warlock::Warlock() : name("default"), title("default") {}
Warlock::Warlock(const std::string &nName, const std::string &nTitle) : name(nName), title(nTitle) {
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock() {
    std::vector<ASpell *>::iterator it;
    std::cout << this->name << ": My job here is done!" << std::endl;
    if (!spellVect.empty())
    {
        it = spellVect.begin();
        while(it != spellVect.end() && *it)
        {
            delete *it;
            it++;
        }
        spellVect.clear();
    }
}

void Warlock::setTitle(const std::string &nTitle) { this->title = nTitle; }
const std::string &Warlock::getName() const { return this->name; }
const std::string &Warlock::getTitle() const { return this->title; }

void Warlock::introduce() const {
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::launchSpell(const std::string &spellname, ATarget &target){
    std::vector<ASpell *>::iterator it = spellVect.begin();
    ASpell *tmp;
    while (it != spellVect.end()){
        tmp = *it;
        if (tmp->getName() == spellname)
        {
            tmp->launchSpell(target);
        }
        it++;
    }
}

void Warlock::learnSpell(ASpell *spell) {
    this->spellVect.push_back(spell);
}

void Warlock::forgetSpell(const std::string &spellName) {
    std::vector<ASpell *>::iterator it = spellVect.begin();
    ASpell *tmp;
    while (it != spellVect.end()){
        if ((*it)->getName() == spellName)
        {
            spellVect.erase(it);
            delete *it;
            return;
         }
        it++;
    }
}



