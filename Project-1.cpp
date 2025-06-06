#include <iostream>
using namespace std;

class TimeConverter {
private:
    int h, m, s;

public:
    TimeConverter(int totalSeconds) {
        h = totalSeconds / 3600;
        m = (totalSeconds % 3600) / 60;
        s = totalSeconds % 60;
    }

    TimeConverter(int hours, int minutes, int seconds) {
        h = hours;
        m = minutes;
        s = seconds;
    }

    void fromSeconds() {
        cout << "HH:MM:SS : " << h << ": " << m << ": " << s;
    }

    void toSeconds() {
        int total = h * 3600 + m * 60 + s;
        cout << "Total Seconds: " << total;
    }
};

int main() {
    int choice;
    cout << "Time Converter Menu:\n";
    cout << "Press 1. Seconds to HH:MM:SS\n";
    cout << "Press 2. HH:MM:SS to Seconds\n";
    cin >> choice;

    switch (choice) {
        case 1: {
            int sec;
            cout << "Enter seconds: ";
            cin >> sec;
            TimeConverter t(sec);
            t.fromSeconds();
            break;
        }

        case 2: {
            int h, m, s;
            cout << "Enter hours: ";
            cin >> h;
            cout << "Enter minutes: ";
            cin >> m;
            cout << "Enter seconds: ";
            cin >> s;
            TimeConverter t(h, m, s);
            t.toSeconds();
            break;
        }

        default:
            cout << "Invalid choice.\n";
    }

    return 0;
}
