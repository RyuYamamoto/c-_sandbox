#include <iostream>

struct State
{
	double x;
	double y;
	double theta;
	State() : x(0.0), y(0.0), theta(0.0) {}
	State operator +(State pose_a)
	{
		State pose_b;
		pose_b.x = this->x + pose_a.x;
		pose_b.y = this->y + pose_a.y;
		pose_b.theta = this->theta + pose_a.theta;
		return pose_b;
	}

	State operator -(State pose_a)
	{
		State pose_b;
		pose_b.x = this->x - pose_a.x;
		pose_b.y = this->y - pose_a.y;
		pose_b.theta = this->theta - pose_a.theta;
		return pose_b;
	}
};

int main()
{
	State a,b;
	a.x = 1.0;
	a.y = 2.0;
	a.theta = 3.0;

	b.x = 3.0;
	b.y = 4.0;
	b.theta = 5.0;

	State c = a + b;

	std::cout << c.x << " " << c.y << " " << c.theta << std::endl;

	return 0;
}
