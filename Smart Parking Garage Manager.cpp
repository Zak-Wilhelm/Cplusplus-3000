#include <iostream>
using namespace std;

enum SpotStatus
{
	EMPTY,
	OCCUPIED,
	RESERVED,
};

void print_garagemap(const SpotStatus garage[3][4])
{
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 4; col++)
		{
			if (garage[row][col] == 0)
			{
				cout << "E  ";
			}
			else if (garage[row][col] == 1)
			{
				cout << "O  ";
			}
			else
			{
				cout << "R  ";
			}
		}
		cout << endl;
	}
}
int count_emptyspots(const SpotStatus garage[3][4])
{
	int count = 0;
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 4; col++)
		{
			if (garage[row][col] == EMPTY)
			{
				count++;
			}
		}
	}
	return count;
}

class ParkingGarage
{
	private:
		SpotStatus garage[3][4];
		int parkedcars[3];
	public:
		ParkingGarage()
		{
			for (int row = 0; row < 3; row++)
			{
				for (int col = 0; col < 4; col++)
				{
					if (row == 0 && col == 0)
					{
						garage[row][col] = RESERVED;
					}
					else
					{
						garage[row][col] = EMPTY;
					}
				}
			}
			for (int count = 0; count < 3; count++)
			{
				parkedcars[count] = 0;
			}
		}
		bool set_spotstatus(int floor, int spot, SpotStatus new_stat)
		{
			if ((floor >= 0 && floor <= 3) && (spot >= 0 && spot <= 4))
			{
				SpotStatus current_status = garage[floor][spot];

				if (new_stat == OCCUPIED)
				{
					if (current_status == EMPTY)
					{
						garage[floor][spot] = OCCUPIED;
						parkedcars[floor]++;
						return true;
					}
					else
					{
						cout << "Cannot Park Here" << endl;
						return false;
					}
				}
				if (new_stat == EMPTY)
				{
					if (current_status == OCCUPIED)
					{
						garage[floor][spot] = EMPTY;
						parkedcars[floor]--;
						return true;
					}
					else
					{
						cout << "Cannot park here" << endl;
						return false;
					}
				}
				if (new_stat == EMPTY)
				{
					if (current_status == EMPTY)
					{
						garage[floor][spot] = RESERVED;
						return true;
					}
					else
					{
						cout << "Cannot park here" << endl;
						return false;
					}
				}
			}
			else
			{
				cout << "Invalid floor or spotr number " << endl;
				return false;
			}
		}
		SpotStatus get_spotstatus(int floor, int spot)
		{
			return garage[floor][spot];
		}
		int get_parkedcars(int floor)
		{
			return parkedcars[floor];
		}
		void print_map()
		{
			print_garagemap(garage);
		}
		int total_emptyspots()
		{
			return count_emptyspots(garage);
		}
};


int main()
{
	ParkingGarage parkgar;

	int n;
	cin >> n;

	int floor = 0, spot;
	char enumeration;
	for (int times = 0; times < n; times++)
	{
		cin >> floor;
		cin >> spot;
		cin >> enumeration;
		if (enumeration == 'P')
		{
			parkgar.set_spotstatus(floor, spot, OCCUPIED);
		}
		else if (enumeration == 'L')
		{
			parkgar.set_spotstatus(floor, spot, EMPTY);
		}
		else
		{
			parkgar.set_spotstatus(floor, spot, RESERVED);
		}
	}

	parkgar.print_map();
	cout << "Empty Spots: " <<  parkgar.total_emptyspots() << endl;
	for (int index = 0; index < 3; index++)
	{
		cout << "Parked Cars on Floor " << index + 1 << ": " << parkgar.get_parkedcars(index) << endl;
	}
}