//pc3656
//10/22/24
//Return Nth element of the Fibonacci sequence.

#include <iostream>
using namespace std;

int fib(int n);

int main() {
    int n;
    cout << "Please enter a positive integer: ";\
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}

int fib(int n) {
    int previous(1), nthElement(1);
    for (int i = 0; i < n - 2; i++) {
        int temp = nthElement;
        nthElement += previous;
        previous = temp;
    }
    return nthElement;
}