//
// Created by Cesar Erebus on 12/1/21.
//

#ifndef WARLOCK_HPP
#define WARLOCK_HPP


#include <string>
#include <vector>
#include <set>
#include "Fwoosh.hpp"
#include "Dummy.hpp"


class Warlock {
private:
    const std::string name;
    std::string title;
    Warlock();
    Warlock(Warlock const &other);
    Warlock &operator=(Warlock const &other);
    std::vector<ASpell *> spellVect;



public:
    Warlock(const std::string &nName, const std::string &nTitle);

    ~Warlock();
    const std::string &getName() const;
    const std::string &getTitle() const;
    void setTitle(const std::string &nTitle);
    void introduce() const;

    void learnSpell(ASpell *spell);
    void forgetSpell(const std::string &spellName);
    void launchSpell(const std::string &spellname, ATarget &target);
};


#endif //EXAMANK05_WARLOCK_HPP
