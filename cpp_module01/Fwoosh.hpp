//
// Created by Cesar Erebus on 12/1/21.
//

#ifndef EXAMANK05_FWOOSH_HPP
#define EXAMANK05_FWOOSH_HPP


#include "ASpell.hpp"

class Fwoosh : public ASpell {

public:
    Fwoosh();
    Fwoosh(Fwoosh &orig);
    ~Fwoosh();
    Fwoosh &operator=(Fwoosh const &orig);
    virtual Fwoosh *clone();

};


#endif //EXAMANK05_FWOOSH_HPP
