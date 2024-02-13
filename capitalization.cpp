/*Question 4: Capitalize Words
Write a program that accepts a string as input
*/

#include <iostream>
#include <string>
#include <cctype> 

std::string capitalizeFirstLetter(const std::string& input) {
    std::string result = input;
    bool capitalizeNext = true; 
    for (char& c : result) {
        if (std::isspace(c)) {
            capitalizeNext = true; 
        } else if (capitalizeNext) {
            c = std::toupper(c); 
            capitalizeNext = false; 
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::string result = capitalizeFirstLetter(input);
    std::cout << "Result: " << result << std::endl;

    return 0;
}




/*Output :
Enter a string: l love teach to give
Result: L Love Teach To Give


*/
