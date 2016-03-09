#include "Player.h"
#include "Link.h"

Link::Link(Link* pNext, Link*pPrev, Player* pPlayer){
	Link::pPlayer = pPlayer;
	Link::pNext= pNext;
	Link::pPrev = pPrev;
}
Link::~Link(){
	if (pPlayer != nullptr){
		delete pPlayer;
	}
	pPlayer = nullptr;
}