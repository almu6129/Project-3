#include <iostream>
#include <vector>
#include <string>
#include "Pool.h"

using namespace std;

void Pool::add_to_can_accuse(string name){
    can_accuse.push_back(name);
}

bool Pool::get_can_accuse(string name){

    bool is_in = 0;
    string temp;

    for(int i = 0; i<can_accuse.size();i++){
        temp = can_accuse[i];
        
        if(temp == name){
            return true;
        }
    }
    return false;
}

void Pool::print_can_accuse(){
    for(int i = 0; i<can_accuse.size();i++){
        cout<<can_accuse[i]<<endl;
    }
}