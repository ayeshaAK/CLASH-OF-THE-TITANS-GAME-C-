#ifndef CREATURE_H_
#define CREATURE_H_
#include <iostream>
#include <string>
using namespace std;

class Creature {
private:
	string name;
	int level;
	int health_status;
	int force;
	int position;
public:
	Creature();
	Creature(string name, int level, int health_status, int force, int position=0);
	bool alive();
	int AttackPoints();
	void Move(int p);
	void GoodBye();
	void Weak(int n);
	void Display();
	int getForce() const;
	void setForce(int force);
	int getHealthStatus() const;
	void setHealthStatus(int healthStatus);
	int getLevel() const;
	void setLevel(int level);
	string getName() const;
	void setName(string name);
	int getPosition() const;
	void setPosition(int position);
	virtual ~Creature();
};

#endif /* CREATURE_H_ */






