#include <iostream>
#include <string>
using namespace std;

class Camera
{
public:
	int camera_megapixels;
};

class Music_Player
{
public:
	int speaker_power;
};

class Smartphone : public Camera, public Music_Player
{
public:
	string brand_name;
};

int main()
{
	Smartphone phone;

	phone.brand_name = "Samsung";
	phone.camera_megapixels = 64;
	phone.speaker_power = 20;

	cout << "Brand: " << phone.brand_name << endl;
	cout << "Camera Megapixels: " << phone.camera_megapixels << endl;
	cout << "Speaker Power: " << phone.speaker_power << endl;

	return 0;
}