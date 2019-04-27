#ifndef RANDOMPLAYER_H
#define RANDOMPLAYER_H

#include "PlayerBase.h"
#include <cstdlib>

class RandomPlayer : public PlayerBase {
public:
	RandomPlayer(const size_t newId, const String& newName) : PlayerBase(newId, newName) {}
	MoveType move() {
		return MoveType(rand() % 3);
	}
	PlayerBase* copy() const {}
	~RandomPlayer() {};
};

#endif // !RANDOMPLAYER_H