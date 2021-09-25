#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 int
 bool
 double
 float
 char
 void 
 
 
 
 
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example



 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int pennies = 3;
    int dimes = 9;
    int dollars = 7;

    float money = 7.93f;
    float temperature = 89.0f;
    float height = 15.4f;

    char eight = '8';
    char seven = '7';
    char coolLetter = 'x';

    double price = 9.93;
    double opacity = 0.85;
    double boiling = 212.0;

    bool isTodayChristmas = false;
    bool isTodayBelowFreezing = false;
    bool senateSupermajority = false;

    
    ignoreUnused(pennies, dimes, dollars, money, temperature, height, eight, seven, coolLetter, price,opacity, boiling); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool biggerThan(int x, int y)
{
    ignoreUnused(x, y);
    return {};
}


/*
 2)
 */
int numOfLegs(char animal, int numOfArms = 2)
{
    ignoreUnused(animal, numOfArms);
    return {};
}

/*
 3)
 */

double root(double number, double power = 2)
{
    ignoreUnused(number, power);
    return {};
}

/*
 4)
 */

bool isEven(int number)
{
    ignoreUnused(number);
    return {};
}

/*
 5)
 */

bool isCoolCharacter(char letter)
{
    ignoreUnused(letter);
    return {};
}
/*
 6)
 */

int addressFromPhoneNumber(int phoneNumber)
{
    ignoreUnused(phoneNumber);
    return {};
}

/*
 7)
 */

int multiply(int x = 1, int y = 1)
{
    ignoreUnused(x, y);
    return {};
}

/*
 8)
 */

int modulo(int x = 1, int y = 1)
{
    ignoreUnused(x, y);
    return {};
}

/*
 9)
 */

double addThreeNumbers(double x = 1, double y = 1, double z = 1)
{
    ignoreUnused(x, y, z);
    return {};
}

/*
 10)
 */

bool isPrime(int x = 2)
{
    ignoreUnused(x);
    return {};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto biggerThanResult = biggerThan(2,1);
    auto numOfLegs("walrus");
    auto squareRootOfFour = root(4.0, 2);
    auto isEven(4);
    auto isCoolCharacter('x');
    auto addressFromPhoneNumber(3195699019);
    auto bigProduct = multiply(1,1);
    auto rem = modulo(15,4);
    auto six = addThreeNumbers(1.0,2.0,3.0);
    auto isTwoPrime = isPrime(2);

    ignoreUnused(squareRootOfFour);

    ignoreUnused(biggerThanResult, numOfLegs, isEven,isCoolCharacter,addressFromPhoneNumber,bigProduct,rem, six, isTwoPrime, carRented,
    squareRootOfFour);

    std::cout << "good to go!" << std::endl;
    return 0;    
}
