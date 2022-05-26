#include "QuickRecover.h"
#include <iostream>

using namespace std; 
      
        QuickRecover::QuickRecover(){
            level = 0;
        }

        QuickRecover::QuickRecover(int level_in){
            level = level_in;
        }

        int QuickRecover::get_level(){
            return level;
        }

        void QuickRecover::set_level(int level_in){
            level = level_in;
        }
