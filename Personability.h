#ifndef Personability_h
#define Personability_h

using namespace std;

class Personability{

    public:

        Personability();

        Personability(int level_in);

        int get_level();

        void set_level(int level_in);

    private:
        int level;


};

#endif