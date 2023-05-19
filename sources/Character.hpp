//
// Created by super on 5/10/23.
//

#ifndef COWBOY_VS_NINJA_A1_CHARACTER_HPP
#define COWBOY_VS_NINJA_A1_CHARACTER_HPP
#include "Point.hpp"

namespace ariel{
    class Character{
   // protected:
        Point position;
        int hitsp;
        string name;
        bool inTeam = false;
    public:
        Character(const Point& position, int hitsp, const string& name);
        virtual ~Character() = default;

        Point& getLocation();
        void setPosition(Point other); // ????????
        int getHp() const;
        const string& getName() const;
        bool getInTeam() const;
        void setInTeam(bool in_team);

        bool isAlive() const;
        virtual double distance(Character* other);

        string print() const;
        void hit(int damage);
    };
}

#endif //COWBOY_VS_NINJA_A1_CHARACTER_HPP
