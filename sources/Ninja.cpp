//
// Created by super on 5/10/23.
//

#include "Ninja.hpp"
#include <iostream>
using namespace ariel;
using namespace std;

Ninja::Ninja(Point position, int hitsp, const string& name, int speed):Character(position, hitsp, name), speed(speed){}

int Ninja::getSpeed() const{
    return speed;
}

 Ninja::~Ninja(){}


void Ninja::slash(Character* target){
    if(target == nullptr){
        throw runtime_error("target cannot be null");
    }
    if(this == target){
        throw runtime_error("you cannot slash yourself");
    }
    if(!this->isAlive()){
        throw runtime_error("you cannot slash if you are dead");
    }
    else if(!target->isAlive()){
        throw runtime_error("you cannot slash a dead target");
    }
    else{
        if(this->distance(target) <= 1){
            target->hit(40);
        }
    }
}

void Ninja::move(Character* target){ ///???????????????????
    if(this->isAlive()){
        this->setPosition(Point::moveTowards(this->getLocation(), target->getLocation(), speed));
    }
}
