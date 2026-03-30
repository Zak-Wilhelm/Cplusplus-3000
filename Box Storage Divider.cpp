#include <iostream>
using namespace std;

class StorageBox
{
private:
	int item_count;
public:
	void ItemCount(int count)
	{
		item_count = count;
	}

	int getItemCount()
	{
		return item_count;
	}

	StorageBox operator/ (int divisor)
	{
		StorageBox resultbox;

		if (divisor != 0)
		{
			resultbox.item_count = item_count / divisor;
		}

		return resultbox;
	}
};

int main()
{
	StorageBox box1;
	StorageBox box2;

	int divisor;
	int item_count;

	cout << "Item Count: ";
	cin >> item_count;
	box1.ItemCount(item_count);
	cout << "Divisor: ";
	cin >> divisor;

	box2 = box1 / divisor;

	cout << "Current Item Count: " << box2.getItemCount() << endl;

	return 0;
}