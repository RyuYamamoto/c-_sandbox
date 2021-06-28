#include <iostream>
#include <Eigen/Dense>
#include <Eigen/Geometry>

int main()
{
	Eigen::Vector3f acc, acc_result;

	Eigen::Matrix3f rot_x, rot_y, rot_z;
	rot_x = Eigen::AngleAxisf(0.1, Eigen::Vector3f(1.0, 0.0, 0.0));
	rot_y = Eigen::AngleAxisf(0.1, Eigen::Vector3f(0.0, 1.0, 0.0));
	rot_z = Eigen::AngleAxisf(0.1, Eigen::Vector3f(0.0, 0.0, 1.0));

	acc_result = ( rot_z * (rot_y * (rot_x * acc)));

	std::cout << acc_result << std::endl;

	return 0;
}
