//
// Created by Cesar Erebus on 12/1/21.
//

#ifndef WARLOCK_HPP
#define WARLOCK_HPP


#include <string>

class Warlock {
private:
    const std::string name;
    std::string title;
    Warlock();
    Warlock(Warlock const &other);
    Warlock &operator=(Warlock const &other);
public:
    Warlock(const std::string &nName, const std::string &nTitle);

    ~Warlock();
    const std::string &getName() const;
    const std::string &getTitle() const;
    void setTitle(const std::string &nTitle);
    void introduce() const;
};


#endif //EXAMANK05_WARLOCK_HPP
