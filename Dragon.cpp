#include "Dragon.h"
#include <cmath>

Dragon::Dragon(int flamerange, string name, int level, int health_status, int force, int position=0) {
	// TODO Auto-generated constructor stub
	this->flamerange = flamerange;
	setName(name);
	setLevel(level);
	setHealthStatus(health_status);
	setForce(force);
	setPosition(position);
}

void Dragon::Fly(int f){
	position += f;
}

void Dragon::BlowFlame(Creature &obj){
	if(alive() && obj.alive()){
		if(this->flamerange >= abs(getPosition()-obj.getPosition())){ // getting always positive absolute values for range
			obj.Weak(level*force);
			Weak(abs(getPosition()-obj.getPosition()));
			if(!obj.alive()){
				this->level++;
			}
		}
	}
}

int Dragon::getFlamerange() const {
	return flamerange;
}

void Dragon::setFlamerange(int flamerange) {
	this->flamerange = flamerange;
}

Dragon::~Dragon() {
	// TODO Auto-generated destructor stub
}

