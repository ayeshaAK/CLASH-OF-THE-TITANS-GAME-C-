#ifndef HYDRA_H_
#define HYDRA_H_
#include "Creature.h"

class Hydra:public Creature {
public:
	int necklength;
	int poisondose;
public:
	Hydra(string name, int level, int health_status, int force, int position=0, int necklength, int poisondose);
	void InjectPoison(Creature &obj);
	virtual ~Hydra();
};

#endif /* HYDRA_H_ */
