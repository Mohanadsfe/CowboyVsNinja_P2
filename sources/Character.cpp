//
// Created by super on 5/10/23.
//

#include "Character.hpp"
#include <iostream>
using namespace ariel;
using namespace std;

Character::Character(const Point& position, int hitsp, const string& name):position(position), hitsp(hitsp), name(name){}

Point& Character::getLocation(){
    return position;
}

void Character::setPosition(ariel::Point other){

    this->position.setX(other.getX());
    this->position.setY(other.getY());

}


int Character::getHp() const{
    return hitsp;
}
const string& Character::getName() const{
    return name;
}

bool Character::isAlive() const{
    if(hitsp > 0){
        return true;
    }
    return false;
}

bool Character::getInTeam() const{
    return inTeam;
}

void Character::setInTeam(bool in_team){
    this->inTeam = in_team;
}

double Character::distance(Character* other){
    return position.distance(other->getLocation());
}

string Character::print() const{
    return name + " " + position.print() + " " + to_string(hitsp);
}

void Character::hit(int damage){
    if(damage < 0){
        throw invalid_argument("damage cannot be negative");
    }
    hitsp -= damage;
}
