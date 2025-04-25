#include <iostream>
#include <memory>
#include <vector>
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"
#include "Tiger.h"
#include "Snake.h"
#include "Horse.h"

using namespace std;

int main() {
    vector<unique_ptr<Animal>> animals;

    animals.push_back(make_unique<Dog>());
    animals.push_back(make_unique<Cat>());
    animals.push_back(make_unique<Cow>());
    animals.push_back(make_unique<Tiger>());
    animals.push_back(make_unique<Snake>());
    animals.push_back(make_unique<Horse>());

    for (const auto& animal : animals) {
        animal->makeSound();
    }

    system("pause");

    return 0;
}
