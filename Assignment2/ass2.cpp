#include "Player.h"
#include "Link.h"
#include "SoccerClub.h"
#include <iostream>

using namespace std;


void Print(Player p)
{
	p.Print();
}

int main()
{
	SoccerClub sc;
	bool RUNNING = true;
	char response;
	int index;

	while (RUNNING)
	{
		cout << "\nPlease select an option:" << endl;
		cout << "1. Add a Player" << endl;
		cout << "2. Delete a Player" << endl;
		cout << "3. Print out a particular Player" << endl;
		cout << "4. Print out Players" << endl;
		cout << "5. Print out Players in reverse order" << endl;
		cout << "6. Find a Player for a particular position" << endl;
		cout << "q. Quit" << endl;
		cout << "CHOICE: ";
		cin >> response;

		switch (response)
		{
		case '1':sc.AddPlayer(); break;
		case '2':sc.DeletePlayer(); break;
		case '3':
			cout << "please enter the player index: ";
			cin >> index;
			sc[index] != nullptr ? Print(*(sc[index])) : cout << "Invalid Index" << endl;
			break;
		case '4':cout << sc; break;
		case '5':sc.PrintPlayersReverse(); break;
		case '6':sc.FindPlayer(); break;
		case 'q': return 0;
		default:cout << "Please enter a valid option\n";
		}
		cout << "\n";
	}
}
