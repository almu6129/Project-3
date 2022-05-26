#ifndef Player_h
#define Player_h
#include "Personability.h"
#include "Hardiness.h"
#include "Intuition.h"
#include "QuickRecover.h"


using namespace std;

class Player{

    public:

        Player();       //The non parameterized constructor


        //The parameterized constructor
        Player(int stamina_level_input, int intuition_level_input, int personability_level_input, int hardiness_level_input,
        int quick_recovery_level_input, string player_name_input, string suspects_investigated[], string rooms_investigated[]);

        int get_stamina_level();        //The getter for the stamina level of the character

        void set_stamina(int stamina_level_input);      //The setter for the stamina level

        int get_intuition_level();  //The getter for the intuition level

        void set_intuition(int intuition_level_input);      //The setter for the intuition level
        
        int get_personability_level();      //The getter for the personability level

        void set_personability(int personability_level_input);      //The setter for the personability level

        int get_hardiness_level();      //The getter for thehardiness level

        void set_hardiness(int hardiness_level_input);      //The setter for the hardiness level

        int get_quick_recovery_level();     //The getter for the quick recovery level

        void set_quick_recovery(int quick_recovery_level_input);        //The setter for the quick recovery level

        string get_player_name();       //The gettter for the player name

        void set_player_name(string player_name_input);     //The setter for the player name

        void set_up_abilities();




    private:
        int stamina_level;
        Intuition intuition_level;        //Our member data members
        Personability personability_level;
        Hardiness hardiness_level;
        QuickRecover quick_recovery_level;
        string player_name;
        string suspects_investigated[10];       //I shouldn't need a getter or setter for these two arrays because they will be changed in the function
        string rooms_investigated[10];          //and will be accessed universaly

};

#endif