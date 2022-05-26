#include <iostream>
#include "Hardiness.h"   

using namespace std;
        
        Hardiness::Hardiness(){
            level = 0;
        }

        Hardiness::Hardiness(int level_in){
            level = level_in;
        }

        int Hardiness::get_level(){
            return level;
        }

        void Hardiness::set_level(int level_in){
            level = level_in;
        }