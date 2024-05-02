#include <stdlib.h>
#include <iostream>
#include <time.h>


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
            shuffleAll();
        }
        int modifier(int stat){
            return ((stat - 10)/2);
        }
        void shuffle(int* stat){
            *stat = ((rand()%20)+1);
            return;
        }
        void shuffleAll(){
            shuffle(&force);           
            shuffle(&sway);
            shuffle(&act);
            shuffle(&data);
            shuffle(&sly);
            shuffle(&heart);
        }
        void stats(){
            std::cout << "Force: " << force << std::endl;
            std::cout << "Sway: " << sway << std::endl;
            std::cout << "Act: " << act << std::endl;
            std::cout << "Data: " << data << std::endl;
            std::cout << "Sly: " << sly << std:: endl;
            std::cout << "Heart: " << heart << std::endl;


        }

        char* getName(){
            return name;
        }
};