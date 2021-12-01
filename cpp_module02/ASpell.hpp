//
// Created by Cesar Erebus on 12/1/21.
//

#ifndef EXAMANK05_ASPELL_HPP
#define EXAMANK05_ASPELL_HPP


#include <string>
class ATarget;

class ASpell {
protected:
    std::string name;
    std::string effects;
    ASpell();
public:
    ASpell(const std::string &nName, const std::string &effects);
    virtual ~ASpell();

    ASpell(ASpell const &orig);
    ASpell &operator=(ASpell const &orig);

    const std::string &getName() const;
    const std::string &getAffect() const;
    virtual ASpell *clone() = 0;
    void launchSpell(const ATarget &target);
};


#endif //EXAMANK05_ASPELL_HPP
