#include <iostream>
using namespace std;

const int COIN_VALUE_100 = 100;
const int COIN_VALUE_10 = 10;
const int TARGET_VALUE = 220;

void playTurn(int& hundredCoins, int& tenCoins, bool isNamTurn) {
    int need100 = TARGET_VALUE / COIN_VALUE_100;
    int need10 = (TARGET_VALUE % COIN_VALUE_100) / COIN_VALUE_10;

    if (hundredCoins < need100 || tenCoins < need10) {
        cout << (isNamTurn? "Minh" : "Nam") << endl;
        cout << turns + 1 << endl;
        exit(0);
    }

    hundredCoins -= need100;
    tenCoins -= need10;
}

int main() {
    int hundredCoins, tenCoins;
    cin >> hundredCoins >> tenCoins;

    int turns = 0;
    bool isNamTurn = true;
    while (true) {
        playTurn(hundredCoins, tenCoins, isNamTurn);
        isNamTurn =!isNamTurn;
        turns++;
    }

    return 0;
}