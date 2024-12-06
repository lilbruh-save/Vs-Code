#include <iostream>
#include <string>
#include <vector>

using namespace std::literals;

class Duck
{
public:
  void SetName(const std::string &name)
  {
    name_ = name;
  }
  void Fly(int distance)
  {
      total_distance_ += distance;
      std::cout << name_ << " flies " << distance << "km. Total flight distance is " << total_distance_ << "km." << std::endl;
  }

private:
  std::string name_;
  int total_distance_;
};

int main()
{
  int num_ducks;
  std::cin >> num_ducks;

  std::vector<Duck> ducks(num_ducks);

  for (int i = 0; i < num_ducks; ++i) {
        std::string name;
        std::cin.ignore();
        std::getline(std::cin, name);
        ducks[i].SetName(name);
    }

    int num_commands;
    std::cin >> num_commands;

    for (int i = 0; i < num_commands; ++i) {
        int duck_number, distance;
        std::cin >> duck_number >> distance;

        ducks[duck_number].Fly(distance);
    }
}