#include <iostream>
#include <conio.h>
#include <chrono>


int main() {
    using namespace std;
    using namespace std::chrono;
    cout << "Program will track how many times you can press Enter in 10 seconds\n";
    cout << "Press Enter to start\n";

    while (_getch() != 13);

    auto startTime = system_clock::now();
    seconds duration;
    int count{};

    do {
        int key = _getch(); // Считываем код клавиши
        if (key == 13) {
            ++count;
        }
        auto endTime = system_clock::now();
        duration = duration_cast<seconds>(endTime - startTime);
    } while (duration.count() < 10);
    cout << "You press Enter " << count << " times in 10 seconds.\n";
    while (_getch() == 13);
    return 0;
}
