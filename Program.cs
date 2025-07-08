using System;
using System.Collections.Generic;
using Animals;

class Program
{
    static void Main()
    {
        List<Animal> animals = new List<Animal>
        {
            new Dog(),
            new Cat(),
            new Cow()
        };

        foreach (var animal in animals)
        {
            animal.DescribeSound();
        }
    }
}
