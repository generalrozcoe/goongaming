class being{
    private:
        char* name;
        int age;
        char* origin;
        char* species;
        char* race;
        
        int force;
        int sway;
        int act;
        int data;
        int sly;
        int heart;

    enum skill{ force, sway, act, data, sly, heart};
    unordered_map<int, string> skill {
        {0, "force"},
        {1, "sway"}
        {2, "act"},
        {3, "data"},
        {4, "sly" },
        {5, "heart"},

    };


    protected:
    public:
        int modifier(int* stat){
            return ((stat -10)/2);
        }
        void shuffle(int* stat){
            *stat = (rand%20+1);
            return;
        }
        void shuffleAll
}