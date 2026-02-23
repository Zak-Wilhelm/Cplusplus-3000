#include <iostream>
#include <string>
using namespace std;

enum matches
{
	loss,
	tie,
	win,
};

struct teamplayers
{
	int id;
	string name;
	int goals;
};

struct results
{
	string teamname;
	matches match_result[3];
	teamplayers team[4];
};

void input_players(teamplayers team[][4], int teams, int players)
{
	for (int index = 0; index < teams; index++)
	{
		cout << "Team " << index + 1;
		for (int player = 0; player < players; player++)
		{
			cout << "Player " << player + 1 << " id: ";
			cin >> team[index][player].id;

			cout << "Name: ";
			cin >> team[index][player].name;

			cout << "Goals Scored: ";
			cin >> team[index][player].goals;
		}
	}
}

void build_teams(results games[], teamplayers team[][4], int teams, int players)
{
	for (int index = 0; index < teams; index++)
	{
		for (int playerindex = 0; playerindex < players; playerindex++)
		{
			games[index].team[playerindex] = team[index][playerindex];
		}
	}
}

void match_results(results games[], int teams, int count)
{
	int choice;

	for (int team = 0; team < teams; team++)
	{
		for (int match = 0; match < count; match++)
		{
			cout << "Match " << match + 1 << " (0 for loss, 1 for tie, 2 for win)";
			cin >> choice;

			if (choice == 0)
			{
				games[team].match_result[match] = loss;
			}
			else if (choice == 1)
			{
				games[team].match_result[match] = tie;
			}
			else if (choice == 2)
			{
				games[team].match_result[match] = win;
			}
		}
	}
}

void display_results(const results games[], int team_count, int ppt, int match_count)
{
	int pointslead = 0;
	int goalslead = 0;
	int winner = 0;

	for (int index = 0; index < team_count; index++)
	{
		int goals = 0;
		int points = 0;

		for (int playerind = 0; playerind < ppt; playerind++)
		{
			cout << games[index].team[playerind].id << " " << games[index].team[playerind].name << " goals " << games[index].team[playerind].goals << endl;

			goals += games[index].team[playerind].goals;
		}

		for (int mindex = 0; mindex < match_count; mindex++)
		{
			if (games[index].match_result[mindex] == win)
			{
				points += 3;
			}
			else if (games[index].match_result[mindex] == tie)
			{
				points += 1;
			}
			else if (games[index].match_result[mindex] == loss)
			{
				points += 0;
			}
		}

		cout << "Total Goals: " << goals << endl;
		cout << "Total Points: " << points << endl;

		if (points > pointslead || points == pointslead && goals > goalslead)
		{
			pointslead = points;
			goalslead = goals;
			winner = index;
		}
	}

	cout << "Winner is: " << games[winner].teamname << endl;
	cout << "Points: " << pointslead;
	cout << "Goals: " << goalslead;
}

int main()
{
	const int teams = 3;
	const int players = 4;
	const int count = 3;

	teamplayers player[teams][players];
	results games[teams];

	for (int index = 0; index < teams; index++)
	{
		cout << "Enter team " << index + 1 << " name: ";
		cin >> games[index].teamname;
	}

	input_players(player, teams, players);
	build_teams(games, player, teams, players);
	match_results(games, teams, count);
	display_results(games, teams, players, count);

	return 0;
}