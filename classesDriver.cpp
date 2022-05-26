#include <iostream>
#include <string>
#include "Player.h"
#include "Room.h"
#include "Suspects.h"       //Including all my header files for my classes
#include "Weapons.h"

using namespace std;

int main(){         //This main function just tests the member functions of my classes excluding the map class

    string suspects_investigated[10];
    string rooms_investigated[10];
    string clues[10];
    string suspect_dialogue_clues[10];

    Player Alex = Player();
    cout<<Alex.get_player_name()<<endl;
    Player Andy = Player(2, 4, 1,4,5,"Andy",suspects_investigated, rooms_investigated);
    cout<<Andy.get_hardiness_level()<<endl;
    cout<<Andy.get_intuition_level()<<endl;
    cout<<Andy.get_personability_level()<<endl;
    cout<<Andy.get_player_name()<<endl;
    cout<<Andy.get_quick_recovery_level()<<endl;
    cout<<Andy.get_stamina_level()<<endl;
    Andy = Player();
    cout<<Andy.get_hardiness_level()<<endl;
    cout<<Andy.get_intuition_level()<<endl;
    cout<<Andy.get_personability_level()<<endl;
    cout<<Andy.get_player_name()<<endl;
    cout<<Andy.get_quick_recovery_level()<<endl;
    cout<<Andy.get_stamina_level()<<endl;


    Room Study = Room(clues, 0);
    cout<<Study.get_if_killed_in_room()<<endl;
    Study.set_killed_in_room(1);
    cout<<Study.get_if_killed_in_room()<<endl;
    Study = Room();
    cout<<Study.get_if_killed_in_room()<<endl;
    cout<<Study.get_if_killed_in_room()<<endl;

    Weapon candle_stick = Weapon(0, "Candle Stick");
    cout<<candle_stick.is_the_killer()<<endl;
    cout<<candle_stick.get_weapon_name()<<endl;
    candle_stick.set_is_killer_weapon(1);
    cout<<candle_stick.is_the_killer()<<endl;
    Weapon knife = Weapon();
    cout<<candle_stick.is_the_killer()<<endl;
    knife.set_weapon_name("Knife");
    cout<<candle_stick.get_weapon_name()<<endl;


    Suspect mr_Bean = Suspect("Archie",suspect_dialogue_clues, 0, candle_stick);
    cout<<mr_Bean.get_is_the_killer()<<endl;
    cout<<mr_Bean.get_what_is_holding()<<endl;
    cout<<mr_Bean.get_suspect_name()<<endl;
    mr_Bean.set_what_is_holding(knife);
    cout<<mr_Bean.get_what_is_holding()<<endl;



    return 0;
}