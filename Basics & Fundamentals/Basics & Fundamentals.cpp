1. Structure of a C++ Program
---------------------------------------------------------------------------

#include <iostream>

int main() {  // The main function where execution begins
    
    std::cout << "Hello, World!" << std::endl;
    
    return 0; // Indication that program executed successfully
    
}

  Notes:
  ---------------------------------------------------------------------------
  • #include <iostream> // Used to include the input/output library.
  • int main() {      } // The main function where execution begins.
  • std::cout           // Represents standard character output console. The "<<" operator will send data into it.
  • std::endl;          // Used to insert a newline. The ";" terminates execution statements.
