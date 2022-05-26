#include <iostream>
#include <string>
#include <fstream>
#include "Weapons.h"        //Including our header file

using namespace std;

Weapon::Weapon(){   //Our non parameterized constructor
    name = "";  
    is_killer_weapon = false;
}

    //The parameterized constructor that sets the variables to input
Weapon::Weapon(bool is_killer_weapon_input, string input_name, string file_name_non_killer, string file_name_killer){
    name = input_name;
    is_killer_weapon = is_killer_weapon_input;
    fileNameKiller = file_name_killer;
    fileNameNonKiller = file_name_non_killer;
}

string Weapon::get_weapon_name(){   //The getter that returns the weapon name
    return name;
}

void Weapon::set_weapon_name(string input_name){    //The setter that sets the weapon name to input
    name = input_name;
}

/*
This is a function that will take in the level of intuition that the player. From there it will determine how many strings to print to the screen. The strings will be taken
from a file stream determined from the parameterized constructor.
Parameters: The level of intuition of the player.
Returns: Nothing, it only prints to the screen.
*/
void Weapon::get_weapon_clues(int intuition_level){

    string temp;
    int personability = intuition_level;

if(personability == 1){     //The if statement coenciding with the personability level
    if(is_killer_weapon == 1){
        ifstream input_killer_room;
        input_killer_room.open(fileNameKiller);     //Setting up the input file stream for the killer
        for(int i = 0;i<=1;i++){
            getline(input_killer_room,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }else{
        ifstream input_non_killer_room;
        input_non_killer_room.open(fileNameNonKiller);     //Setting up the input file stream for the non killer
        for(int i = 0;i<=1;i++){
            getline(input_non_killer_room,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }
    }
else if(personability == 2){     //The if statement coenciding with the personability level
    if(is_killer_weapon == 1){
        ifstream input_killer_room;
        input_killer_room.open(fileNameKiller);     //Setting up the input file stream for the killer
        for(int i = 0;i<=2;i++){
            getline(input_killer_room,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }else{
        ifstream input_non_killer_room;
        input_non_killer_room.open(fileNameNonKiller);     //Setting up the input file stream for the non killer
        for(int i = 0;i<=2;i++){
            getline(input_non_killer_room,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }
    }
else if(personability == 3){     //The if statement coenciding with the personability level
    if(is_killer_weapon == 1){
        ifstream input_killer_room;
        input_killer_room.open(fileNameKiller);     //Setting up the input file stream for the killer
        for(int i = 0;i<=3;i++){
            getline(input_killer_room,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }else{
        ifstream input_non_killer_room;
        input_non_killer_room.open(fileNameNonKiller);     //Setting up the input file stream for the non killer
        for(int i = 0;i<=3;i++){
            getline(input_non_killer_room,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }
    }
else if(personability == 4){     //The if statement coenciding with the personability level
    if(is_killer_weapon == 1){
        ifstream input_killer_room;
        input_killer_room.open(fileNameKiller);     //Setting up the input file stream for the killer
        for(int i = 0;i<=4;i++){
            getline(input_killer_room,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }else{
        ifstream input_non_killer_room;
        input_non_killer_room.open(fileNameNonKiller);     //Setting up the input file stream for the non killer
        for(int i = 0;i<=4;i++){
            getline(input_non_killer_room,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }                  
    }
else if(personability == 5){     //The if statement coenciding with the personability level
    if(is_killer_weapon == 1){
        ifstream input_killer_room;
        input_killer_room.open(fileNameKiller);     //Setting up the input file stream for the killer
        for(int i = 0;i<=5;i++){
            getline(input_killer_room,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }else{
        ifstream input_non_killer_room;
        input_non_killer_room.open(fileNameNonKiller);     //Setting up the input file stream for the non killer
        for(int i = 0;i<=5;i++){
            getline(input_non_killer_room,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }                   
    }
else if(personability == 6){     //The if statement coenciding with the personability level
    if(is_killer_weapon == 1){
        ifstream input_killer_room;
        input_killer_room.open(fileNameKiller);     //Setting up the input file stream for the killer
        for(int i = 0;i<=6;i++){
            getline(input_killer_room,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }else{
        ifstream input_non_killer_room;
        input_non_killer_room.open(fileNameNonKiller);     //Setting up the input file stream for the non killer
        for(int i = 0;i<=6;i++){
            getline(input_non_killer_room,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }
    }
else if(personability == 7){     //The if statement coenciding with the personability level
    if(is_killer_weapon == 1){
        ifstream input_killer_room;
        input_killer_room.open(fileNameKiller);     //Setting up the input file stream for the killer
        for(int i = 0;i<=7;i++){
            getline(input_killer_room,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }else{
        ifstream input_non_killer_room;
        input_non_killer_room.open(fileNameNonKiller);     //Setting up the input file stream for the non killer
        for(int i = 0;i<=7;i++){
            getline(input_non_killer_room,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }                     
    }
else if(personability == 8){     //The if statement coenciding with the personability level
    if(is_killer_weapon == 1){
        ifstream input_killer_room;
        input_killer_room.open(fileNameKiller);     //Setting up the input file stream for the killer
        for(int i = 0;i<=8;i++){
            getline(input_killer_room,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }else{
        ifstream input_non_killer_room;
        input_non_killer_room.open(fileNameNonKiller);     //Setting up the input file stream for the non killer
        for(int i = 0;i<=8;i++){
            getline(input_non_killer_room,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }                      
    }
}

bool Weapon::is_the_killer(){   //The getter that shows if this is the weapon used to kill
    return is_killer_weapon;
}

void Weapon::set_is_killer_weapon(bool input_true_false){   //The setter thats sets if this is the weapon used to kill
    is_killer_weapon = input_true_false;
}