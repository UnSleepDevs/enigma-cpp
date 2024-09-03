#include <iostream>
#include "engine.h"

int main() {
    Engine maquina; // Default constructor is fine
    Engine otroEngrane;
    maquina.connect(&otroEngrane);

    std::string word;
    std::getline(std::cin, word); // Read a line of input

    for (char letter : word) {
        // Output each character processed by the move function
        std::cout << maquina.move(letter) << " "; // Added a space for better readability
    }
    std::cout << std::endl; // Print a newline at the end of the output

    return 0;
}
