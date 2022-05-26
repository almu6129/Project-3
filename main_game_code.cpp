#include <iostream>
#include <string>
#include <fstream>      //Including all the libraries we want to use
#include <cstdlib>
#include <time.h>
#include "Player.h"
#include "Map.h"        //Including all our header files
#include "Room.h"
#include "Weapons.h"
#include "Suspects.h"


using namespace std;        //Using standard namespacing

int main(){

    string name;
    int stamina, intuition, personability, hardiness, quick_recover, points = 8;        //Initializing some player variables
    
    string instruction_line;        //Initializing a variable for a temp string for the instruction file stream and our menu switch variable
    int choice;
    string switch_choice_str;

    ifstream instructions;      //setting up our file stream for the instructions
    instructions.open("rules.txt");


    while(choice != 3){     //The while loop for the menu itself


        cout<<"____Menu____"<<endl;
    cout<<"1. Begin game"<<endl;        //The cout for the menu
    cout<<"2. Read instructions"<<endl;
    cout<<"3. Quit"<<endl;
    cin>>choice;        //Getting the user input for the menu

        if(choice>=1&&choice<=3){       //Making sure the user inputs a valid choice

            if(choice == 1){

                int health  = 100, random_num;      //Declaring more variables

                srand (time(NULL));     //Setting our time seed

                char begin = 'a';       //A variable for the user to pick if they want to start the game

                bool library_was_investigated = 0;
                bool study_was_investigated = 0;
                bool bed_was_investigated = 0;
                bool kitchen_was_investigated = 0;
                bool dining_was_investigated = 0;
                bool gym_was_investigated = 0;                  //All the bools that represent if the player investigated the rooms, weapons, and suspects
                bool roundface_was_investigated = 0;
                bool henryWireguard_was_investigated = 0;
                bool lucyKeeper_was_investigated = 0;
                bool mindyHarper_was_investigated = 0;
                bool nickKaratos_was_investigated = 0;
                bool mrBillings_was_investigated = 0;
                bool candlestick_was_investigated = 0;
                bool snowShovel_was_investigated = 0;
                bool bakingSheet_was_investigated = 0;
                bool electricalWire_was_investigated = 0;
                bool bullWhip_was_investigated = 0;
                bool soupSpoon_was_investigated = 0;

                ifstream story;
                story.open("story.txt");        //The stream set up for displaying the story to the user
                string story_line;

                cout<<"Enter you name: "<<endl;     //Getting the user input of their name
                cin>>name;
                cout<<endl;
                Player mainPlayer = Player();       //Setting up the player
                mainPlayer.set_player_name(name);       //Setting the player name to what the user just input

                mainPlayer.set_up_abilities();      //Calling the set up abilities function for our player we just made

                cout<<endl;     //Creating some space between the story and the setting up of abilities
                cout<<endl;

                while(getline(story, story_line)){
                    cout<<story_line<<endl;             //Outputting the story from our file stream
                }

                cout<<"Do you wish to begin the game (Enter Y for yes or N for no)? "<<endl;        //Asking the user if they would like to begin the game
                cin>>begin;
                if(begin == 'N'){
                    return 0;               //If the user inputs N the game stops
                }
                if(begin == 'Y'){       //If the user inputs Y it will continue
                }
                else{
                    while(begin!='Y'&&begin!='N'){      //If the user does not enter N or Y
                    cout<<"Enter Y for yes or N for no: "<<endl;
                    cin>>begin;
                    }

                }


    random_num = rand() % 60 + 1;       //Using the rand function to get a random number between 1 and 60
    //Initializing some booleans to represent which one will be the killer
    bool candle_is_it = 0, shovel_is_it = 0,baking_is_it = 0, wire_is_it = 0,whip_is_it = 0, spoon_is_it = 0;
    if(random_num>0&&random_num<=10){
        candle_is_it = true;
    }
    else if(random_num>10&&random_num<=20){
        shovel_is_it = true;
    }
    else if(random_num>20&&random_num<=30){
        baking_is_it = true;                        //Selecting which is the killer weapon by this range of if statements
    }
    else if(random_num>30&&random_num<=40){
        wire_is_it = true;
    }
    else if(random_num>40&&random_num<=50){
        whip_is_it = true;
    }
    else if(random_num>50&&random_num<=60){
        spoon_is_it = true;
    }


    random_num = rand() % 60 + 1;       //Using the rand function to get a random number between 1 and 60
    //Initializing some booleans to represent which one will be the killer
    bool study_is_it = 0, gym_is_it = 0,kitchen_is_it = 0, bed_is_it = 0,library_is_it = 0, dining_is_it = 0;
    if(random_num>0&&random_num<=10){
        study_is_it = true;
    }
    else if(random_num>10&&random_num<=20){
        gym_is_it = true;
    }
    else if(random_num>20&&random_num<=30){
        kitchen_is_it = true;                        //Selecting which is the killer room by this range of if statements
    }
    else if(random_num>30&&random_num<=40){
        bed_is_it = true;
    }
    else if(random_num>40&&random_num<=50){
        library_is_it = true;
    }
    else if(random_num>50&&random_num<=60){
        dining_is_it = true;
    }


    random_num = rand() % 60 + 1;       //Using the rand function to get a random number between 1 and 60
    //Initializing some booleans to represent which one will be the killer
    bool karratos_is_it = 0, wireguard_is_it = 0,keeper_is_it = 0, harper_is_it = 0,billings_is_it = 0, roundface_is_it = 0;
    if(random_num>0&&random_num<=10){
        karratos_is_it = true;
    }
    else if(random_num>10&&random_num<=20){
        wireguard_is_it = true;
    }
    else if(random_num>20&&random_num<=30){
        keeper_is_it = true;                        //Selecting which is the killer suspect by this range of if statements
    }
    else if(random_num>30&&random_num<=40){
        harper_is_it = true;
    }
    else if(random_num>40&&random_num<=50){
        billings_is_it = true;
    }
    else if(random_num>50&&random_num<=60){
        roundface_is_it = true;
    }        
                
                
    Map map;  
    map.spawnStudyRoom(2, 3);
    Room study_room = Room(study_is_it,"clues_1.txt","clues_of_murder_room.txt");
    map.spawnBedRoom(7,3);
    Room bed_room = Room(bed_is_it,"clues_2.txt","clues_of_murder_room.txt");       
    map.spawnDiningRoom(12,3);
    Room dining_room = Room(dining_is_it,"clues_3.txt","clues_of_murder_room.txt");         //Spawning and initializing all our rooms using our parameterized constructor
    map.spawnGymRoom(2,26);
    Room gym_room = Room(gym_is_it,"clues_4.txt","clues_of_murder_room.txt");
    map.spawnKitchen(7,26);
    Room kitchen_room = Room(kitchen_is_it,"clues_5.txt","clues_of_murder_room.txt");
    map.spawnLibraryRoom(12,26);
    Room library_room = Room(library_is_it,"clues_6.txt","clues_of_murder_room.txt");

    Weapon candleStick = Weapon(candle_is_it,"Candle Stick","weapon_not_killer_1.txt","weapon_killer_1.txt");
    Weapon snowShovel = Weapon(shovel_is_it,"Snow Shovel","weapon_not_killer_2.txt","weapon_killer_1.txt");
    Weapon bakeingSheet = Weapon(baking_is_it,"Bakeing Sheet","weapon_not_killer_3.txt","weapon_killer_1.txt");         //Declaring the weapons and using the parameterized constructor
    Weapon elctricalWire = Weapon(wire_is_it,"Electrical Wire","weapon_not_killer_4.txt","weapon_killer_1.txt");
    Weapon bullWhip = Weapon(whip_is_it,"Bull Whip","weapon_not_killer_5.txt","weapon_killer_1.txt");
    Weapon soupSpoon = Weapon(spoon_is_it,"Soup Spoon","weapon_not_killer_6.txt","weapon_killer_1.txt");
    
    map.spawnLordRoundFace(5,25);
    Suspect LordRoundFace = Suspect("Lord Round Face", roundface_is_it, bullWhip, "suspect_dialogue_1.txt", "suspect_dialogue_killer.txt");
    map.spawnHenryWireguard(5,2);
    Suspect HenryWireguard = Suspect("Henry Wireguard", wireguard_is_it, soupSpoon, "suspect_dialogue_2.txt", "suspect_dialogue_killer.txt");
    map.spawnLucyKeeper(11,7);
    Suspect LucyKeeper = Suspect("Lucy Keeper", keeper_is_it, candleStick, "suspect_dialogue_3.txt", "suspect_dialogue_killer.txt");        //Spawning and initializing our suspects by using our parameterized constructor
    map.spawnMindyHarper(3,9);
    Suspect MindyHarper = Suspect("Mindy Harper", harper_is_it, elctricalWire, "suspect_dialogue_4.txt", "suspect_dialogue_killer.txt");
    map.spawnNickKaratos(6,17);
    Suspect NickKaratos = Suspect("Nick Karatos", karratos_is_it, snowShovel, "suspect_dialogue_5.txt", "suspect_dialogue_killer.txt");
    map.spawnMrBillings(13,16);
    Suspect MrBillings = Suspect("Mr. Billings", billings_is_it, bakeingSheet, "suspect_dialogue_6.txt", "suspect_dialogue_killer.txt");
    map.spawnPool(7,14);

    int personability_level = mainPlayer.get_personability_level();     //Using our personability getter to get the main player personability
    int switch_choice;      //Our switch variable initialization
    

    char move, should_investigate;  //Declaring two variables

    for(int i = 0; i < 999999; i++) {       //The main for loop for moving about the map and all gameplay
        map.displayMap();       //Using the display map function
        cout<<"Health: "<<health<<endl;     //Displaying the health every iteration of the loop

        switch_choice = -3;     //Resetting the switch variable after every loop iteration

        cout << "Valid moves are: " << endl;        //Displaying the valid moves
        map.displayMoves();  
        
        cout << "Input a move: "; 
        cin >> move;                //Getting the user input of where they want to move
        cout << endl;
        map.executeMove(move);          //Using the execute move function that is a part of the Map.cpp file

        if (map.isLibraryLocation()) {      //Checking if the user got to the library
            cout << "You're in a Library!" << endl;

                should_investigate = 'a';
                while(should_investigate!='Y'&&should_investigate!='N'){        //While the user has not input the characters Y or N
                cout<<"Do you wish to investigate the room (Enter Y for yes or N for no)? "<<endl;
                cin>>should_investigate;
                if(should_investigate == 'N'){
                           //It will skip the next part if the user inputs N
                }
                if(should_investigate == 'Y'){      //If the user inputs Y

                    cout<<"Clues: "<<endl;
                    
                    library_room.get_clues(mainPlayer.get_intuition_level(),library_was_investigated);      //Using the get clues function and get intuition level function
                    library_was_investigated = 1;       //Flagging that the room has been investigated

                    cout<<"You now have the ability to accuse this room."<<endl;

                }
                }

        }
        if (map.isStudyLocation()) {        //Checking if the user got to the Study
            cout << "You're in a Study!" << endl;

                should_investigate = 'a';
                while(should_investigate!='Y'&&should_investigate!='N'){        //While the user has not input the characters Y or N
                cout<<"Do you wish to investigate the room (Enter Y for yes or N for no)? "<<endl;
                cin>>should_investigate;
                if(should_investigate == 'N'){
                           //It will skip the next part if the user inputs N
                }
                if(should_investigate == 'Y'){      //If the user inputs Y

                    cout<<"Clues: "<<endl;
                    
                    study_room.get_clues(mainPlayer.get_intuition_level(),study_was_investigated);      //Using the get clues function and get intuition level function
                    study_was_investigated = 1;       //Flagging that the room has been investigated


                    cout<<"You now have the ability to accuse this room."<<endl;

                }
                }            
        }
        if (map.iskitchenLocation()) {      //Checking if the user got to the kitchen
            cout << "You're in a Kitchen!" << endl;

                should_investigate = 'a';
                while(should_investigate!='Y'&&should_investigate!='N'){        //While the user has not input the characters Y or N
                cout<<"Do you wish to investigate the room (Enter Y for yes or N for no)? "<<endl;
                cin>>should_investigate;
                if(should_investigate == 'N'){
                           //It will skip the next part if the user inputs N
                }
                if(should_investigate == 'Y'){      //If the user inputs Y

                    cout<<"Clues: "<<endl;
                    
                    kitchen_room.get_clues(mainPlayer.get_intuition_level(),kitchen_was_investigated);      //Using the get clues function and get intuition level function
                    kitchen_was_investigated = 1;       //Flagging that the room has been investigated

                    cout<<"You now have the ability to accuse this room."<<endl;

                }
                }            
        }
        if (map.isGymLocation()) {      //Checking if the user got to the gym
            cout << "You're in a Gym!" << endl;

                should_investigate = 'a';
                while(should_investigate!='Y'&&should_investigate!='N'){        //While the user has not input the characters Y or N
                cout<<"Do you wish to investigate the room (Enter Y for yes or N for no)? "<<endl;
                cin>>should_investigate;
                if(should_investigate == 'N'){
                           //It will skip the next part if the user inputs N
                }
                if(should_investigate == 'Y'){      //If the user inputs Y

                    cout<<"Clues: "<<endl;
                    
                    gym_room.get_clues(mainPlayer.get_intuition_level(),gym_was_investigated);      //Using the get clues function and get intuition level function
                    gym_was_investigated = 1;       //Flagging that the room has been investigated

                    cout<<"You now have the ability to accuse this room."<<endl;

                }
                }            
        }
        if (map.isDiningLocation()) {           //Checking if the user got to the Dining Room
            cout << "You're in a Dining Room!" << endl;

                should_investigate = 'a';
                while(should_investigate!='Y'&&should_investigate!='N'){        //While the user has not input the characters Y or N
                cout<<"Do you wish to investigate the room (Enter Y for yes or N for no)? "<<endl;
                cin>>should_investigate;
                if(should_investigate == 'N'){
                           //It will skip the next part if the user inputs N
                }
                if(should_investigate == 'Y'){      //If the user inputs Y

                    cout<<"Clues: "<<endl;
                    
                    dining_room.get_clues(mainPlayer.get_intuition_level(),dining_was_investigated);      //Using the get clues function and get intuition level function
                    dining_was_investigated = 1;       //Flagging that the room has been investigated

                    cout<<"You now have the ability to accuse this room."<<endl;

                }
                }            
        }
        if (map.isBedLocation()) {      //Checking if the user got to the Bed Room
            cout << "You're in a BedRoom!" << endl;

                should_investigate = 'a';
                while(should_investigate!='Y'&&should_investigate!='N'){        //While the user has not input the characters Y or N
                cout<<"Do you wish to investigate the room (Enter Y for yes or N for no)? "<<endl;
                cin>>should_investigate;
                if(should_investigate == 'N'){
                           //It will skip the next part if the user inputs N
                }
                if(should_investigate == 'Y'){      //If the user inputs Y

                    cout<<"Clues: "<<endl;
                    
                    bed_room.get_clues(mainPlayer.get_intuition_level(),bed_was_investigated);      //Using the get clues function and get intuition level function
                    bed_was_investigated = 1;       //Flagging that the room has been investigated


                    cout<<"You now have the ability to accuse this room."<<endl;

                }
                }            
        }


        if (map.isLordRoundFaceLocation()) {        //Checking to see if the user is talking to the suspect
            cout << "You've encountered Lord Roundface!" << endl;

            should_investigate = 'a';
                while(should_investigate!='Y'&&should_investigate!='N'){        //While the user has not input the characters Y or N
                cout<<"Do you wish to talk to this person (Enter Y for yes or N for no)? "<<endl;
                cin>>should_investigate;
                if(should_investigate == 'N'){
                           //It will skip the next part if the user inputs N
                }
                if(should_investigate == 'Y'){      //If the user inputs Y

                    cout<<"What they said: "<<endl;
                    
                    LordRoundFace.get_suspect_dialogue(personability_level,roundface_was_investigated);     //Using the get suspect dialogue function
                    roundface_was_investigated = 1;     //Flagging that the suspect was investigated
                    cout<<"You notice they are holding a bull whip."<<endl;
                    while (switch_choice_str != "3"){
                    cout<<"What should you say to them? "<<endl;
                    cout<<"1. Why are you holding that?"<<endl;         //Displaying some options for talking the the suspect
                    cout<<"2. Do you have a license to carry that?"<<endl;
                    cout<<"3. That's a sweet looking weapon you got there!"<<endl;
                    

                    getline(cin,switch_choice_str);
                    //cin>>switch_choice;     //Getting the user input
                    cout<<endl;               

                        if(switch_choice_str == "1"){
                        cout<<"Suspect: That's none of your business idiot! "<<endl;
                        cout<<"Try asking something else."<<endl;
                        }

                        else if(switch_choice_str == "2"){
                        cout<<"Suspect: No, but I have a license to date your sister!"<<endl;
                        cout<<"Try asking something else."<<endl;
                        }

                        else if(switch_choice_str == "3"){
                        cout<<"Suspect: Thank you, have a look!"<<endl;
                        elctricalWire.get_weapon_clues(mainPlayer.get_intuition_level());       //Using our get weapon clues function and get intuition level functions
                        electricalWire_was_investigated = 1;      //Flagging that the weapon was investigated
                        cout<<"Now you can accuse this weapon in the pool room."<<endl;
                        break;
                        }
                        else{
                        cout<<"Enter a choice from 1-3."<<endl;     //IF the user inputs an invalid choice
                        }
                    }
                    break;
                    


                    cout<<"You now have the ability to accuse this person in the pool room."<<endl;

                }
                }            
        }
        if (map.isLucyKeeperLocation()) {        //Checking to see if the user is talking to the suspect
            cout << "You've encountered Lucy Keeper!" << endl;

            should_investigate = 'a';
                while(should_investigate!='Y'&&should_investigate!='N'){        //While the user has not input the characters Y or N
                cout<<"Do you wish to talk to this person (Enter Y for yes or N for no)? "<<endl;
                cin>>should_investigate;
                if(should_investigate == 'N'){
                           //It will skip the next part if the user inputs N
                }
                if(should_investigate == 'Y'){      //If the user inputs Y

                    cout<<"What they said: "<<endl;
                    
                    LucyKeeper.get_suspect_dialogue(personability_level,lucyKeeper_was_investigated);     //Using the get suspect dialogue function
                    lucyKeeper_was_investigated = 1;     //Flagging that the suspect was investigated
                    cout<<"You notice they are holding a candle stick."<<endl;
                    while (switch_choice_str != "3"){
                    cout<<"What should you say to them? "<<endl;
                    cout<<"1. Why are you holding that?"<<endl;         //Displaying some options for talking the the suspect
                    cout<<"2. Do you have a license to carry that?"<<endl;
                    cout<<"3. That's a sweet looking weapon you got there!"<<endl;
                    
                    getline(cin,switch_choice_str);
                    //cin>>switch_choice;     //Getting the user input
                    cout<<endl;               

                        if(switch_choice_str == "1"){
                        cout<<"Suspect: That's none of your business idiot! "<<endl;
                        cout<<"Try asking something else."<<endl;
                        }

                        else if(switch_choice_str == "2"){
                        cout<<"Suspect: No, but I have a license to date your sister!"<<endl;
                        cout<<"Try asking something else."<<endl;
                        }

                        else if(switch_choice_str == "3"){
                        cout<<"Suspect: Thank you, have a look!"<<endl;
                        elctricalWire.get_weapon_clues(mainPlayer.get_intuition_level());       //Using our get weapon clues function and get intuition level functions
                        electricalWire_was_investigated = 1;      //Flagging that the weapon was investigated
                        cout<<"Now you can accuse this weapon in the pool room."<<endl;
                        break;
                        }
                        else{
                        cout<<"Enter a choice from 1-3."<<endl;     //IF the user inputs an invalid choice
                        }
                    }
                
                    break;
                    cout<<"You now have the ability to accuse this person in the pool room."<<endl;
                }                 
                }              
        }        
        if (map.isMindyHarperLocation()) {        //Checking to see if the user is talking to the suspect
            cout << "You've encountered Mindy Harper!" << endl;
            should_investigate = 'a';
                while(should_investigate!='Y'&&should_investigate!='N'){        //While the user has not input the characters Y or N
                cout<<"Do you wish to talk to this person (Enter Y for yes or N for no)? "<<endl;
                cin>>should_investigate;
                if(should_investigate == 'N'){
                           //It will skip the next part if the user inputs N
                }
                if(should_investigate == 'Y'){      //If the user inputs Y

                    cout<<"What they said: "<<endl;
                    
                    MindyHarper.get_suspect_dialogue(personability_level,mindyHarper_was_investigated);     //Using the get suspect dialogue function
                    mindyHarper_was_investigated = 1;     //Flagging that the suspect was investigated
                    cout<<"You notice they are holding a coil of electrical wire."<<endl;
                    while (switch_choice_str != "3"){
                    cout<<"What should you say to them? "<<endl;
                    cout<<"1. Why are you holding that?"<<endl;         //Displaying some options for talking the the suspect
                    cout<<"2. Do you have a license to carry that?"<<endl;
                    cout<<"3. That's a sweet looking weapon you got there!"<<endl;
                    
                    getline(cin,switch_choice_str);
                    //cin>>switch_choice;     //Getting the user input
                    cout<<endl;               

                        if(switch_choice_str == "1"){
                        cout<<"Suspect: That's none of your business idiot! "<<endl;
                        cout<<"Try asking something else."<<endl;
                        }

                        else if(switch_choice_str == "2"){
                        cout<<"Suspect: No, but I have a license to date your sister!"<<endl;
                        cout<<"Try asking something else."<<endl;
                        }

                        else if(switch_choice_str == "3"){
                        cout<<"Suspect: Thank you, have a look!"<<endl;
                        elctricalWire.get_weapon_clues(mainPlayer.get_intuition_level());       //Using our get weapon clues function and get intuition level functions
                        electricalWire_was_investigated = 1;      //Flagging that the weapon was investigated
                        cout<<"Now you can accuse this weapon in the pool room."<<endl;
                        break;
                        }
                        else{
                        cout<<"Enter a choice from 1-3."<<endl;     //IF the user inputs an invalid choice
                        }
                    
                
                    }
                    break;
                    
                    cout<<"You now have the ability to accuse this person in the pool room."<<endl;

                }
                
                }              
        }
        if (map.isMrBillingsLocation()) {        //Checking to see if the user is talking to the suspect
            cout << "You've encountered Mr. Billings!" << endl;
            should_investigate = 'a';
                while(should_investigate!='Y'&&should_investigate!='N'){        //While the user has not input the characters Y or N
                cout<<"Do you wish to talk to this person (Enter Y for yes or N for no)? "<<endl;
                cin>>should_investigate;
                if(should_investigate == 'N'){
                           //It will skip the next part if the user inputs N
                }
                if(should_investigate == 'Y'){      //If the user inputs Y

                    cout<<"What they said: "<<endl;
                    
                    MrBillings.get_suspect_dialogue(personability_level,mrBillings_was_investigated);     //Using the get suspect dialogue function
                    mrBillings_was_investigated = 1;     //Flagging that the suspect was investigated
                    cout<<"You notice they are holding a baking sheet."<<endl;
                    while (switch_choice_str != "3"){
                    cout<<"What should you say to them? "<<endl;
                    cout<<"1. Why are you holding that?"<<endl;         //Displaying some options for talking the the suspect
                    cout<<"2. Do you have a license to carry that?"<<endl;
                    cout<<"3. That's a sweet looking weapon you got there!"<<endl;
                    
                    getline(cin,switch_choice_str);
                    //cin>>switch_choice;     //Getting the user input
                    cout<<endl;               

                        if(switch_choice_str == "1"){
                        cout<<"Suspect: That's none of your business idiot! "<<endl;
                        cout<<"Try asking something else."<<endl;
                        }

                        else if(switch_choice_str == "2"){
                        cout<<"Suspect: No, but I have a license to date your sister!"<<endl;
                        cout<<"Try asking something else."<<endl;
                        }

                        else if(switch_choice_str == "3"){
                        cout<<"Suspect: Thank you, have a look!"<<endl;
                        elctricalWire.get_weapon_clues(mainPlayer.get_intuition_level());       //Using our get weapon clues function and get intuition level functions
                        electricalWire_was_investigated = 1;      //Flagging that the weapon was investigated
                        cout<<"Now you can accuse this weapon in the pool room."<<endl;
                        break;
                        }
                        else{
                        cout<<"Enter a choice from 1-3."<<endl;     //IF the user inputs an invalid choice
                        }
                    break;
                    }
                    cout<<"You now have the ability to accuse this person in the pool room."<<endl;

                }
                }              
        }
        if (map.isNickKaratosLocation()) {        //Checking to see if the user is talking to the suspect
            cout << "You've encountered Nick Karatos!" << endl;
            should_investigate = 'a';
                while(should_investigate!='Y'&&should_investigate!='N'){        //While the user has not input the characters Y or N
                cout<<"Do you wish to talk to this person (Enter Y for yes or N for no)? "<<endl;
                cin>>should_investigate;
                if(should_investigate == 'N'){
                           //It will skip the next part if the user inputs N
                }
                if(should_investigate == 'Y'){      //If the user inputs Y

                    cout<<"What they said: "<<endl;
                    
                    NickKaratos.get_suspect_dialogue(personability_level,nickKaratos_was_investigated);     //Using the get suspect dialogue function
                    nickKaratos_was_investigated = 1;     //Flagging that the suspect was investigated
                    cout<<"You notice they are holding a snow shovel."<<endl;
                    while (switch_choice_str != "3"){
                    cout<<"What should you say to them? "<<endl;
                    cout<<"1. Why are you holding that?"<<endl;         //Displaying some options for talking the the suspect
                    cout<<"2. Do you have a license to carry that?"<<endl;
                    cout<<"3. That's a sweet looking weapon you got there!"<<endl;
                    
                    getline(cin,switch_choice_str);
                    //cin>>switch_choice;     //Getting the user input
                    cout<<endl;               

                        if(switch_choice_str == "1"){
                        cout<<"Suspect: That's none of your business idiot! "<<endl;
                        cout<<"Try asking something else."<<endl;
                        }

                        else if(switch_choice_str == "2"){
                        cout<<"Suspect: No, but I have a license to date your sister!"<<endl;
                        cout<<"Try asking something else."<<endl;
                        }

                        else if(switch_choice_str == "3"){
                        cout<<"Suspect: Thank you, have a look!"<<endl;
                        elctricalWire.get_weapon_clues(mainPlayer.get_intuition_level());       //Using our get weapon clues function and get intuition level functions
                        electricalWire_was_investigated = 1;      //Flagging that the weapon was investigated
                        cout<<"Now you can accuse this weapon in the pool room."<<endl;
                        break;
                        }
                        else{
                        cout<<"Enter a choice from 1-3."<<endl;     //IF the user inputs an invalid choice
                        }
                    }
                    break;
                 cout<<"You now have the ability to accuse this person in the pool room."<<endl;   

                }
                }              
        }
        if (map.isHenryWireguardLocation()) {        //Checking to see if the user is talking to the suspect
            cout << "You've encountered Henry Wireguard!" << endl;
            should_investigate = 'a';
                while(should_investigate!='Y'&&should_investigate!='N'){        //While the user has not input the characters Y or N
                cout<<"Do you wish to talk to this person (Enter Y for yes or N for no)? "<<endl;
                cin>>should_investigate;
                if(should_investigate == 'N'){
                           //It will skip the next part if the user inputs N
                }
                if(should_investigate == 'Y'){      //If the user inputs Y

                    cout<<"What they said: "<<endl;
                    
                    HenryWireguard.get_suspect_dialogue(personability_level,henryWireguard_was_investigated);     //Using the get suspect dialogue function
                    henryWireguard_was_investigated = 1;     //Flagging that the suspect was investigated

                    cout<<"You notice they are holding a soup spoon."<<endl;
                    while (switch_choice_str != "3"){
                    cout<<"What should you say to them? "<<endl;
                    cout<<"1. Why are you holding that?"<<endl;         //Displaying some options for talking the the suspect
                    cout<<"2. Do you have a license to carry that?"<<endl;
                    cout<<"3. That's a sweet looking weapon you got there!"<<endl;
                    
                    getline(cin,switch_choice_str);
                    //cin>>switch_choice;     //Getting the user input
                    cout<<endl;               

                        if(switch_choice_str == "1"){
                        cout<<"Suspect: That's none of your business idiot! "<<endl;
                        cout<<"Try asking something else."<<endl;
                        }

                        else if(switch_choice_str == "2"){
                        cout<<"Suspect: No, but I have a license to date your sister!"<<endl;
                        cout<<"Try asking something else."<<endl;
                        }

                        else if(switch_choice_str == "3"){
                        cout<<"Suspect: Thank you, have a look!"<<endl;
                        elctricalWire.get_weapon_clues(mainPlayer.get_intuition_level());       //Using our get weapon clues function and get intuition level functions
                        electricalWire_was_investigated = 1;      //Flagging that the weapon was investigated
                        cout<<"Now you can accuse this weapon in the pool room."<<endl;
                        break;
                        }
                        else{
                        cout<<"Enter a choice from 1-3."<<endl;     //IF the user inputs an invalid choice
                        }
                    }
                    break;
                    
            
                    cout<<"You now have the ability to accuse this person in the pool room."<<endl;

                
                }              
        }

    }
    if (map.isPoolLocation()) {     //If the user got to the middle pool room

            bool guess_arr[3];      //Setting up an array for what the user guesses
            string my_accuse_switch;       //Declaring an integer for the switch

            cout << "You are in the pool room." << endl;
            should_investigate = 'a';
                while(should_investigate!='Y'&&should_investigate!='N'){        //While the user has not input the characters Y or N
                cout<<"Do you wish to make an accusation to the police (Enter Y for yes or N for no)? "<<endl;
                cin>>should_investigate;
                if(should_investigate == 'N'){
                          //It will skip the next part if the user inputs N
                }
                if(should_investigate == 'Y'){      //If the user inputs Y
                    bool good_choice = 0;
                    while(good_choice != 1){
                    cout<<"You can only accuse the rooms, suspects, or weapons that you have already investigated."<<endl;
                    cout<<"Select the room you would like to accuse: "<<endl;
                    cout<<"1. Study"<<endl;
                    cout<<"2. Library"<<endl;
                    cout<<"3. Gym"<<endl;               //Outputting to the user the menu for their choices for accusition
                    cout<<"4. Bed Room"<<endl;
                    cout<<"5. Kitchen"<<endl;
                    cout<<"6. Dining Room"<<endl;
                    getline(cin,my_accuse_switch);     //Getting the user input
                    cout<<endl;

                        if(my_accuse_switch == "1"){
                        if(study_was_investigated){         //IF the room was investigated
                            cout<<"This has been logged as your room choice."<<endl;
                            guess_arr[0] = study_room.get_if_killed_in_room();      //Using our room killed in getter to determine if the user made the right choice
                            good_choice = 1;        //The flag that says that it can move on to picking a suspect
                        }else{      //IF the room was not investigated
                            cout<<"You have not yet investigated this room."<<endl;
                        }
                        }

                        else if(my_accuse_switch == "2"){
                        if(library_was_investigated){         //IF the room was investigated
                            cout<<"This has been logged as your room choice."<<endl;
                            guess_arr[0] = library_room.get_if_killed_in_room();      //Using our room killed in getter to determine if the user made the right choice
                            good_choice = 1;        //The flag that says that it can move on to picking a suspect
                        }else{      //IF the room was not investigated
                            cout<<"You have not yet investigated this room."<<endl;
                        }                        
                        break;
                        }

                        else if(my_accuse_switch == "3"){
                        if(gym_was_investigated){         //IF the room was investigated
                            cout<<"This has been logged as your room choice."<<endl;
                            guess_arr[0] = gym_room.get_if_killed_in_room();      //Using our room killed in getter to determine if the user made the right choice
                            good_choice = 1;        //The flag that says that it can move on to picking a suspect
                        }else{      //IF the room was not investigated
                            cout<<"You have not yet investigated this room."<<endl;
                        }                        
                        break;
                        }

                        else if(my_accuse_switch == "4"){
                        if(bed_was_investigated){         //IF the room was investigated
                            cout<<"This has been logged as your room choice."<<endl;
                            guess_arr[0] = bed_room.get_if_killed_in_room();      //Using our room killed in getter to determine if the user made the right choice
                            good_choice = 1;        //The flag that says that it can move on to picking a suspect
                        }else{      //IF the room was not investigated
                            cout<<"You have not yet investigated this room."<<endl;
                        }                        
                        break;
                        }

                        else if(my_accuse_switch == "5"){
                        if(kitchen_was_investigated){         //IF the room was investigated
                            cout<<"This has been logged as your room choice."<<endl;
                            guess_arr[0] = kitchen_room.get_if_killed_in_room();      //Using our room killed in getter to determine if the user made the right choice
                            good_choice = 1;        //The flag that says that it can move on to picking a suspect
                        }else{      //IF the room was not investigated
                            cout<<"You have not yet investigated this room."<<endl;
                        }                        
                        break;
                        }

                       else if(my_accuse_switch == "6"){
                        if(dining_was_investigated){         //IF the room was investigated
                            cout<<"This has been logged as your room choice."<<endl;
                            guess_arr[0] = dining_room.get_if_killed_in_room();      //Using our room killed in getter to determine if the user made the right choice
                            good_choice = 1;        //The flag that says that it can move on to picking a suspect
                        }else{      //IF the room was not investigated
                            cout<<"You have not yet investigated this room."<<endl;
                        }                        
                        break;
                        }

                        else{
                            cout<<"Please enter a valid choice"<<endl;
                        }
                    
                    }
                    good_choice = 0;        //Resetting the variable that keeps the loop going until the user picks a valid option
                    while(good_choice != 1){
                    cout<<"Select the suspect you would like to accuse: "<<endl;
                    cout<<"1. Mr. Billings"<<endl;
                    cout<<"2. Lord Roundface"<<endl;
                    cout<<"3. Mindy Harper"<<endl;
                    cout<<"4. Nick Karatos"<<endl;               //Outputting to the user the menu for their choices for accusition
                    cout<<"5. Lucy Keeper"<<endl;
                    cout<<"6. Henry Wireguard"<<endl;
                    getline(cin,my_accuse_switch);     //Getting the user input
                    cout<<endl;
                        
                        if(my_accuse_switch == "1"){
                        if(mrBillings_was_investigated){         //IF the suspect was investigated
                            cout<<"This has been logged as your suspect choice."<<endl;
                            guess_arr[1] = MrBillings.get_is_the_killer();      //Using our getter function to determine if the suspect is the killer
                            good_choice = 1;        //Flagging so the loop can be broken
                        }else{
                            cout<<"You have not yet investigated this suspect."<<endl;
                        }                        
                        break;
                        }

                        else if(my_accuse_switch == "2"){
                        if(roundface_was_investigated){         //IF the suspect was investigated
                            cout<<"This has been logged as your suspect choice."<<endl;
                            guess_arr[1] = LordRoundFace.get_is_the_killer();      //Using our getter function to determine if the suspect is the killer
                            good_choice = 1;        //Flagging so the loop can be broken
                        }else{
                            cout<<"You have not yet investigated this suspect."<<endl;
                        }                            
                        break;
                        }

                        else if(my_accuse_switch == "3"){
                        if(mindyHarper_was_investigated){         //IF the suspect was investigated
                            cout<<"This has been logged as your suspect choice."<<endl;
                            guess_arr[1] = MindyHarper.get_is_the_killer();      //Using our getter function to determine if the suspect is the killer
                            good_choice = 1;        //Flagging so the loop can be broken
                        }else{
                            cout<<"You have not yet investigated this suspect."<<endl;
                        }                            
                        break;
                        }

                        else if(my_accuse_switch == "4"){
                        if(nickKaratos_was_investigated){         //IF the suspect was investigated
                            cout<<"This has been logged as your suspect choice."<<endl;
                            guess_arr[1] = NickKaratos.get_is_the_killer();      //Using our getter function to determine if the suspect is the killer
                            good_choice = 1;        //Flagging so the loop can be broken
                        }else{
                            cout<<"You have not yet investigated this suspect."<<endl;
                        }                            
                        break;
                        }

                        else if(my_accuse_switch == "5"){
                        if(lucyKeeper_was_investigated){         //IF the suspect was investigated
                            cout<<"This has been logged as your suspect choice."<<endl;
                            guess_arr[1] = LucyKeeper.get_is_the_killer();      //Using our getter function to determine if the suspect is the killer
                            good_choice = 1;        //Flagging so the loop can be broken
                        }else{
                            cout<<"You have not yet investigated this suspect."<<endl;
                        }                            
                        break;
                        }

                        else if(my_accuse_switch == "6"){
                        if(henryWireguard_was_investigated){         //IF the suspect was investigated
                            cout<<"This has been logged as your suspect choice."<<endl;
                            guess_arr[1] = HenryWireguard.get_is_the_killer();      //Using our getter function to determine if the suspect is the killer
                            good_choice = 1;        //Flagging so the loop can be broken
                        }else{
                            cout<<"You have not yet investigated this suspect."<<endl;
                        }                            
                        break;
                        }
                        else{
                            cout<<"Please enter a valid choice"<<endl;
                        }

                    }
                    good_choice = 0;        //Resetting the variable that keeps the loop going until the user picks a valid option
                    while(good_choice != 1){
                    cout<<"Select the weapon you would like to accuse: "<<endl;
                    cout<<"1. Snow Shovel"<<endl;
                    cout<<"2. Candle Stick"<<endl;
                    cout<<"3. Bull Whip"<<endl;               //Outputting to the user the menu for their choices for accusition
                    cout<<"4. Soup Spoon"<<endl;
                    cout<<"5. Baking Sheet"<<endl;
                    cout<<"6. Electrical Wire"<<endl;
                    getline(cin,my_accuse_switch);     //Getting the user input
                    cout<<endl;
                        
                        if(my_accuse_switch == "1"){
                        if(snowShovel_was_investigated){        //If the weapon has been investigated
                            cout<<"This has been logged as your weapon choice."<<endl;
                            guess_arr[2] = snowShovel.is_the_killer();      //Using our getter function to determine if the weapon is the killer weapon
                            good_choice = 1;        //Flagging so the loop can be broken
                        }else{
                            cout<<"You have not yet investigated this weapon."<<endl;
                        }                          
                        break;
                        }

                        else if(my_accuse_switch == "2"){
                        if(candlestick_was_investigated){        //If the weapon has been investigated
                            cout<<"This has been logged as your weapon choice."<<endl;
                            guess_arr[2] = candleStick.is_the_killer();      //Using our getter function to determine if the weapon is the killer weapon
                            good_choice = 1;        //Flagging so the loop can be broken
                        }else{
                            cout<<"You have not yet investigated this weapon."<<endl;
                        }                          
                        break;
                        }

                        else if(my_accuse_switch == "3"){
                        if(bullWhip_was_investigated){        //If the weapon has been investigated
                            cout<<"This has been logged as your weapon choice."<<endl;
                            guess_arr[2] = bullWhip.is_the_killer();      //Using our getter function to determine if the weapon is the killer weapon
                            good_choice = 1;        //Flagging so the loop can be broken
                        }else{
                            cout<<"You have not yet investigated this weapon."<<endl;
                        }                          
                        break;
                        }

                        else if(my_accuse_switch == "4"){
                        if(soupSpoon_was_investigated){        //If the weapon has been investigated
                            cout<<"This has been logged as your weapon choice."<<endl;
                            guess_arr[2] = soupSpoon.is_the_killer();      //Using our getter function to determine if the weapon is the killer weapon
                            good_choice = 1;        //Flagging so the loop can be broken
                        }else{
                            cout<<"You have not yet investigated this weapon."<<endl;
                        }                          
                        break;
                        }

                        else if(my_accuse_switch == "5"){
                        if(bakingSheet_was_investigated){        //If the weapon has been investigated
                            cout<<"This has been logged as your weapon choice."<<endl;
                            guess_arr[2] = bakeingSheet.is_the_killer();      //Using our getter function to determine if the weapon is the killer weapon
                            good_choice = 1;        //Flagging so the loop can be broken
                        }else{
                            cout<<"You have not yet investigated this weapon."<<endl;
                        }                          
                        break;
                        }

                        else if(my_accuse_switch == "6"){
                        if(electricalWire_was_investigated){        //If the weapon has been investigated
                            cout<<"This has been logged as your weapon choice."<<endl;
                            guess_arr[2] = elctricalWire.is_the_killer();      //Using our getter function to determine if the weapon is the killer weapon
                            good_choice = 1;        //Flagging so the loop can be broken
                        }else{
                            cout<<"You have not yet investigated this weapon."<<endl;
                        }                          
                        break;
                        }
                        else{
                            cout<<"Please enter a valid choice"<<endl;
                        }

                }                                        
                    if(guess_arr[0] == 1 && guess_arr[1] == 1 && guess_arr[2] == 1){        //If all the choices from the guess array are true
                        cout<<"You have solved the crime and the suspect is being put behind bars as we speak!"<<endl;
                        return 0;       //Ending the game because the user determined the right combination
                    }else{
                        cout<<"You have not solved the crime. Keep investigating."<<endl;       //If they did not determine the right combination
                    }
                    
                    }
                }              
        }
      if(health<100){       //If the users health is not full
          if(quick_recover == 1){       //Recovering the users health depending on their quick recover level
            health += 2;
          }
          else if(quick_recover == 2){       //Recovering the users health depending on their quick recover level
              health += 3;
          }
          else if(quick_recover == 3){       //Recovering the users health depending on their quick recover level
              health += 4;
          }
          else if(quick_recover == 4){       //Recovering the users health depending on their quick recover level
              health += 5;
          }
          else if(quick_recover == 5){       //Recovering the users health depending on their quick recover level
              health += 6;
          }
          else if(quick_recover == 6){       //Recovering the users health depending on their quick recover level
              health += 7;
          } 
          else if(quick_recover == 7){       //Recovering the users health depending on their quick recover level
              health += 8;
          }
          else if(quick_recover == 8){       //Recovering the users health depending on their quick recover level
              health += 9;
          }else{       //Recovering the users health depending on their quick recover level
              health++;
          }                                                           
      }
    random_num = rand() % 100 + 1;          //Getting a random number to determine if they will be attacked this move
    if(random_num>0&&random_num<11){        //If the random number generated is between 1 and 10 they will be attacked
        cout<<"You have been attacked from behind!"<<endl;
        if(random_num>0&&random_num<4){     //If the number is between these numbers it will be the lower ammount of damage
            if(hardiness == 1){         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 4 health points."<<endl;
                health -= 4;
            }else if(hardiness == 2){         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 3 health points."<<endl;
                health -= 3;
            }else if(hardiness == 3){         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 2 health points."<<endl;
                health -= 2;
            }else if(hardiness == 4){         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 1 health points."<<endl;
                health -= 1;
            }else if(hardiness == 5){         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 0 health points."<<endl;
                health -= 0;
            }else if(hardiness == 6){         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 0 health points."<<endl;
                health -= 0;
            }else if(hardiness == 7){         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 0 health points."<<endl;
                health -= 0;
            }else if(hardiness == 8){         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 0 health points."<<endl;
                health -= 0;
            }else{         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 5 health points."<<endl;
                health -= 5;
            }
        }
        else if(random_num>=4&&random_num<7){     //If the number is between these numbers it will be the middle ammount of damage
            if(hardiness == 1){         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 9 health points."<<endl;
                health -= 9;
            }else if(hardiness == 2){         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 8 health points."<<endl;
                health -= 8;
            }else if(hardiness == 3){         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 7 health points."<<endl;
                health -= 7;
            }else if(hardiness == 4){         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 6 health points."<<endl;
                health -= 6;
            }else if(hardiness == 5){         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 5 health points."<<endl;
                health -= 5;
            }else if(hardiness == 6){         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 4 health points."<<endl;
                health -= 4;
            }else if(hardiness == 7){         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 3 health points."<<endl;
                health -= 3;
            }else if(hardiness == 8){         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 2 health points."<<endl;
                health -= 2;
            }else{         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 10 health points."<<endl;
                health -= 10;
            }
        }
        else if(random_num>=7&&random_num<=10){     //If the number is between these numbers it will be the higher ammount of damage
            if(hardiness == 1){         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 14 health points."<<endl;
                health -= 14;
            }else if(hardiness == 2){         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 13 health points."<<endl;
                health -= 13;
            }else if(hardiness == 3){         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 12 health points."<<endl;
                health -= 12;
            }else if(hardiness == 4){         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 11 health points."<<endl;
                health -= 11;
            }else if(hardiness == 5){         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 10 health points."<<endl;
                health -= 10;
            }else if(hardiness == 6){         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 9 health points."<<endl;
                health -= 9;
            }else if(hardiness == 7){         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 8 health points."<<endl;
                health -= 8;
            }else if(hardiness == 8){         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 7 health points."<<endl;
                health -= 7;
            }else{         //Determining the ammount of damage dealt on the player depending on their hardiness level
                cout<<"You have lost 15 health points."<<endl;
                health -= 15;
            }
        }
    }
    if(health <= 0){        //IF the user runs out of health
        cout<<"You have died"<<endl;
        return 0;       //Ending the game because the user died
    }

    }
            }

            if(choice == 2){
                while(getline(instructions, instruction_line)){     //If the user picks 2 it will read the instructions through the instructions file stream
                    cout<<instruction_line<<endl;
                }
                continue;
            }

        }else{
            cout<<"Invalid choice. Select an option from 1-3."<<endl;       //If the user selects an invalid option from the main menu
        }
    }
    cout<<"Good bye!"<<endl;
    return 0;

}