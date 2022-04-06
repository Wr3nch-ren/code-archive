#include <iostream>
#include <cstdio>

int main(){
    char human[20],buffer[20],output[20];
    int i;
    float salary,adder,bonus;
    std::cin >> human >> salary;
    salary *= 12;
    for(i = 0; i < 12; i++){
        std::cin >> adder;
        bonus += (adder*0.15);
    }
    salary += bonus;
    sprintf(output,"%.2f",salary);
    std::cout << human << " " << output;
}