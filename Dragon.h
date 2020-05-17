#ifndef DRAGON_H_
#define DRAGON_H_
#include "Creature.h"
#include <iostream>
#include <cmath>
using namespace std;

class Dragon:public Creature {
private:
	int flamerange;
public:
	Dragon(int flamerange, string name, int level, int health_status, int force, int position=0);
	void Fly(int f);
	void BlowFlame(Creature &obj);
	virtual ~Dragon();
	int getFlamerange() const;
	void setFlamerange(int flamerange);
};

#endif /* DRAGON_H_ */
