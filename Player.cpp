#include <iostream>
#include <string>
#include "Player.h" //Including the player header file
#include "Personability.h"
#include "Hardiness.h"
#include "Intuition.h"
#include "QuickRecover.h"

using namespace std;

Player::Player(){       //The non parameterized constructor that sets everything to blank and zero
    stamina_level = 0;
    intuition_level.set_level(0);
    personability_level.set_level(0);
    hardiness_level.set_level(0);
    quick_recovery_level.set_level(0);
    player_name = "";
    for(int i = 0; i<10; i++){
        suspects_investigated[i] = "";
    }
    for(int i = 0; i<10;i++){
        rooms_investigated[i] = "";
    }
}

    //The parameterized constructor that sets every member variable to the user input
Player::Player(int stamina_level_input, int intuition_level_input, int personability_level_input, int hardiness_level_input,
               int quick_recovery_level_input, string player_name_input, string suspects_investigated[], string rooms_investigated[]){

    stamina_level = stamina_level_input;
    intuition_level.set_level(intuition_level_input);
    personability_level.set_level(personability_level_input);
    hardiness_level.set_level(hardiness_level_input);
    quick_recovery_level.set_level(quick_recovery_level_input);
    player_name = player_name_input;

        }

int Player::get_stamina_level(){    //This getter function returns the level
    return stamina_level;
}

void Player::set_stamina(int stamina_level_input){  //The setter that sets the member variable to user input
    stamina_level = stamina_level_input;
}

int Player::get_intuition_level(){    //This getter function returns the level
    return intuition_level.get_level();
}

void Player::set_intuition(int intuition_level_input){  //The setter that sets the member variable to user input
    intuition_level.set_level(intuition_level_input);
}
        
int Player::get_personability_level(){    //This getter function returns the level
    return personability_level.get_level();
}

void Player::set_personability(int personability_level_input){  //The setter that sets the member variable to user input
    personability_level.set_level(personability_level_input);
}

int Player::get_hardiness_level(){    //This getter function returns the level
    return hardiness_level.get_level();
}

void Player::set_hardiness(int hardiness_level_input){  //The setter that sets the member variable to user input
    hardiness_level.set_level(hardiness_level_input);
}

int Player::get_quick_recovery_level(){    //This getter function returns the level
    return quick_recovery_level.get_level();
}

void Player::set_quick_recovery(int quick_recovery_level_input){  //The setter that sets the member variable to user input
    quick_recovery_level.set_level(quick_recovery_level_input);
}

string Player::get_player_name(){   //The getter function that returns the player name
    return player_name;
}

void Player::set_player_name(string player_name_input){  //The setter that sets the member variable to user input
    player_name = player_name_input;
}

/*
This is a function that when called will prompt the user to inuput their choices for all abilities assigned to a player.
It then sets the player's abilities to the user's input.
Parameters: N/A
Returns: Nothing, it only prints to screen and sets up a player's member variables
*/

void Player::set_up_abilities(){
    int points = 8;

cout<<"Hello "<<player_name<<"! You have 8 credits to spend on your abilities."<<endl;
                
                int temp = 0;

                cout<<"___Abilities___"<<endl;
                cout<<"1.Stamina"<<endl;
                cout<<"2.Intuition"<<endl;
                cout<<"3.Personability"<<endl;      //Printing the main menu to the user
                cout<<"4.Hardiness"<<endl;
                cout<<"5.Quick Recovery"<<endl;
                cout<<"-----------------"<<endl;
                while(points>0){        //The while loop that will continue to run while the user still has points to spend
                cout<<"Enter what you would like to use on stamina: "<<endl;
                cin>>stamina_level;     //Getting the user input stamina
                cout<<endl;
                if(stamina_level>points){       //If the user inputs more points than they have left to spend
                    stamina_level = points;     //setting the level equal to the points they have left and no more
                }
                points = points - stamina_level;        //Getting the new number of points 
                if(points<=0){      //If we ran out of points here
                    cout<<"You are out of points."<<endl;
                    return;     //Exiting the function
                }
                cout<<"You have "<<points<<" more points to spend."<<endl;          //Showing the user how many points they still have
                cout<<"Enter what you would like to use on intuition: "<<endl;
                cin>>temp;     //Getting the user input
                intuition_level.set_level(temp);
                cout<<endl;
                if(intuition_level.get_level()>points){       //If the user inputs more points than they have left to spend
                    intuition_level.set_level(points);     //setting the level equal to the points they have left and no more
                }
                points = points - (intuition_level.get_level());        //Getting the new number of points 
                if(points<=0){      //If we ran out of points here
                    cout<<"You are out of points."<<endl;
                    return;
                }
                cout<<"You have "<<points<<" more points to spend."<<endl;          //Showing the user how many points they still have
                cout<<"Enter what you would like to use on personability: "<<endl;
                cin>>temp;     //Getting the user input
                personability_level.set_level(temp);
                cout<<endl;
                if(personability_level.get_level()>points){       //If the user inputs more points than they have left to spend
                    personability_level.set_level(points);     //setting the level equal to the points they have left and no more
                }
                points = points - personability_level.get_level();        //Getting the new number of points 
                if(points<=0){      //If we ran out of points here
                    cout<<"You are out of points."<<endl;
                    return;
                }
                cout<<"You have "<<points<<" more points to spend."<<endl;          //Showing the user how many points they still have
                cout<<"Enter what you would like to use on hardiness: "<<endl;
                cin>>temp;     //Getting the user input
                hardiness_level.set_level(temp);
                if(hardiness_level.get_level()>points){       //If the user inputs more points than they have left to spend
                    hardiness_level.set_level(points);     //setting the level equal to the points they have left and no more
                }                
                cout<<endl;
                points = points - hardiness_level.get_level();        //Getting the new number of points 
                if(points<=0){      //If we ran out of points here
                    cout<<"You are out of points."<<endl;
                    return;
                }
                cout<<"You have "<<points<<" more points to spend."<<endl;          //Showing the user how many points they still have
                cout<<"Enter what you would like to use on quick recovery: "<<endl;
                cin>>temp;     //Getting the user input
                quick_recovery_level.set_level(temp);
                cout<<endl;
                if(quick_recovery_level.get_level()>points){       //If the user inputs more points than they have left to spend
                    quick_recovery_level.set_level(points);     //setting the level equal to the points they have left and no more
                }
                points = points - quick_recovery_level.get_level();        //Getting the new number of points 
                if(points<=0){      //If we ran out of points here
                    cout<<"You are out of points."<<endl;
                    return;
                }else{
                    cout<<"You still have "<<points<<" to use."<<endl;          //Showing the user how many points they still have
                }
}
}

