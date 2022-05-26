#ifndef Pool_h
#define Pool_h
#include <string>
#include <vector>

using namespace std;

class Pool{

    public:

        void add_to_can_accuse(string name);

        bool get_can_accuse(string name);

        void print_can_accuse();

    private:
    
        vector<string> can_accuse;

};

#endif