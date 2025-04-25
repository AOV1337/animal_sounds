#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal(const string& type, const string& sound)
    : type(type), sound(sound) {}

void Animal::makeSound() const {
    cout << type << " makes sound: " << sound << endl;
}
