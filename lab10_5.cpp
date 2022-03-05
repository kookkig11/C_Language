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
        // constructor
        Time(int hour, int minute, int second) {
            this -> hour = hour;
            this -> minute = minute;
            this -> second = second;
        }

        Time(int duration) {
            // this -> second = duration;

            int hour = duration / 3600;
            duration -= hour * 3600;
            int minute = duration / 60;
            duration -= minute * 60;

            this -> hour = hour;
            this -> minute = minute;
            this -> second = duration;
        }

        // setter
        void setHour(int hour) {
            this -> hour = hour;
        }

        void setMinute(int minute) {
            this -> minute = minute;
        }

        void setSecond(int second) {
            this -> second = second;
        }

        // getter
        int getHour() { return hour; }
        int getMinute() { return minute; }
        int getSecond() { return second; }

        // func.
        int getDuration() {
            int total_second = 0;
            total_second += this->hour * 3600;
            total_second += this->minute * 60;
            total_second += this->second;
            return total_second;
        }

        Time add(Time other) {
            int total_second = 0;
            total_second = this -> getDuration();
            total_second += other.getHour() * 3600;
            total_second += other.getMinute() * 60;
            total_second += other.getSecond();

            Time temp = Time(total_second);
            int tHour = temp.getHour();
            if (tHour >= 24) {
                tHour -= 24;
                temp.setHour(tHour);
            }

            return temp;
        }

        int subtract(Time other) {
            int answer, sec1, sec2;
            sec1 = this -> getDuration();
            sec2 = other.getDuration();
            if (sec1 < sec2) {
                sec1 += 24*3600;
            }
            answer = sec1 - sec2;
            return answer;
        }

        int equals(Time other) {
            if (this->getDuration() == other.getDuration()) {
                return 1;
            } else {
                return 0;
            }
        }

        string toString() {
            stringstream timer;
            if (this -> hour >= 24) {
                this -> hour -= 24;
            }

            timer << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << minute << ":" << setfill('0') << setw(2) << second;
            return timer.str();
        }
};

int main()
{
   // implement program to test class Time
}
