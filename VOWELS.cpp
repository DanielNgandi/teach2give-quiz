/*Question 6: Count Vowels
Write a program that counts the number of vowels in a sentence.
*/
#include <iostream>
#include <string>
#include <cctype> 

int countVowels(const std::string& sentence) {
    int vowelCount = 0;
    for (char c : sentence) {
        
        char lowercaseChar = std::tolower(c);
       
        if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' || lowercaseChar == 'o' || lowercaseChar == 'u') {
            vowelCount++;
        }
    }
    return vowelCount;
}

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    int numVowels = countVowels(sentence);
    std::cout << "Number of vowels in the sentence: " << numVowels << std::endl;

    return 0;
}

/*Output:
Enter a sentence: i love teach2give
Number of vowels in the sentence: 7


*/
