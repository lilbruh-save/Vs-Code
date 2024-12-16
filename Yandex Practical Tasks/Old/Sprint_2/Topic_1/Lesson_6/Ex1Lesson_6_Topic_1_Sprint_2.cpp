#include <iostream>
#include <string>

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
    if (distance > 0)
    {
      total_distance_ += distance;
      std::cout << name_ << " flies " << distance << "km. Total flight distance is " << total_distance_ << "km." << std::endl;
    }
    else
    {
      std::cout << name_ << " cannot fly a negative or zero distance!" << std::endl;
    }
  }

private:
  std::string name_;
  int total_distance_;
};

int main()
{
  Duck duck1;
  duck1.SetName("Whisper Quack"s);
  Duck duck2;
  duck2.SetName("Fire Wing"s);

  int num_commands = 0;
  std::cin >> num_commands;

  for (int i = 0; i < num_commands; ++i)
  {
    int duck_number, distance;
    std::cin >> duck_number >> distance;
    if (duck_number == 1)
    {
      duck1.Fly(distance);
    }
    else if (duck_number == 2)
    {
      duck2.Fly(distance);
    }
  }
}