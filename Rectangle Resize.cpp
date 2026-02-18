#include <iostream>
using namespace std;

struct rectangle
{
	int length;
	int width;
};

void resize_rectangle(rectangle rect_copy, int factor);

int main()
{
	rectangle rect;
	int factor;

	cout << "Input the width then the length: ";
	cin >> rect.width;
	cin >> rect.length;

	cout << "What is the multiplying factor: ";
	cin >> factor;

	cout << "The area is: " << rect.width * rect.length << endl;

	resize_rectangle(rect, factor);

	cout << "The area is: " << rect.width * rect.length << endl;

	return 0;
}

void resize_rectangle(rectangle rect_copy, int factor)
{
	rect_copy.width = rect_copy.width * factor;
	rect_copy.length = rect_copy.length * factor;
	cout << "The new area is: " << rect_copy.width * rect_copy.length << endl;
}