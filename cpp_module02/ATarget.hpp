//
// Created by Cesar Erebus on 12/1/21.
//

#ifndef ATARGET_HPP
#define ATARGET_HPP


#include <string>
class ASpell;

class ATarget {
protected:
    std::string type;
    ATarget();
public:
    ATarget(const std::string &type);
    ATarget(ATarget const &prig);
    ATarget &operator=(ATarget &orig);
    virtual ~ATarget();
    const std::string &getType() const;
    virtual ATarget *clone() = 0;
    void getHitBySpell(const ASpell &aSpell) const;
};

#endif ATARGET_HPP
