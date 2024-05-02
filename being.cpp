#include <stdlib.h>


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

    public:
        being(char* x){
            name = x;
        }
        int modifier(int* stat){
            return ((*stat - 10)/2);
        }
        void shuffle(int* stat){
            *stat = (rand()%20+1);
            return;
        }
        char* getName(){
            return name;
        }
};