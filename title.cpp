#include <iostream>
using namespace std;

// REM - remember

// Functions for the title screen
void titleScreen();
void newGame();
void continueGame();
void optionsMenu();

int main() {
    titleScreen();
    return 0;
}

// Displays the main title screen
void titleScreen() {
    int choice = 0;

    while (choice != 4) {
        cout << "\n============================\n";
        cout << "         ROBOT ARENA        \n";
        cout << "============================\n";

        cout << "1. Continue\n";
        cout << "2. New Game\n";
        cout << "3. Options\n";
        cout << "4. Exit\n";

        cout << "\nEnter your choice: ";

        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        switch (choice) {
            case 1:
                continueGame();
                break;

            case 2:
                newGame();
                break;

            case 3:
                optionsMenu();
                break;

            case 4:
                cout << "\nThanks for playing Robot Arena!\n";
                break;

            default:
                cout << "\nInvalid choice. Try again.\n";
        }
    }
}

// Starts a new game
void newGame() {
    cout << "\nStarting a new game...\n";

    //  REM: Add robot creation
    //  REM:  tutorial
    // REM: Start the first arena battle
}

// Continue an existing game
void continueGame() {
    cout << "\nContinue Game\n";

    //  REM: Check if a save file exists

    //  REM: Display saved games

    //  REM: Let the player select a save

    // REM: Load the selected save
}

// Options menu (to be added later)
void optionsMenu() {

    // REM: Add options menu

}