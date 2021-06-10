#include <Eigen/Core>
#include <iostream>

int main()
{
  Eigen::Vector4d v;
  Eigen::Matrix4d C;

  v << 1,2,3,4;
  C = v.asDiagonal();

  std::cout << C << std::endl;

  return 0;
}
