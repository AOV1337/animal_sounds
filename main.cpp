#include <iostream>
#include <memory>
#include <vector>
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"

using namespace std;

int main() {
    vector<unique_ptr<Animal>> animals;

    animals.push_back(make_unique<Dog>());
    animals.push_back(make_unique<Cat>());
    animals.push_back(make_unique<Cow>());

    for (const auto& animal : animals) {
        animal->makeSound();
    }
    
    system("pause");

    return 0;
}
