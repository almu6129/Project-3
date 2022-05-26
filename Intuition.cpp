#include <iostream>
#include "Intuition.h"   

using namespace std;
       
        Intuition::Intuition(){
            level = 0;
        }

        Intuition::Intuition(int level_in){
            level = level_in;
        }

        int Intuition::get_level(){
            return level;
        }

        void Intuition::set_level(int level_in){
            level = level_in;
        }