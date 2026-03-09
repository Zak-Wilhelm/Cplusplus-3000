#include <iostream>
using namespace std;

class Fan
{
	private:
		float speed;
	public:
		Fan();
		void setSpeed(float speed);
		float getSpeed() const;
};
Fan::Fan()
{
	speed = 0;
}

void Fan::setSpeed(float speed)
{
	this->speed = speed;
}

float Fan::getSpeed() const
{
	return speed;
}

int main()
{
	Fan fan1;
	float speed;

	cout << "What is the speed of the fan: ";
	cin >> speed;

	fan1.setSpeed(speed);
	cout << "Speed: " << fan1.getSpeed();

	return 0;
}