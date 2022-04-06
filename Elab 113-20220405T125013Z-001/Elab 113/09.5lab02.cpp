#include <iostream>
using namespace std;

int main(){
    char name[30], output[30];;
    double salary;
    double sales;
    double year_salary = 0;

    cin >> name
        >> salary;
    
    for (int i = 0; i < 12; i++){
        cin >> sales;
        year_salary += salary + (sales * 0.15);
    }
    
    sprintf(output, "%s %.2lf",name, year_salary);

    cout << output << endl;
}