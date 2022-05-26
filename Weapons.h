#ifndef Weapon_h
#define Weapon_h

using namespace std;

class Weapon{

    public:

        Weapon();   //Our non parameterized constructor

        Weapon(bool is_killer_weapon_input, string input_name, string file_name_non_killer, string file_name_killer); //Our parameterized constructor that sets things to input

        string get_weapon_name();   //Our weapon name getter

        void set_weapon_name(string input_name);    //The setter that sets the weapon name

        void get_weapon_clues(int intuition_level);

        bool is_the_killer();   //The getter that returns if this is the killer weapon

        void set_is_killer_weapon(bool input_true_false);   //The function that sets if this is the killer weapon

    private:

        string name;    //Our member variables
        bool is_killer_weapon;
        string fileNameNonKiller;
        string fileNameKiller;


};

#endif