#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    for (int hrs = 1; hrs < 12; hrs++) {
        for (int mins = 0; mins < 60; mins++) {
            for (int sec = 0; sec < 60; sec++) {
                cout << setfill('0') << setw(2) << hrs << " : "
                     << setfill('0') << setw(2) << mins << " : "
                     << setfill('0') << setw(2) << sec << endl;
                this_thread::sleep_for(chrono::seconds(1));
            }
        }
    }

    return 0;
}
