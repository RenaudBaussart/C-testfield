#include <iostream>
#include <vector>
#include <string>
using namespace std;

int WinnerSelector(int Player1Choice, int Player2Choice) {
    if (Player1Choice == Player2Choice) {
        return 0; // Draw
    } else if ((Player1Choice == 1 && Player2Choice == 3) ||
               (Player1Choice == 2 && Player2Choice == 1) ||
               (Player1Choice == 3 && Player2Choice == 2)) {
        return 1; // Player 1 wins
    } else {
        return 2; // Player 2 wins
    }
}

int main() {
    char YN = 'Y';
    int Player1Score = 0;
    int Player2Score = 0;
    int Player1Hand = 0;
    int Player2Hand = 0;
    int WinnerResult = 0;
    string VoidEater = "";
    cout << "The rules of the game are simple: Rock, Paper, Scissors with 3 points.\n1 is Rock, 2 is Paper, 3 is Scissors.\nStart the game (Y/n): ";
    cin >> YN;

    if (YN == 'Y') {
        while (Player1Score < 3 && Player2Score < 3) {
            cout << "score are: 1 player " << Player1Score << " 2 player " << Player2Score << "\n say:  to continue";
            cin >> VoidEater;
            system("clear");
            cout << "1 is Rock, 2 is Paper, 3 is Scissors.\nPlayer 1: ";
            cin >> Player1Hand;
            system("clear");
            cout << "1 is Rock, 2 is Paper, 3 is Scissors.\nPlayer 2: ";
            cin >> Player2Hand;
            WinnerResult = WinnerSelector(Player1Hand, Player2Hand);
            if (WinnerResult == 1) {
                cout << "Player 1 wins!\n";
                Player1Score++;
            } else if (WinnerResult == 2) {
                cout << "Player 2 wins!\n";
                Player2Score++;
            } else {
                cout << "It's a draw!\n";
            }
        }
        if (Player1Score == 3) {
            cout << "Player 1 wins the game!\n";
            return 0;
        } else {
            cout << "Player 2 wins the game!\n";
            return 0;
        }
    } else if (YN == 'n') {
        cout << "Exiting the game.\n";
    } else {
        cout << "Error: You need to enter a valid input.\n";
    }

    return 0;
}