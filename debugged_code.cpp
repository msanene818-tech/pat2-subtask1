#include <iostream>
#include <iomanip>

using namespace std;

const int NUM_EXPERIMENTS = 4; // Set to 4 experiments total
const int NUM_READINGS = 3;

int main() {
    int i, j;
    double readingValue, total, average;

    for (i = 1; i <= NUM_EXPERIMENTS; i++) {
        total = 0; // Reset total accumulator for each individual experiment
        cout << "\nEXPERIMENT " << i << endl;
        cout << "==============" << endl;

        for (j = 1; j <= NUM_READINGS; j++) {
            cout << "Enter reading " << j << " value: ";
            cin >> readingValue;
            total = total + readingValue; // Fixed operator from - to +
        }

        average = total / NUM_READINGS; // Corrected average formula

        // Evaluate acceptable range categories
        if (average < 100) {
            cout << "Experiment " << i << " average: " << fixed << setprecision(3) 
                 << average << " are: Below acceptable range" << endl;
        } else if (average >= 100 && average <= 300) {
            cout << "Experiment " << i << " average: " << fixed << setprecision(3) 
                 << average << " are: Within acceptable range" << endl;
        } else {
            cout << "Experiment " << i << " average: " << fixed << setprecision(3) 
                 << average << " are: Above acceptable range" << endl;
        }
    }

    return 0;
}
