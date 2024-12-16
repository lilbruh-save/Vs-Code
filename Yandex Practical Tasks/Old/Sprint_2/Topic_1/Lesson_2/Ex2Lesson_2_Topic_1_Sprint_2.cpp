// Используйте структуру Person, чтобы объявить в программе двух волшебников: Harry Potter и Hermione Granger. Затем выведите их в стандартный поток вывода:
#include <iostream>

struct Person
{
  std::string name;
  std::string surname;
};

using namespace std::literals;

int main()
{
  Person person1;
  Person person2;

  person1.name = "Harry";
  person1.surname = "Potter";
  person2.name = "Hermione";
  person2.surname = "Granger";

  std::cout << person1.name << " " << person1.surname << std::endl 
  << person2.name << " " << person2.surname;  

}