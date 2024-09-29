#include <cmath>
// constant of numbers used in mathematical 
#include <iostream>
#include <cmath>
// constant of numbers used in mathematical 
#include <numbers>

#include <vector>

#include "math_operations.h"


void written_summary();

int main()
{
    written_summary();
    
    // example of user defined functions in modules
    //add(1, 2);
    
    
    
    

    return 0;
}


void written_summary(){

    using namespace std;

    std::cout << std::endl;
    std::cout << "------------------------------------------------------" << std::endl;
    std::cout << "CHAPTER 3" << std::endl;
    std::cout << "------------------------------------------------------" << std::endl << std::endl;

    cout << endl;
    cout << "User-Defined Functions and Classes in  Modules" << endl;
    cout << "------------------------------------------------------" << endl << endl;

    

    cout << "1. Header files (.h): Contain declarations of functions and classes." <<  endl;
    cout << "2. Source files (.cpp): Contain definitions/implementations of the functions and classes." << endl;
    cout << "3. Main program (main.cpp): Imports the header files and uses the functions and classes." << endl;


    cout << endl << endl;
    cout << "NON MEMBER FUNCTIONS" << endl;
    cout << "------------------------------------------------------" << endl << endl;   

    cout<< "Key Characteristics of Non-Member Functions: " << endl;
    cout << "1. Independent from Classes: They are not tied to any class and are defined outside the class." << endl;
    cout << "2. Cannot Access Private Members Directly:" ;
    cout << "Non-member functions cannot access a class's private or protected members unless explicitly given access (via a friend declaration)." << endl;
    cout << "3. Global Scope: They exist in the global scope but can operate on class objects passed as parameters." << endl;

    cout << endl << endl;
    cout << "WHY MODULES:" << endl;
    cout << "------------------------------------------------------" << endl << endl;   

    cout << "Aspect                         Headers                                 Modules" << endl;
    cout << "Compilation	                Slow due to redundant parsing	        Fast, parsed once and reused" << endl;
    cout << "Encapsulation	                Weak, exposes all declarations	        Strong, hides details, exports only what's needed" << endl;
    cout <<"Include Guards	                Required to prevent re-inclusion	    Not required, modules manage imports" << endl;
    cout << "Name Collisions	            Prone to namespace pollution	        Reduces collisions with module namespaces" << endl;
    cout << "Dependency Control	Implicit    includes all dependencies	            Explicit and more controlled" << endl;
    cout << "Error Reporting	            Errors harder to trace	                Easier to trace, module-specific" << endl;
    cout << "Code Clarity	                Cluttered with declarations	            Cleaner, organized code" << endl;
    cout << "Security	                    Exposes private details unintentionally	Provides better access control" << endl;
}