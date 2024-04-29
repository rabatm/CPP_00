#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;
//peux tu ecrire la suit de la fonction main qui utilise les classes Dog et Cat
return 0;
}