//pc3656
//10/22/24
//Pine tree program.

#include <iostream>
using namespace std;

//Prototypes.
void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);

int main() {
    int n;
    char symbol;
    //Prompting the user for inputs and storing them into variables.
    cout << "Please enter the amount of triangles that you would like to print. Enter a positive integer: ";
    cin >> n;
    cout << "Please enter the character that you would like your triangles to be made of: ";
    cin >> symbol;
    //Display the Pine tree.
    printPineTree(n, symbol);
    return 0;
}

//Individual triangle function.
void printShiftedTriangle(int n, int m, char symbol) {
    const char SPACE(' ');
    for (int i = 0; i < n; i++) {
        //Print space.
        for(int s = 0; s < n - i + m - 1; s++){
            cout << SPACE;
        }
        for(int c = 0; c < i * 2 + 1; c++) {
            cout << symbol;
        }
        cout << endl;
    }
}

//Pine Tree function
void printPineTree(int n, char symbol) {
    for (int i = 0; i < n; i++) {
        printShiftedTriangle(i + 2, n - i - 1, symbol);
    }
}