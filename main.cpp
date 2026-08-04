#include <iostream>
#include <string>
#include <cctype>

// Function to return Morse code for uppercase letters A-Z
std::string getMorseCode(char c) {
    switch (c) {
        case 'A': return ".-";
        case 'B': return "-...";
        case 'C': return "-.-.";
        case 'D': return "-..";
        case 'E': return ".";
        case 'F': return "..-.";
        case 'G': return "--.";
        case 'H': return "....";
        case 'I': return "..";
        case 'J': return ".---";
        case 'K': return "-.-";
        case 'L': return ".-..";
        case 'M': return "--";
        case 'N': return "-.";
        case 'O': return "---";
        case 'P': return ".--.";
        case 'Q': return "--.-";
        case 'R': return ".-.";
        case 'S': return "...";
        case 'T': return "-";
        case 'U': return "..-";
        case 'V': return "...-";
        case 'W': return ".--";
        case 'X': return "-..-";
        case 'Y': return "-.--";
        case 'Z': return "--..";
        default: return ""; // Ignores numbers and special punctuation
    }
}

int main() {
    std::string userInput;

    std::cout << "Enter a message in English (A-Z characters only): ";
    std::getline(std::cin, userInput);

    std::string fullMorse = "";

    for (char character : userInput) {
        char upperChar = std::toupper(character);
        
        // Ignore spaces and non-alphanumeric characters
        if (upperChar >= 'A' && upperChar <= 'Z') {
            std::string morse = getMorseCode(upperChar);
            std::cout << upperChar << ": " << morse << "\n";
            fullMorse += morse + "   "; // 3 spaces between letters
        }
    }

    std::cout << "Full Morse Code Message: " << fullMorse << "\n";

    return 0;
}
