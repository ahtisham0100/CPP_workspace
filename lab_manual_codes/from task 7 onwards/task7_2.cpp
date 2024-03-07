#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>

using namespace std;

int main() {

  int hrs = 1, mins =0, sec=0; 
  
    while ( hrs < 12) {
        while( mins < 60) {
            while (sec < 60) {
                cout << setfill('0') << setw(2) << hrs << ":"<< setfill('0') << setw(2) << mins << " : "<< setfill('0') << setw(2) << sec << endl;
                this_thread::sleep_for(chrono::seconds(1));
                sec++ ;
            }
            mins++ ;
        }
hrs++ ;
    }

    return 0;
}