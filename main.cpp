#include <iostream>
#include <string>
#include <cctype>

// Function that returns the Morse code equivalent of an uppercase character
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
        case ' ': return " / "; // Word separator
        default: return "";     // Ignore unsupported characters
    }
}

int main() {
    std::string userInput;

    std::cout << "========================================\n";
    std::cout << "      C++ MORSE CODE TRANSLATOR         \n";
    std::cout << "========================================\n";
    std::cout << "Enter a short English message: ";
    std::getline(std::cin, userInput);

    std::cout << "\n--- Character Breakdown ---\n";
    std::string translatedMessage = "";

    for (char character : userInput) {
        char upperChar = std::toupper(character);
        std::string morse = getMorseCode(upperChar);

        if (!morse.empty()) {
            std::cout << upperChar << " -> " << morse << "\n";
            translatedMessage += morse + " ";
        }
    }

    std::cout << "\n--- Full Morse Code Output ---\n";
    std::cout << translatedMessage << "\n";

    return 0;
}
