#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
  this->name = name;
}

Zombie::~Zombie()
{
  std::cout << this->name << " is leaving this world..." << std::endl;
}

void  annonce(void)
{
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
