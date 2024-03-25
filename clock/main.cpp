#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
using namespace std;

void displayClock() {
    while (true) {

        auto now = chrono::system_clock::to_time_t(chrono::system_clock::now());
        tm localTime = *localtime(&now);


        cout << "Current Time: "
                  << (localTime.tm_hour < 10 ? "0" : "") << localTime.tm_hour << ":"
                  << (localTime.tm_min < 10 ? "0" : "") << localTime.tm_min << ":"
                  << (localTime.tm_sec < 10 ? "0" : "") << localTime.tm_sec << endl;

        this_thread::sleep_for(chrono::seconds(1));


        system("cls");
        cout << "Press Enter to exit." << endl;
    }
}

int main() {

    thread clockThread(displayClock);



    cin.get();


    clockThread.join();

    return 0;
}
