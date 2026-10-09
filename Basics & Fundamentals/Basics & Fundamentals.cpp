1. Structure of a C++ Program
-----------------------------------------------------------------------------------------------------------------

#include <iostream>

int main() {
    
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Hello, World!" << '\n';
    
    return 0;

    // Single-line comment
    /*
       Multi-line comment
        */
}

  Notes:
  --------------------------------------------------------
  • #include <iostream> // Used to include the functions for input/output operations.
  • int main() {      } // The main function where the program begins.
  • std::cout           // Represents standard character output console. The "<<" operator will send data into it.
  • std::endl;          // Used to insert a newline. The ";" terminates execution statements.
  • '\n';               // Also used to insert a newline, but is better performance wise. But the endl (end line) will flush the output buffer
  • return 0;           // If we reach 0, nothing is wrong with program. If 1 is returned there is an issue
  • // test             // = single-line comment
  • /* test */          // = multi-line command 


=================================================================================================================
=================================================================================================================
    
2. Data Types & Variables
---------------------------------------------------------------------------
// Note - Every variable needs a:
    • declaration | int x;
    • assignment  | x = 4;
Example: int x = 4;
std::cout << x;

    
//Type	        Description	                                        Example Syntax
----            ---------------------------------------------       --------------------------
int	            Whole integers	                                    int age = 25;
double	        Floating-point numbers	                            double price = 19.99;
char	        Single character (enclosed in single quotes)	    char grade = 'A';
bool	        Boolean state (true or false)	                    bool isCoding = true;
std::string	    Managed sequence of characters (double quotes)	    std::string name = "Alice";

Examples
---------------------------------------------------------------------------
#include <iostream>
int main() {

    // intergers
    int age = 28;
    int year = 2026;
    int day = 8;

    // doubles
    double temperature = 69.2;
    double gpa = 3.0;
    double price = 13.37;

    // single characters ('' | uses single quotes)
    char grade = 'B';
    char dollarSign = '$';
    char initial = 'F';

    // boolean (true or false)
    bool fake = false;
    bool wrong = true;
    bool powerOn = false;

    // Sequence of characters ("" | uses double quotes)
    std::string name = "John";
    std::string day = "Friday";
    std::string food = "Pizza";

    std::cout << name;
    std::cout << "Hello " << name;
    std::cout << "You are " << age << "years old.";

    
    Return 0;
}

=================================================================================================================
=================================================================================================================
    
3. User Input & Output
---------------------------------------------------------------------------















=================================================================================================================
=================================================================================================================
    
4. Control Flow (Conditionals & Loops)
---------------------------------------------------------------------------








=================================================================================================================
=================================================================================================================
    
5. Functions
---------------------------------------------------------------------------
