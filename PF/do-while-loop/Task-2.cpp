#include<iostream>
using namespace std;

int main() {
    int i = 0;
    
    // Infinite loop where the condition is always true
    do {
        cout << " :D  "; // Output a smiley face
    } while (i == 0); // Condition always evaluates to true, hence it's an infinite loop

    return 0; // Program ends here, so the code below is unreachable

    // The following line is unreachable, as the program has already ended.
    // Keeping it may confuse the reader as it suggests that the system will pause.
    // Therefore, it's recommended to remove it.
    // system("pause");
}
