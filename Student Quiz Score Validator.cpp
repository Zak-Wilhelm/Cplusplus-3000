#include <iostream>
using namespace std;

class QuizResult
{
	private:
		float score = 0;
	public:
		void newscore(int mark)
		{
			if (mark <= 100 && mark >= 0)
			{
				score = mark;
			}
			else
			{
				cout << "Invalid Score" << endl;
			}
		}

		int get_score()
		{
			return score;
		}
};

int main()
{
	QuizResult student1;

	int mark;
	cin >> mark;
	
	student1.newscore(mark);

	cout << "Final Score: " << student1.get_score() << endl;

	return 0;
}