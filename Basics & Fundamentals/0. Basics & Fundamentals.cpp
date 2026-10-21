============================================================================
============================================================================
                     1. Structure of a C++ Program
============================================================================
============================================================================

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
  --------------------------------------------------------  --------------------------------------------------------
  • #include <iostream> // Used to include the functions for input/output operations.
  • int main() {      } // The main function where the program begins.
  • std::cout           // Represents standard character output console. The "<<" operator will send data into it.
  • std::endl;          // Used to insert a newline. The ";" terminates execution statements.
  • '\n';               // Also used to insert a newline, but is better performance wise. But the endl (end line) will flush the output buffer
  • return 0;           // If we reach 0, nothing is wrong with program. If 1 is returned there is an issue
  • // test             // = single-line comment
  • /* test */          // = multi-line command 




============================================================================
============================================================================
                        2. Data Types & Variables
============================================================================
============================================================================
// Note - Every variable needs a:
    • declaration | int x;
    • assignment  | x = 4;
Example: int x = 4;
std::cout << x;

    
//Type	              Description	                                        Example Syntax
----                  ---------------------------------------------       --------------------------
int	                  Whole integers	                                    int age = 25;
double	              Floating-point numbers	                            double price = 19.99;
char	                Single character (enclosed in single quotes)	      char grade = 'A';
bool	                Boolean state (true or false)	                      bool isCoding = true;
std::string	          Managed sequence of characters (double quotes)	    std::string name = "Alice";
const [insert type]   Makes a variable unchangeable                       const double PI = 3.14159

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

    // Creates an unchangeable variable
    const double PI = 3.14159;
  
  
    Return 0;
}




============================================================================
============================================================================
                            3. User Input & Output
============================================================================
============================================================================

#include <iostream>
int main() {
    
    int age; 
    
    std::cout << "What is your current age? ";
    std::cin >> age;
    std::cout << "Currently your age is: " << age << ". Congrats! You've officially reached 'Unc' status! Now lets learn C++";
    
    return 0;
}

  Notes:
  --------------------------------------------------------  --------------------------------------------------------

  • std::cin >> userAge;    // Makes program interactive through standard character input console. The ">>" operator will store input into the variable.




============================================================================
============================================================================
                    4. Control Flow (Conditionals & Loops)
============================================================================
============================================================================


#include <iostream>
int main() {
    int age;
    
    std::cout << "How old are you? ";
    std::cin >> age;

    if (age >= 28) {
        std::cout << "Your getting older, time to take life seriously.";
    } else {
        std::cout << "You've got your whole life ahead of you! Live a little bit!";
    }
    return 0;
    
}


  Notes:
  --------------------------------------------------------  --------------------------------------------------------
  • else if // can be used after if, but before else if you want to add another condition.




============================================================================
============================================================================
                    5. Loops (For loops & While loops)
============================================================================
============================================================================

#include <iostream>
int main() {
    
    for (int i = 0; i < 5; i++){
        std::cout << "Hello! Number:" << i << std::endl;
    }
    return 0;
    
}

----------------------------------------------------------
#include <iostream>
int main() {

    int target = 11;
    int guess = 0;
    
    while (guess != target) {
        std::cout << "Guess a number between 0 and 15: ";
        std::cin >> guess;
        
    }
    std::cout << "You guessed it right! The while loop guess now ended." << std::endl;
    return 0;
}


  Notes:
  --------------------------------------------------------  --------------------------------------------------------
• for loop  // Used when you have a specific count/range | "Print this test 10x"
• while loop // Used when waiting for an event or dynamic condition | "Keep playing the game until the user clicks 'Exit'."

     
Output from "for" loop example:
    Hello! Number:0
    Hello! Number:1
    Hello! Number:2
    Hello! Number:3
    Hello! Number:4

    
============================================================================
============================================================================
                                6. Functions
============================================================================
============================================================================
#include <iostream>
#include <string>

int addNumbers(int a, int b) {
  return a + b;
}

  
int main() {
  int sum = addNumbers(1000, 337);
  std::cout << sum;
  return 0;
}

----------------------------------------------------------
    
#include <iostream>
#include <string>
#include <iomanip>


void welcomeUser() {
  std::cout << "Welcome to the Coding Club!" << std::endl;
}

void displayAge(int age) {
  std::cout << "Our database shows that you are " << age << " years old currently." << std::endl;
}

double calculateTaxes(double price) {
  double taxRate = 0.11;
  return price * taxRate;
}

int main() {

  welcomeUser();

  int currentAge = 28;
  displayAge(currentAge);

  double price = 13.37;
  double finalTaxes = calculateTaxes(price);
  double total = price + finalTaxes;
  
  std::cout << "The taxes on $" << price << " is " << finalTaxes << std::endl;
  std::cout << "Which brings you to a total cost of: $" << std::fixed << std::setprecision(2) << total << std::endl;

  return 0;  
  
}




  Notes:
  --------------------------------------------------------  --------------------------------------------------------

• Functions // Used to create reusable blocks of code that perform a specific task, instead of re-writing the same code over and over. Once created, you just have to "call" it.

  Functions require three main parts:
  
    - Return Type // You must define the type of data returned (int, double, std::string), If not use "void".
    - Function Name // Unique name you use to call the function (example: calculateTax, measureArea, and totalPrice)
    - Parameters (Inputs) // Data passed into a function to work with, placed within the parentheses ().

Key tips:
  - Always define your functions above the main() function, that way the program knows they exist.

Code Breakdown:

• void welcomeUser() // A function using void and an empty parameter. Which will make this function return nothing and take no inputs. This is great for making a welcome or introduction message/banner.

  - Called using | welcomeUser();
  
• void displayAge(int age) // A function using void and a interger parameter. Which will make the function return nothing again, but input the "age".

  - Called using | displayAge(myAge);

• double calculateTaxes() // A function that takes input and returns a value

• << std::fixed << std::setprecision(2) // "std::fixed" will ensure fixed decimal notation, while "std::setprecision(2)" limits to exactly 2 digits after the dot.

  - Must include in the header for using "setprecision" | #include <iomanip>




============================================================================
============================================================================
                                7. Classes
============================================================================
============================================================================

#include <iostream>
#include <string>

class Gamer {
public:
    std::string gamerTag;
    int level;
    std::string location;

    void callout() {
      std::cout << gamerTag << " spotted an enemy at: " << location << std::endl;
    }
  
};

int main() {

  Gamer player;

  player.gamerTag = "VirusTrojan.exe";
  player.level = 1337;
  player.location = "315° at the gray building's 2nd floor";

  player.callout();
  
  return 0;
  
}


  
  Notes:
  --------------------------------------------------------  --------------------------------------------------------

• Classes // Used to group variables and functions together into one package to share data easily. A class is simply a blueprint, while an object is the actual thing you build from that blueprint.

  Classes require three main parts:
  
    - Public vs. Private (Encapsulation) // Can be used to hidei nformation inside a class to keep safe
        - Public // Anyone can access these variables & functions from anywhere in the program
        - Private // Only functions inside the class can access these, great for protecting sensitive data (passwords or health points in a game)
    
    - Constructors // A special function that runs automatically at the exact moment you create an object. It's mostly used to set up your initial data so you don't have to assign variables one-by-one. Will always have same name as class and no return type.

            class Gamer {
            public:
              std::string name;
              int health;
        
              // The constructor is here \/
              Player(std::string StartName, int startHealth) {
                  name = startName;
                  health = startHealth;
              }
            };
        
            int main() {
              Gamer p1("VirusTrojan.exe", 100)
            }


    - The "this" Keyword // Within a class function, "this" is a hidden pointer that will directly point to the specific object running the code. These are very useful when your function parameters have the same name as your class variables.

              class Car {
              public:
                int speed;

                void setSpeed(int speed) {
                  // "this->speed" means the class variable
                  // "speed" means the function parameter
                  this->speed = speed;
                }
              };


  
