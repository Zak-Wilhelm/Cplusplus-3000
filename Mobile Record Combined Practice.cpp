#include <iostream>
#include <string>
using namespace std;

class Mobile
{
	private:
		string brand_name;
		float mobile_price;
	public:
		Mobile(string brand, float price);
		void setPrice(float mobile_price);
		string getBrand() const;
		float getPrice() const;
};

Mobile::Mobile(string brand, float price)
{
	brand_name = brand;
	mobile_price = price;
}

void Mobile::setPrice(float mobile_price)
{
	this->mobile_price = mobile_price;
}

string Mobile::getBrand() const
{
	return brand_name;
}

float Mobile::getPrice() const
{
	return mobile_price;
}

int main()
{
	Mobile mobile1("Samsung", 25000);
	float price;
	cout << "what is the price of the mobile: ";
	cin >> price;

	mobile1.setPrice(price);

	cout << "Brand Name: " << mobile1.getBrand() << endl;
	cout << "Price: " << mobile1.getPrice() << endl;

	return 0;
}