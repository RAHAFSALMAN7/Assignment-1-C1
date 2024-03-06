#include <iostream>
using namespace std;

int main() {
    int seconds, minutes, hours;

    cout << "Please Enter seconds: ";
    cin >> seconds;

    minutes = seconds / 60;
    seconds = seconds % 60;
    hours = minutes / 60;
    minutes = minutes % 60;

    cout << seconds << " seconds ";
    if (minutes > 0 || hours > 0) {
        cout << minutes << " minutes ";
    }
    if (hours > 0) {
        cout << hours << " hours ";
    }

    cout << endl;

    return 0;
}
