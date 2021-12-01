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
    std::cout << this->name << ": My job here is done!" << std::endl;
}

void Warlock::setTitle(const std::string &nTitle) { this->title = nTitle; }
const std::string &Warlock::getName() const { return this->name; }
const std::string &Warlock::getTitle() const { return this->title; }

void Warlock::introduce() const {
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}



