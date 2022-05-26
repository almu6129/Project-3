#include <iostream>
#include "Personability.h"

using namespace std;
 
        Personability::Personability(){
            level = 0;
        }

        Personability::Personability(int level_in){
            level = level_in;
        }

        int Personability::get_level(){
            return level;
        }

        void Personability::set_level(int level_in){
            level = level_in;
        }