#include <iostream>
#include <limits>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int NUM_MONTHS = 12;
    double profits[NUM_MONTHS];

    cout << "¬вед≥ть прибутки за кожен м≥с€ць року:" << endl;
    for (int i = 0; i < NUM_MONTHS; i++) {
        cout << "ѕрибуток за м≥с€ць " << i + 1 << ": ";
        cin >> profits[i];
    }

    double maxProfit = numeric_limits<double>::min();
    int maxMonth = 0;
    for (int i = 0; i < NUM_MONTHS; i++) {
        if (profits[i] > maxProfit) {
            maxProfit = profits[i];
            maxMonth = i + 1;
        }
    }

    double minProfit = numeric_limits<double>::max();
    int minMonth = 0;
    for (int i = 0; i < NUM_MONTHS; i++) {
        if (profits[i] < minProfit) {
            minProfit = profits[i];
            minMonth = i + 1;
        }
    }

    cout << "ћ≥с€ць з максимальним прибутком: " << maxMonth << endl;
    cout << "ћ≥с€ць з м≥н≥мальним прибутком: " << minMonth << endl;

    return 0;
}