#include <iostream>
#include <fstream>
#include <string>
#include "Suspects.h"       //Including the header files we want to use
#include "Weapons.h"

using namespace std;

Suspect::Suspect(){
    is_the_killer = 0;      //Our non parameterized constructor that sets everything to blank or zero
    suspect_name = "";
}

    //Our parameterized constructor that sets everything to input
Suspect::Suspect(string input_suspect_name, bool input_is_the_killer, Weapon what_is_holding_input, string file_name_non_killer, string file_name_killer){
    is_the_killer = input_is_the_killer;
    what_is_holding.push_back(what_is_holding_input);
    suspect_name = input_suspect_name;
    fileNameKiller = file_name_killer;
    fileNameNonKiller = file_name_non_killer;
}

string Suspect::get_suspect_name(){     //our getter that returns the suspect name
    return suspect_name;
}

void Suspect::set_suspect_name(string input_suspect_name){  //Our setter that sets the suspect name to input
    suspect_name = input_suspect_name;
}

/*
This is a function that will take in the level of personability that the player has and whether or not the suspect
has been investigated. From there it will determine how many strings to print to the screen. The strings will be taken
from a file stream determined from the parameterized constructor.
Parameters: The level of personability of the player and a boolean of whether or not they have been investigated.
Returns: Nothing, it only prints to the screen.
*/
void Suspect::get_suspect_dialogue(int personability, bool was_investigated){
        string temp;
if(personability == 1&& was_investigated == 0){      //The if statement for if it was not investigated and coeinciding with personability level
    if(is_the_killer == 1){
        ifstream input_killer_room;
        input_killer_room.open(fileNameKiller);     //Setting up the input file stream for the killer
        for(int i = 0;i<=1;i++){
            getline(input_killer_room,temp);
            cout<<temp<<endl;
        }
        cout<<endl;
    }else{
        ifstream input_non_killer_room_1;
        input_non_killer_room_1.open(fileNameNonKiller);     //Setting up the input file stream for the non killer
        for(int i = 0;i<=1;i++){
            getline(input_non_killer_room_1,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }
    }
else if(personability == 2&& was_investigated == 0){      //The if statement for if it was not investigated and coeinciding with personability level
    if(is_the_killer == 1){
        ifstream input_killer_room;
        input_killer_room.open(fileNameKiller);     //Setting up the input file stream for the killer
        for(int i = 0;i<=2;i++){
            getline(input_killer_room,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }else{
        ifstream input_non_killer_room_2;
        input_non_killer_room_2.open(fileNameNonKiller);     //Setting up the input file stream for the non killer
        for(int i = 0;i<=2;i++){
            getline(input_non_killer_room_2,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }
    }
else if(personability == 3&& was_investigated == 0){      //The if statement for if it was not investigated and coeinciding with personability level
    if(is_the_killer == 1){
        ifstream input_killer_room;
        input_killer_room.open(fileNameKiller);     //Setting up the input file stream for the killer
        for(int i = 0;i<=3;i++){
            getline(input_killer_room,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }else{
        ifstream input_non_killer_room_3;
        input_non_killer_room_3.open(fileNameNonKiller);     //Setting up the input file stream for the non killer
        for(int i = 0;i<=3;i++){
            getline(input_non_killer_room_3,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }
    }
else if(personability == 4&& was_investigated == 0){      //The if statement for if it was not investigated and coeinciding with personability level
    if(is_the_killer == 1){
        ifstream input_killer_room;
        input_killer_room.open(fileNameKiller);     //Setting up the input file stream for the killer
        for(int i = 0;i<=4;i++){
            getline(input_killer_room,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }else{
        ifstream input_non_killer_room_4;
        input_non_killer_room_4.open(fileNameNonKiller);     //Setting up the input file stream for the non killer
        for(int i = 0;i<=4;i++){
            getline(input_non_killer_room_4,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }                  
    }
else if(personability == 5&& was_investigated == 0){      //The if statement for if it was not investigated and coeinciding with personability level
    if(is_the_killer == 1){
        ifstream input_killer_room;
        input_killer_room.open(fileNameKiller);     //Setting up the input file stream for the killer
        for(int i = 0;i<=5;i++){
            getline(input_killer_room,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }else{
        ifstream input_non_killer_room_5;
        input_non_killer_room_5.open(fileNameNonKiller);     //Setting up the input file stream for the non killer
        for(int i = 0;i<=5;i++){
            getline(input_non_killer_room_5,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }                   
    }
else if(personability == 6&& was_investigated == 0){      //The if statement for if it was not investigated and coeinciding with personability level
    if(is_the_killer == 1){
        ifstream input_killer_room;
        input_killer_room.open(fileNameKiller);     //Setting up the input file stream for the killer
        for(int i = 0;i<=6;i++){
            getline(input_killer_room,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }else{
        ifstream input_non_killer_room_6;
        input_non_killer_room_6.open(fileNameNonKiller);     //Setting up the input file stream for the non killer
        for(int i = 0;i<=6;i++){
            getline(input_non_killer_room_6,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }
    }
else if(personability == 7&& was_investigated == 0){      //The if statement for if it was not investigated and coeinciding with personability level
    if(is_the_killer == 1){
        ifstream input_killer_room;
        input_killer_room.open(fileNameKiller);     //Setting up the input file stream for the killer
        for(int i = 0;i<=7;i++){
            getline(input_killer_room,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }else{
        ifstream input_non_killer_room_7;
        input_non_killer_room_7.open(fileNameNonKiller);     //Setting up the input file stream for the non killer
        for(int i = 0;i<=7;i++){
            getline(input_non_killer_room_7,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }                     
    }
else if(personability == 8&& was_investigated == 0){      //The if statement for if it was not investigated and coeinciding with personability level
    if(is_the_killer == 1){
        ifstream input_killer_room;
        input_killer_room.open(fileNameKiller);     //Setting up the input file stream for the killer
        for(int i = 0;i<=8;i++){
            getline(input_killer_room,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }else{
        ifstream input_non_killer_room_8;
        input_non_killer_room_8.open(fileNameNonKiller);     //Setting up the input file stream for the non killer
        for(int i = 0;i<=8;i++){
            getline(input_non_killer_room_8,temp);        //A for loop for cycling through the input stream strings
            cout<<temp<<endl;
        }
        cout<<endl;
    }                      
    }
else{
    cout<< "You have already investigated this room."<<endl;
    return;
    }
}

bool Suspect::get_is_the_killer(){  //Our getter that returns if the suspect is the killer
    return is_the_killer;
}

void Suspect::set_is_the_killer(bool input_is_the_killer){  //Our setter that lets us set whether this subject is the killer
    is_the_killer = input_is_the_killer;
}

string Suspect::get_what_is_holding(){  //Our getter that gets the string name of the weapon object the suspect is holding
    string name = what_is_holding[0].get_weapon_name();
    return name;
}

void Suspect::set_what_is_holding(Weapon what_is_holding_input){        //Our setter that lets us set what weapon object the suspect is holding
    string name = what_is_holding_input.get_weapon_name();
    what_is_holding[0].set_weapon_name(name);
    what_is_holding[0] = what_is_holding_input;
}