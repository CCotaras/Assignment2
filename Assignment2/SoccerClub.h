// SoccerClub.h
#include "Link.h"
#include "Player.h"

#include <ostream>


#ifndef SOCCER_H
#define SOCCER_H

class SoccerClub
{
	Link* pPlayers;
public:
	SoccerClub();
	~SoccerClub();
	void AddPlayer();
	void DeletePlayer();
	void PrintPlayersForward();
	void PrintPlayersReverse();
	void FindPlayer();
	Player* operator[](unsigned int);
	friend ostream&  operator<<(ostream&, SoccerClub&);
};

#endif
