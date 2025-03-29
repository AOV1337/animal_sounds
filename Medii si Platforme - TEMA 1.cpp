/* Medii si Platforme - TEMA 1 - Ortiz Vulturu Alejandro
 Am folosit factory method in C++ */

#include <iostream>
#include <memory>
#include <vector>
using namespace std;

//Clasa baza pt animal
class Animal {
public:
    virtual void makeSound() const = 0;
    virtual ~Animal() {}
};


class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "Dog makes sound: Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "Cat makes sound: Meow!" << endl;
    }
};

class Cow : public Animal {
public:
    void makeSound() const override {
        cout << "Cow makes sound: Moo!" << endl;
    }
};

class Tiger : public Animal {
public:
    void makeSound() const override {
        cout << "Tiger makes sound: Roar!" << endl;
    }
};

class Snake : public Animal {
public:
    void makeSound() const override {
        cout << "Snake makes sound: Hiss!" << endl;
    }
};

class Horse : public Animal {
public:
    void makeSound() const override {
        cout << "Horse makes sound: Neigh!" << endl;
    }
};


//Factory-ul
class AnimalFactory {
public:
    static unique_ptr<Animal> createAnimal(const string& type) {
        if (type == "Dog") return make_unique<Dog>();
        if (type == "Cat") return make_unique<Cat>();
        if (type == "Cow") return make_unique<Cow>();
        if (type == "Tiger") return make_unique<Tiger>();
        if (type == "Snake") return make_unique<Snake>();
        if (type == "Horse") return make_unique<Horse>();
        return nullptr;
    }
};


int main() {
    vector<string> animalTypes = { "Dog", "Cat", "Cow", "Tiger", "Snake", "Horse" };
    vector<unique_ptr<Animal>> animals;

    // Crearea animalelor prin factory
    for (const auto& type : animalTypes) {
        animals.push_back(AnimalFactory::createAnimal(type));
    }

    // Iteratia
    for (const auto& animal : animals) {
        if (animal) {
            animal->makeSound();
        }
    }

    return 0;
}

