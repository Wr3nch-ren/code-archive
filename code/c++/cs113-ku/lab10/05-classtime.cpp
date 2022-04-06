#include <iostream>
#include <sstream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

class Time
{
    private:
        int hour;
        int minute;
        int second;

    public:

        Time(int hour, int minute, int second){
            this->hour = hour;
            this->minute = minute;
            this->second = second;
        }

        Time(int duration){
            hour = duration / 3600 % 24;
            duration %= 3600;
            minute = duration / 60;
            duration %= 60;
            second = duration;
        }


        Time add(Time other){
            int duration = getDuration() + other.getDuration();
            other.hour = duration / 3600 % 24;
            duration %= 3600;
            other.minute = duration / 60;
            duration %= 60;
            other.second = duration;
            return other;
        }

        int subtract(Time other){
            int minus;
            minus = getDuration() - other.getDuration();
            
            if (minus >= 0){
                return minus;
            }
            minus = (24 * 3600) - abs(minus); 
            return minus;

        } 
        
        int equals(Time other){
            if (getDuration() == other.getDuration())
                return 1;
            return 0;
        }

        string toString(){
            stringstream ss;
            if (hour < 10)
                ss << "0" << hour << ":";
            else
                ss << hour << ":";
            if (minute < 10)
                ss << "0" << minute << ":";
            else 
                ss << minute << ":";
            if (second < 10)
                ss << "0" << second;
            else
                ss << second;
            return ss.str();
        }

        int getDuration(){
            int duration = (hour * 3600) + (minute * 60) + second;
            return duration;
        }

        int getHour(){
            return hour;
        }

        int getMinute(){
            return minute;
        }

        int getSecond(){
            return second;
        }
};



int main()
{
   // implement program to test class Time
}