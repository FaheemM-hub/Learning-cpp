1. Structure of a C++ Program
-----------------------------------------------------------------------------------------------------------------

#include <iostream>

int main() {
    
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Hello, World!" << '\n';
    
    return 0;
    
}

  Notes:
  --------------------------------------------------------
  • #include <iostream> // Used to include the functions for input/output operations.
  • int main() {      } // The main function where the program begins.
  • std::cout           // Represents standard character output console. The "<<" operator will send data into it.
  • std::endl;          // Used to insert a newline. The ";" terminates execution statements.
  • '\n';               // Also used to insert a newline, but is better performance wise. But the endl (end line) will flush the output buffer
  • return 0;           // If we reach 0, nothing is wrong with program. If 1 is returned there is an issue

=================================================================================================================

2. Data Types & Variables
---------------------------------------------------------------------------
Type	        Description	                                        Example Syntax
----            ---------------------------------------------       --------------------------
int	            Whole integers	                                    int age = 25;
double	        Floating-point numbers	                            double price = 19.99;
char	        Single character (enclosed in single quotes)	    char grade = 'A';
bool	        Boolean state (true or false)	                    bool isCoding = true;
std::string	    Managed sequence of characters (double quotes)	    std::string name = "Alice";

