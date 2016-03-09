#include "Player.h"
#include "Link.h"
#include "SoccerClub.h"
#include <iostream>

using namespace std;


SoccerClub::SoccerClub(){
	pPlayers = nullptr;
}

void SoccerClub::AddPlayer(){

}
void SoccerClub::DeletePlayer(){

}
void SoccerClub::PrintPlayersForward(){

}
void SoccerClub::PrintPlayersReverse(){

}
void SoccerClub::FindPlayer(){

}

Player* SoccerClub::operator[](unsigned int){
	Player* temp = nullptr;
	return temp;
}

ostream&  operator << (ostream& oc, SoccerClub&){
	return oc;
}

SoccerClub::~SoccerClub(){
	if (pPlayers != nullptr){
		delete pPlayers;
	}
}