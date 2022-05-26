#ifndef QuickRecover_h
#define QuickRecover_h



class QuickRecover{

    public:
        QuickRecover();

        QuickRecover(int level_in);

        int get_level();

        void set_level(int level_in);

    private:
        int level;



};

#endif