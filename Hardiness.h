#ifndef Hardiness_h
#define Hardiness_h

using namespace std;

class Hardiness{

    public:
        Hardiness();

        Hardiness(int level_in);

        int get_level();

        void set_level(int level_in);

    private:
        int level;



};

#endif