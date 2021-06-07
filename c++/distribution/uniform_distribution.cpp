#include <iostream>
#include <random>

int main(int argc, char** argv)
{
  std::random_device seed;
  std::default_random_engine engine(seed());
  std::uniform_real_distribution<> uniform(-1.0, 1.0);

  for(std::size_t i=0;i<10;++i) {
    std::cout << i << ": " << uniform(engine) << std::endl;
  }
}
