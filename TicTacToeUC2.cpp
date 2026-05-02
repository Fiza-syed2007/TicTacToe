#include <iostream>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()
using namespace std;

void decideFirstPlayer(int &currentPlayer, char &p1Symbol, char &p2Symbol) {
    srand(time(0));              // seed random generator
    int toss = rand() % 2;       // 0 or 1

    if (toss == 0) {
        currentPlayer = 1;
        p1Symbol = 'X';
        p2Symbol = 'O';
    } else {
        currentPlayer = 2;
        p1Symbol = 'O';
        p2Symbol = 'X';
    }
}
int main() {
    int currentPlayer;
    char p1Symbol, p2Symbol;

    decideFirstPlayer(currentPlayer, p1Symbol, p2Symbol);

    cout << "Player " << currentPlayer << " starts first\n";
    cout << "Player 1 Symbol: " << p1Symbol << endl;
    cout << "Player 2 Symbol: " << p2Symbol << endl;

    return 0;
}