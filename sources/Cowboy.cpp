//
// Created by super on 5/10/23.
//
#include "Cowboy.hpp"
#include <iostream>
using namespace ariel;
using namespace std;

Cowboy::Cowboy(const string& name, Point position): Character(position, 110, name), bullets(6){}

int Cowboy::getBullets() const{
    return bullets;
}

 Cowboy::~Cowboy(){}

void Cowboy::shoot(Character* target){
    if(target == nullptr){
        throw runtime_error("target cannot be null");
    }
  
    if(!this->isAlive()){
        throw runtime_error("you cannot shoot if you are dead");
    }
    else if(!target->isAlive()){
        throw runtime_error("you cannot shoot a dead target");
    }
    if(this == target){
        throw runtime_error("you cannot shoot yourself");
    }

    else{
        if(this->hasboolets() && isAlive() && target != nullptr && this != target){ /// ????
            bullets--;
            target->hit(10);
        }
        // else{
        //     reload();
        // }
    }
}

bool Cowboy::hasboolets() const{
    if(!this->isAlive()) {
        throw runtime_error("you cannot have bullets if you are dead");
    }
    return (bullets > 0);
}

void Cowboy::reload(){
    if(!this->isAlive()) {
        throw runtime_error("you cannot reload if you are dead");
    }
    bullets = 6;
}

