// Player.h
#ifndef PLAYER_H
#define PLAYER_H

class Player
{
private:
	char* firstName;
	char* lastName;
	double  subscription;
	int p;
public:

	Player();
	Player(char*, char*, double, int);
	Player(Player&);
	~Player();
	void Print();
	bool operator==(Player&);
};

#endif
