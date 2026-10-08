1. Structure of a C++ Program
-----------------------------------------------------------------------------------------------------------------

#include <iostream>

int main() {
    
    std::cout << "Hello, World!" << std::endl;
    
    return 0;
    
}

  Notes:
  --------------------------------------------------------
  • #include <iostream> // Used to include the input/output library.
  • int main() {      } // The main function where execution begins.
  • std::cout           // Represents standard character output console. The "<<" operator will send data into it.
  • std::endl;          // Used to insert a newline. The ";" terminates execution statements.


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

