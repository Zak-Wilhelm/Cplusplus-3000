#include <iostream>
using namespace std;

class Trip
{
	private:
		float distance;
		float ratepkm;
	public:
		Trip()
		{
			distance = 0;
			ratepkm = 12.5;
		}
		void set_distance(int dist)
		{
			if (dist >= 0)
			{
				distance = dist;
			}
			else
			{
				cout << "Invalid Distance" << endl;
			}
		}
		void set_rate(int rpkm)
		{
			if (rpkm > 0)
			{
				ratepkm = rpkm;
			}
			else
			{
				cout << "Invalid Rate" << endl;
			}
		}
		float get_fare()
		{
			return distance * ratepkm;
		}
};

int main()
{
	Trip trip1;

	int dist, rpkm;
	cin >> dist;
	cin >> rpkm;

	trip1.set_distance(dist);
	trip1.set_rate(rpkm);

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "Fare: " << trip1.get_fare() << endl;

	return 0;
}