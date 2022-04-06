#include <iostream>
using namespace std;

typedef struct Word_ {
    string word = "";
    int amount = 0;
} Word;

int main() {
    string input;
    int i, last_word = 0, find = 0;
    Word data[20];

    while (true) {
        cin >> input;
        if (input == "exit") {
            break;
        }
        
        for (i = 0; i < 20; i++){
            if (input == data[i].word){
                data[i].amount += 1;
            }
            else{
                data[i].word = input;
                data[i].amount += 1;
            }
        }

    }

    cout << "Output:" << endl;
    for (i = 0; i < 20; i++){
        cout << data[i].word << " = " << data[i].amount << endl;
    }


    return 0;
}