#include "Creature.h"
#include <iostream>
#include <string>
using namespace std;


Creature::Creature() {
	// TODO Auto-generated constructor stub
	this->name = "\0";
	this->level = 0;
	this->health_status = 0;
	this->force = 0;
	this->position = 0;
}

Creature::Creature(string name, int level, int health_status, int force, int position=0){
	this->name = name;
	this->level = level;
	this->health_status = health_status;
	this->force = force;
	this->position = position;
}

void Creature::Move(int p){
	this->position += p;
}

void Creature::GoodBye(){
	cout << name << " is no more1\n";
}

int Creature::AttackPoints(){
	if(!alive()){return 0;}
	return force*level;
}

bool Creature::alive(){
	if(this->health_status > 0){
		return true;
	}
	return false;
}

void Creature::Weak(int n){
	if(alive()){
		this->health_status -= n;
		if(!alive()){
			GoodBye();
		}
	}
}

void Creature::Display(){
	cout << name << ", Level: " << level << ", Health Status: " << health_status <<
			", Force: " << force << ", Attacking Points: " << force*level << ", Position: " << position << "\n";
}

int Creature::getForce() const {
	return force;
}

void Creature::setForce(int force) {
	this->force = force;
}

int Creature::getHealthStatus() const {
	return health_status;
}

void Creature::setHealthStatus(int healthStatus) {
	health_status = healthStatus;
}

int Creature::getLevel() const {
	return level;
}

void Creature::setLevel(int level) {
	this->level = level;
}

string Creature::getName() const {
	return name;
}

void Creature::setName(string name) {
	this->name = name;
}

int Creature::getPosition() const {
	return position;
}

void Creature::setPosition(int position) {
	this->position = position;
}

Creature::~Creature() {
	// TODO Auto-generated destructor stub
}

