#ifndef Suspect_h
#define Suspect_h
#include "Weapons.h"        //Including the weapons header file
#include <vector>

using namespace std;

class Suspect{

    public:

        Suspect();      //Our non parameterized constructor

            //Our parameterized constructor
        Suspect(string input_suspect_name, bool input_is_the_killer, Weapon what_is_holding_input, string file_name_non_killer, string file_name_killer);

        string get_suspect_name();  //The getter that will return the suspect name

        void set_suspect_name(string input_suspect_name);   //The seeter that will set the suspect name to user input

        void get_suspect_dialogue(int personability, bool was_investigated);      //The getter function that will return a random string from the dialogue array

        bool get_is_the_killer();       //The getter that will return if this suspect is the killer

        void set_is_the_killer(bool input_is_the_killer);       //The setter that will set if this is the killer to user input

        string get_what_is_holding();   //The getter that will return what weapon they are holding

        void set_what_is_holding(Weapon what_is_holding_input);     //The setter that will set what the user is holding to a input weapon

    private:

        bool is_the_killer;     //The bool that will represent if this is the killer
        vector<Weapon> what_is_holding;     //The member weapon
        string suspect_name;        //The suspect name
        string fileNameNonKiller;
        string fileNameKiller;


};

#endif