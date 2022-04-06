#include <iostream>
#include <cmath>
#include <string>

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
        string hr_string, min_string, sec_string;
        if (hour < 10){
            hr_string = '0' + to_string(hour) + ':';
        }
        else if (hour >= 10){
            hr_string = to_string(hour) + ':';
        }
        if (minute < 10){
            min_string = '0' + to_string(minute) + ':';
        }
        else if (minute >= 10){
            min_string = to_string(minute) + ':';
        }
        if (second < 10){
            sec_string = '0' + to_string(second);
        }
        else if (second >= 10){
            sec_string = to_string(second);
        }
        return hr_string + min_string + sec_string;
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
