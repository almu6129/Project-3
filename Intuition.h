#ifndef Intuition_h
#define Intuition_h

using namespace std;

class Intuition{

    public:
        Intuition();

        Intuition(int level_in);

        int get_level();

        void set_level(int level_in);

    private:
        int level;



};

#endif