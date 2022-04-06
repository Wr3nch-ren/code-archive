#include <iostream>
using namespace std;

class Animal
{
private:
    int happiness;
    int energy;
    int fullness;
    const int MAX_HAPPINESS = 100;
    const int MAX_ENERGY = 100;
    const int MAX_FULLNESS = 100;
    void limitStat();
public:
    Animal(int, int, int);
    int getHappiness();
    int getEnergy();
    int getFullness();
    void eat(int);
    void play(int);
    void sleep(int);
};

Animal::Animal(int happiness, int energy, int fullness){
    this->happiness = happiness;
    this->energy = energy;
    this->fullness = fullness;
}

void Animal::limitStat(){
    if (happiness > MAX_HAPPINESS)
        happiness = MAX_HAPPINESS;
    if (happiness <= 0)
        happiness = 0;
    
    if (energy > MAX_ENERGY)
        energy = MAX_ENERGY;
    if (energy <= 0)
        energy = 0;


    if (fullness > MAX_FULLNESS)
        fullness = MAX_FULLNESS;
    if (fullness <= 0)
        fullness = 0;
}

int Animal::getHappiness(){
    return happiness;
}

int Animal::getEnergy(){
    return energy;
}

int Animal::getFullness(){
    return fullness;
}

void Animal::eat(int food) {
    if (food > 0)
        fullness += food;
    if (fullness > MAX_FULLNESS)
        happiness -= 10; 
    limitStat();
}

void Animal::play(int hour) {
    if (energy > 0 && fullness > 0 && hour > 0) {
        energy -= hour * 10;
        fullness -= hour * 20;
        happiness += hour * 5;
    }
    limitStat();
}

void Animal::sleep(int hour){
    for (int i = 0 ; i < hour ; i++){
        energy += 10;
        fullness -= 10;
    }
    limitStat();
}



int main()
{
}