#include <iostream>
#include <string>
using namespace std;

class Game
{
private:
	int score;
public:
	void setscore(int score1)
	{
		score = score1;
	}

	int getscore()
	{
		return score;
	}
};

class Player : public Game
{
private:
	string name;
public:
	void setname(string name1)
	{
		name = name1;
	}

	void display()
	{
		cout << "Player Results" << endl;
		cout << "Name: " << name << endl;
		cout << "Score: " << getscore() << endl;
	}
};

int main()
{
	Player player1;
	player1.setscore(88);
	player1.setname("Rahul");
	player1.display();

	return 0;
}