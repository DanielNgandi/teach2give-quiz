/*
Question 2: Fibonacci Sequence
Write a program to generate the Fibonacci sequence up to 100
*/
#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int c = 1;

    cout << "fibonacci sequence up to 100:\n";
    while (a <= 100) {
        cout << a << " "; 
        a = b + c;
        b = c;
        c = a;
    }
    return 0;
}


/*fibonacci sequence up to 100:
0 1 2 3 5 8 13 21 34 55 89
--------------------------------
Process exited after 1.688 seconds with return value 0
Press any key to continue . . .
*/