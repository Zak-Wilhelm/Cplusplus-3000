#include <iostream>
using namespace std;

class Rectangle
{
	private:
		float length;
		float width;
	public:
		void set_dimensions(int rect_width, int rect_length)
		{
			length = rect_length;
			width = rect_width;
		}
		float area()
		{
			return length * width;
		}
		float perimeter()
		{
			return 2 * (length + width);
		}
		void display_details()
		{
			cout << "Length: " << length << endl;
			cout << "Width: " << width << endl;
			cout << "Area: " << area() << endl;
			cout << "Perimeter: " << perimeter() << endl;
		}
};

int main()
{
	Rectangle rect1;
	rect1.set_dimensions(5, 3);
	rect1.display_details();

	return 0;
}