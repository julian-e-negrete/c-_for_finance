#include <iostream>
#include <cmath>
// constant of numbers used in mathematical 
#include <iostream>
#include <cmath>
// constant of numbers used in mathematical 
#include <numbers>

#include <vector>


void vectors();
void enums();
void control_structures();
void pointers();
void overloading();


int main()
{
    std::cout << "------------------------------------------------------" << std::endl;
    std::cout << "CHAPTER 2" << std::endl;
    std::cout << "------------------------------------------------------" << std::endl << std::endl;


    vectors();

    enums();

    control_structures();
    using std::vector;

    vector <double> v;
    //this is a way of using a foreach in c++
    for (auto elem : v)
    {
        // Use elem, rather than v[i] or v.at(i)
    }

    
    pointers();

    overloading();



    return 0;
}


 void vectors() {

    std::cout << "VECTORS:" << std::endl << std::endl;

    using std::vector;
    //. . .
    vector <double> real; // Vector of real numbers
    /*
    vector <BondTrade> bond_trades; // Vector of user-defined
    BondTrade objects
    */

    // initialize a vector that can hold 3 elements
    vector <double> v(3);

    // asign values by index
    v[0] = 10.6;
    v[1] = 58.63;
    v[2] = 0.874;


    // no assignment operator
    vector <double> w{ 9.8, 10.00, 4.56, 91.3 };
    // with assignment operator
    vector <int> q = { 4, 12, 15 };


    // at() function 
    // is used as an index
    // an exception will be thrown if 
    // it exceds the vector lenght or if the index is negative
    double val = v.at(2);
    try
    {
        double exception = v.at(100);
    }
    catch (const std::exception& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    try
    {
        double exception = v.at(-1);
    }
    catch (const std::exception& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // size function
    // returns the number of elements held by a 'vector'
    auto num_elems_w = w.size();
    auto num_elems_q = q.size();

    // push_back function
    // append an element in the end of a vector
    v.push_back(47.44);

    //apend a elemnent to an empty vector
    vector <double> x; // x.size() = 0

    x.push_back(3.08); // x.size() = 1

    // if we push_back an element to a vector with a fixed size
    // it will be added at the end of it , being the values of the fixed size 0 before the push_back value

    vector <int> ints(3);

    ints.push_back(5);
    std::cout << "------------------------------------------------------" << std::endl;
    std::cout << "One might find vectors set with fixed numerical values in test functions, but they should be avoided in production code." << std::endl;
    std::cout << "------------------------------------------------------" << std::endl;



}


 void enums() {

    enum OptionType {
        European,
        American,
        Asian,
        African 
    };

    /*
    std::cout << "ENUMS:" << std::endl << std::endl;

    std::cout << European << std::endl;
    */
    

    // enum clases
    // they are used t aviud enum overlaps

    enum class Bond {
        Government,
        Corporate,
        Municipal,
        Convertible
    };

    enum class Futures_Contract
    {
        Gold,
        Silver,
        Oil,
        Natural_Gas,
        Wheat,
        Corn
    };
    enum class Options_Contract
    {
        European,
        American,
        Bermudan,
        Asian
    };

    
    

}

 void control_structures() {
    //ternary if statement
    //condition ? expression_if_true : expression_if_false;
    int a = 10, b = 20;

    // if the statement a > b is true max will have the value of a, and if is false it will have the value of b;
    int max = (a > b) ? a : b;



}

 void pointers() {
    std::cout << "POINTERS" << std::endl << std::endl;

    using std::vector;
    // type aliases

    using RealVector = vector<double>;
    // RealVector is an alias for vector<double> so x is a vector of type double.
    RealVector v_real = { 3.19, 2.58, 1.06 };


    // references

    int original = 15;
    int& ref = original; // int& means "reference to an int"

    /*
    once a reference is defined, it cannot be reassigned to
    another variable for the remainder of its lifetime.
    */

    /*
    Using a reference for a plain old numerical type is trivial, but they become
    important when passing large objects into a function, so as to avoid object
    copy that can decimate a program�s runtime performance.
    */





    int x = 41;
    int* xp;

    //xp point to the memory direction of x
    xp = &x;


    std::cout << "xp pointing to: " << xp << " the value stored in that memory direction is: " << *xp << std::endl;

    // with *xp im using it as a reference to the value directly
    // so if i change the value of *xp i am changing the value of x

    *xp = 25;

    std::cout << "the value of x now is: " << x << std::endl;

    // if i want to change what a pointer is refering i can change it 
    // the same as i do when i change the value of a variable
    int y = 106;
    // now xp is pointing to the memory direction of y;
    xp = &y;

    std::cout << "the new value of xp is: " << *xp << " but the value of x still is:  " << x << std::endl;


    //definition of some class with the function some_fcn
    class SomeClass {
        public:
            void some_fcn() {

            };

    };

    // as references we can use pointers in classes too

    SomeClass sc;

    SomeClass* ptr_sc = &sc;

    // we are using the value stored in the direction that ptr_sc is pointing
    // and calling the function some_fcn()
    (*ptr_sc).some_fcn();

    // we can use the indirection operator that does the same thing
    ptr_sc->some_fcn();





}

// functions for overloading
 int sum(int a, int b) {
    return a + b;
}
 int sum(int a, int b, int c) {
    return a + b + c;
}

 std::vector<double> operator + (const std::vector<double>& x, const std::vector<double>& y)
{
    std::vector<double> add_vec;
    if (x.size() == y.size())
    {
        for (unsigned i = 0; i < x.size(); ++i)
        {
            add_vec.push_back(x.at(i) + y.at(i));
        }
    }
    return add_vec; // Empty vector if x & y
    //sizes not identical
}


 void overloading() {
    // function overloading
    // same function, but takes diferent parameters

    std::cout << "sum1 = " << sum(1, 2) << std::endl;
    std::cout << "sum2 = " << sum(5, 6, 7) << std::endl;


    // operator overloading
    std::vector<double> x = { 1.1, 2.2, 3.3 };
    std::vector<double> y = { 0.1, 0.2, 0.3 };

    auto v_sum = x + y;
    std::cout << "resultado de la suma de 2 vectores:" << std::endl;
    for (int i = 0; i < v_sum.size(); i++) {
        std::cout << v_sum.at(i) << std::endl;
    }

    

}



