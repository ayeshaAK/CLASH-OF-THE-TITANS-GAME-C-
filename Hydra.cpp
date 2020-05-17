#include "Hydra.h"

Hydra::Hydra(string name, int level, int health_status, int force, int position=0, int necklength, int poisondose) {
	// TODO Auto-generated constructor stub
	this->name = name;
	this->level = level;
	this->health_status = health_status;
	this->force = force;
	this->position = position;
	this->poisondose = poisondose;
	this->necklength = necklength;
}

void Hydra::InjectPoison(Creature &obj){
	if(alive() && obj.alive()){
		if(this->necklength >= abs(getPosition()-obj.getPosition())){ // getting always positive absolute values for range
			obj.Weak((level*force)+poisondose);
			Weak(abs(getPosition()-obj.getPosition()));
			if(!obj.alive()){
				this->level++;
			}
		}
	}
}

Hydra::~Hydra() {
	// TODO Auto-generated destructor stub
}

