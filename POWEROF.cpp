/*Question 3: Power of Two
Write a program that takes an integer as input and returns true if the input is a power of two
*/
#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    return n > 0 && ((n & (n - 1)) == 0);
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (isPowerOfTwo(num)) {
        cout << num << " => returns true" << endl;
    } else {
        cout << num << " => returns false" << endl;
    }

    return 0;
}


/* output 1:
Enter an integer: 64
64 => returns true

--------------------------------
Process exited after 12.82 seconds with return value 0
Press any key to continue . . .


Output 2:
Enter an integer: 77
77 => returns false

--------------------------------
*/