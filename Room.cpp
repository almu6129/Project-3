#include <iostream>
#include <fstream>
#include <string>
#include "Room.h"       //Including our header file
#include "Player.h"

using namespace std;

Room::Room(){   //Our non parameterized constructor

    room_killed_in = 0;     //Setting killed in room to false
 
}

Room::Room( bool input_killed_here, string file_name_non_killer, string file_name_killer){     //Our parameterized constructor
    room_killed_in = input_killed_here;     //Setting if they were killed in this room to the user input
    fileNameKiller = file_name_killer;
    fileNameNonKiller = file_name_non_killer;

}

/*
This is a function that will take in the level of intuition that the player has and whether or not the room
has been investigated. From there it will determine how many strings to print to the screen. The strings will be taken
from a file stream determined from the parameterized constructor.
Parameters: The level of intuition of the player and a boolean of whether or not it has been investigated.
Returns: Nothing, it only prints to the screen.
*/
void Room::get_clues(int intuition_level, bool room_investigated){

    string temp;
if(intuition_level == 1&& room_investigated == 0){      //The if statement for if it was not investigated and coeinciding with intuition level
    if(room_killed_in == 1){        //If this was the room that mrs. Billings was killed in

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
else if(intuition_level == 2&& room_investigated == 0){      //The if statement for if it was not investigated and coeinciding with intuition level
    if(room_killed_in == 1){        //If this was the room that mrs. Billings was killed in

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
else if(intuition_level == 3&& room_investigated == 0){      //The if statement for if it was not investigated and coeinciding with intuition level
    if(room_killed_in == 1){        //If this was the room that mrs. Billings was killed in
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
else if(intuition_level == 4&& room_investigated == 0){      //The if statement for if it was not investigated and coeinciding with intuition level
    if(room_killed_in == 1){        //If this was the room that mrs. Billings was killed in
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
else if(intuition_level == 5&& room_investigated == 0){      //The if statement for if it was not investigated and coeinciding with intuition level
    if(room_killed_in == 1){        //If this was the room that mrs. Billings was killed in
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
else if(intuition_level == 6&& room_investigated == 0){      //The if statement for if it was not investigated and coeinciding with intuition level
    if(room_killed_in == 1){        //If this was the room that mrs. Billings was killed in
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
else if(intuition_level == 7&& room_investigated == 0){      //The if statement for if it was not investigated and coeinciding with intuition level
    if(room_killed_in == 1){        //If this was the room that mrs. Billings was killed in
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
else if(intuition_level == 8&& room_investigated == 0){      //The if statement for if it was not investigated and coeinciding with intuition level
    if(room_killed_in == 1){        //If this was the room that mrs. Billings was killed in
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
else{
    cout<< "You have already investigated this room."<<endl;
    return;
    }
}


bool Room::get_if_killed_in_room(){     //The getter function that will return if they were killed in this room
    return room_killed_in;
}

void Room::set_killed_in_room(bool input_killed_here){  //The setter that will set if they were killed in this room to user input
    room_killed_in = input_killed_here;
}