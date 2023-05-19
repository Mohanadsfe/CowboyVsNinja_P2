//
// Created by super on 5/10/23.
//

#ifndef COWBOY_VS_NINJA_A1_SMARTTEAM_HPP
#define COWBOY_VS_NINJA_A1_SMARTTEAM_HPP

#include "Team.hpp"

namespace ariel{
    class SmartTeam: public Team{
    private:
        Character** warriors;
        Character* leader;
        int size = 0; //number of warriors in the team
    public:
        SmartTeam(Character* leader);
        ~SmartTeam()override;

        void attack(Team* team);
    };
}

#endif //COWBOY_VS_NINJA_A1_SMARTTEAM_HPP
