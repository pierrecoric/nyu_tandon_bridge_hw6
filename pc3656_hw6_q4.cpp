//pc3656
//10/22/24
//Divisors of a positive integer.

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

void printDivisors(int num);

int main() {
    int n;
    cout << "Please enter a positive integer >= 2: ";
    cin >> n;
    printDivisors(n);
}

void printDivisors(int num) {
    string begining(""), end("");
    for(int i = 1; i <= sqrt(num); i++){
        if (num % i == 0) {
            begining += to_string(i) + " ";
            if(num / i != i) {
                end = to_string(num / i) + " " + end;
            }
        }
        
    }
    cout << begining << end << endl;
}