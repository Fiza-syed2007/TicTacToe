#include <iostream>
using namespace std;

// Function to get valid slot (1–9)
int getUserSlot() {
    int slot;

    while (true) {
        cout << "Enter slot (1-9): ";
        cin >> slot;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Enter a number.\n";
        } 
        else if (slot < 1 || slot > 9) {
            cout << "Invalid slot. Choose 1–9.\n";
        } 
        else {
            return slot;
        }
    }
}

int main() {
    int slot = getUserSlot();
    cout << "You selected: " << slot << endl;
    return 0;
}