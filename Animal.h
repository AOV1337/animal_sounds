#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal {
protected:
    string type;
    string sound;
public:
    Animal(const string& type, const string& sound);
    virtual void makeSound() const;
    virtual ~Animal() {}
};

#endif
