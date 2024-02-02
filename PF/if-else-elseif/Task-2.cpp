#include<iostream>
using namespace std;

int main()
{
    // Declare variables to store choices of Player 1 and Player 2
    char p1, p2;

    // Display welcome message and menu for the game
    cout << "\tWELCOME TO THE GAME OF ROCK/PAPER/SCISSORS\t" << endl;
    cout << "YOU CAN CHOOSE FROM THE FOLLOWING MENU: " << endl;
    cout << "r: For Rock" << endl;
    cout << "p: For Paper" << endl;
    cout << "s: For Scissors" << endl;

    // Prompt Player 1 to enter their choice
    cout << "\tPlayer 1 enter your choice: ";
    cin >> p1;

    // Prompt Player 2 to enter their choice
    cout << "\tPlayer 2 enter your choice: ";
    cin >> p2;

    // Determine the winner based on the choices made by both players
    if ((p1 == 'p' && p2 == 'r') || (p1 == 's' && p2 == 'p') || (p1 == 'r' && p2 == 's')) {
        cout << "\tPlayer 1 Wins..!!\t" << endl;
    }
    else if ((p2 == 'p' && p1 == 'r') || (p2 == 's' && p1 == 'p') || (p2 == 'r' && p1 == 's')) {
        cout << "\tPlayer 2 Wins..!!\t" << endl;
    }
    else if ((p1 == 'p' && p2 == 'p') || (p1 == 's' && p2 == 's') || (p1 == 'r' && p2 == 'r')) {
        cout << "\tDraw..!\t" << endl;
    }

    return 0;
}
