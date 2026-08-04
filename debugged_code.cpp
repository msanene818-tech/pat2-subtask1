#include <iostream>
#include <string>
#include <cctype>

// Subtask 3: Fixed debugging function for Morse code translation
std::string translateToMorseFixed(const std::string& text) {
    // Array of Morse code representations for letters A-Z
    std::string morseCode[] = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", 
        ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", 
        "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."
    };

    std::string result = "";
    
    // Fixed loop boundary condition: i < text.length()
    for (size_t i = 0; i < text.length(); ++i) {
        char c = std::toupper(text[i]);
        if (c >= 'A' && c <= 'Z') {
            result += morseCode[c - 'A'] + " ";
        } else if (c == ' ') {
            result += "/ ";
        }
    }
    return result;
}

int main() {
    std::string testInput = "DEBUGGING SUCCESSFUL";
    std::cout << "Original Text: " << testInput << std::endl;
    std::cout << "Morse Output:  " << translateToMorseFixed(testInput) << std::endl;
    return 0;
}
