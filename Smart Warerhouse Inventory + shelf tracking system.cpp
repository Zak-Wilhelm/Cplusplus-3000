#include <iostream>
#include <string>
using namespace std;

enum SlotStatus
{
	EMPTY,
	OCCUPIED,
	RESERVED,
};

class WarehouseSystem
{
	private:
		int shelfunits[4][5];
		SlotStatus slotstatus[4][5];
		int shippedUPD[7];
		int totalunits;
	public:
		void initialize()
		{
			for (int days = 0; days < 7; days++)
			{
				shippedUPD[days] = 0;
			}
			for (int rows = 0; rows < 4; rows++)
			{
				for (int cols = 0; cols < 5; cols++)
				{
					shelfunits[rows][cols] = 0;
					slotstatus[rows][cols] = EMPTY;
				}
			}
		}
		void display_shelves()
		{
			for (int rows = 0; rows < 4; rows++)
			{
				for (int cols = 0; cols < 5; cols++)
				{
					if (slotstatus[rows][cols] == EMPTY)
					{
						cout << "E  ";
					}
					else if (slotstatus[rows][cols] == OCCUPIED)
					{
						cout << "O  ";
					}
					else if (slotstatus[rows][cols] == RESERVED)
					{
						cout << "R  ";
					}
				}
				cout << endl;
			}
		}
		void reserve(int row, int col)
		{
			if (slotstatus[row][col] == 0)
			{
				slotstatus[row][col] = RESERVED;
				cout << "Slot reserved" << endl;
			}
			else
			{
				cout << "slot is already occupied" << endl;
			}
		}
		void add_stock(int row, int col, int units)
		{
			if ((row > 0 && row < 4) && (col > 0 && col < 5) && units > 0)
			{
				if (slotstatus[row][col] == EMPTY || slotstatus[row][col] == RESERVED)
				{
					shelfunits[row][col] = units;
					slotstatus[row][col] = OCCUPIED;
					totalunits += units;
				}
			}
		}
		void ship_stock(int row, int col, int units, int day_number)
		{
			if ((day_number > 0 && day_number < 7) && slotstatus[row][col] == OCCUPIED)
			{
				if (units <= shelfunits[row][col])
				{
					shelfunits[row][col] -= units;
					totalunits -= units;
					shippedUPD[day_number - 1] = units;
					if (shelfunits[row][col] == 0)
					{
						slotstatus[row][col] = EMPTY;
					}
				}
			}
		}
		void weekly_report()
		{
			int total_shipped = 0;
			for (int days = 0; days < 7; days++)
			{
				cout << "Day " << days + 1 << ": " << shippedUPD[days] << endl;
				total_shipped += shippedUPD[days];
			}
			cout << "Total Shipped: " << total_shipped << endl;
		}
		void best_shipped_day()
		{
			int high = 0;
			int day = 0;
			for (int days = 0; days < 7; days++)
			{
				if (shippedUPD[days] > high)
				{
					high = shippedUPD[days];
					day = days + 1;
				}
			}
		}
};

int main()
{
	WarehouseSystem warehouse;
	warehouse.initialize();

	warehouse.display_shelves();

	warehouse.reserve(0, 2);
	warehouse.add_stock(0, 2, 50);

	warehouse.add_stock(1, 1, 30);
	warehouse.add_stock(2, 4, 20);

	warehouse.ship_stock(0, 2, 10, 1);
	warehouse.ship_stock(1, 1, 15, 4);

	warehouse.display_shelves();
	warehouse.weekly_report();
	warehouse.best_shipped_day();

	return 0;
}