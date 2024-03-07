#include<iostream>
#include<iomanip>
#include<chrono>
#include<thread>

using namespace std;

void displayTime(int hours, int minutes, int seconds) {
    cout << setfill('0') << setw(2) << hours << ":"
         << setfill('0') << setw(2) << minutes << ":"
         << setfill('0') << setw(2) << seconds << endl;
}

int main() {
    for (int hours = 1; hours <= 10; ++hours) {
        for (int minutes = 0; minutes < 60; ++minutes) {
            for (int seconds = 0; seconds < 60; ++seconds) {
                displayTime(hours, minutes, seconds);
                this_thread::sleep_for(chrono::seconds(1));
            }
        }
    }

    return 0;
}
