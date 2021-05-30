#include <iostream>
#include <random>

int main(int argc, char** argv)
{
  std::random_device seed;
  std::default_random_engine engine(seed());
  std::exponential_distribution<> exponential(1.0/60.0);

  for(std::size_t i=0;i<10;++i) {
    std::cout << i << ": " << exponential(engine) << std::endl;
  }
}
