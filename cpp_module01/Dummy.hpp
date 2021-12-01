//
// Created by Cesar Erebus on 12/1/21.
//

#ifndef EXAMANK05_DUMMY_HPP
#define EXAMANK05_DUMMY_HPP


#include "ATarget.hpp"

class Dummy : public ATarget {
public:
    Dummy();
    Dummy(Dummy const &orig);
    Dummy &operator=(Dummy &orig);
    ~Dummy();
    virtual Dummy *clone();

};


#endif //EXAMANK05_DUMMY_HPP
