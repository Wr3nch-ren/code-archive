#include <iostream>
#include <string>
using namespace std;

class Hero{

private:
    string name;
    int level;

public:

    //constructor
    Hero(string heroname,int herolevel){
        this->name = heroname;
        this->level = herolevel;
    }

    //name getter
    string getName(){
        return name;
    }

    //level getter
    int getLevel(){
        return level;
    }
};


int main()
{
    string heroName;
    int heroLevel;
    cin >> heroName >> heroLevel;
    Hero player(heroName,heroLevel);

    cout << player.getName() << " " << player.getLevel();

}