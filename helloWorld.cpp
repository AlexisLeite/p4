#include <iostream>
#include <string>

class Greeter
{
public:
  void readName()
  {
    std::cout << "Please enter your name: ";
    std::cin >> name;
  }

  void Greet() const
  {
    std::cout << "Hello, " << name << "!" << std::endl;
    std::cin.ignore(10000, '\n');
    std::cin.get();
  }

private:
  std::string name;
};

int main()
{
  Greeter greeter;
  greeter.readName();
  greeter.Greet();

  return 0;
}
