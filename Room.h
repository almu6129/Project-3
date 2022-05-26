#ifndef Room_h
#define Room_h

using namespace std;        //Using standard namespacing

class Room{

    public:

        Room();     //Our non parameterized constructor

        Room(bool input_killed_here, string file_name_non_killer, string file_name_killer);       //Our parameterized constructor

        void get_clues(int intuition_level, bool room_investigated);     //The getter that will return a random clue

        bool get_if_killed_in_room();       //The getter that will return if the murdered was killed in this room

        void set_killed_in_room(bool input_killed_here);        //The setter that will set if they were killed in this room

    private:

        bool room_killed_in;        //The bool that flags if they were killed in this room
        string fileNameNonKiller;
        string fileNameKiller;

};

#endif