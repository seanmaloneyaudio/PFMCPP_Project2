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
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 short
 int
 long
 char 
 float 
 double 
 bool
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int height = 10;
    int weight = 12;
    int age = 100;

    short length = 20;
    short width = 2;
    short distance = 200;
    
    long mass = 60000;
    long hypotenuse = 67;
    long gain = 208;
    char firstInitial = 's';
    char middleInitial = 'p';
    char lastInitial = 'm';
    float sample = 100.0f;
    float buffer = 30000.0f;
    float freq = 20000.0f;
    double potatoes = 5213;
    double bread = 5436;
    double burger = 9512;
    bool isActive = true;
    bool isMakingSound = true;
    bool isOpen = false;

    
    ignoreUnused(number, height, weight, age, length, width, distance, mass, hypotenuse, gain, firstInitial, middleInitial, lastInitial, sample, buffer, freq, potatoes, bread, burger, isActive, isMakingSound, isOpen); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)

 */
 int adder(int a, int b) {
     ignoreUnused(a,b);
     return {};
 }
/*
 2)
 */
bool isOpen(int timeOfDay) 
{
    ignoreUnused(timeOfDay);
    return {};
}
/*
 3)
 */
char firstInitial(char firstInitial, char lastInitial = 'R') {
    ignoreUnused(firstInitial, lastInitial);
    return {};
}
/*
 4)
 */
float getArea(float width, float height) {
    ignoreUnused(width, height);
    return {};
}
/*
 5)
 */
int totalOutputs(int outputOne = 2, int outputTwo = 8) {
    ignoreUnused(outputOne, outputTwo);
    return {};
}
/*
 6)
 */
void drawLine(int lineLength, int lineWidth) {
    ignoreUnused(lineLength, lineWidth);
}
/*
 7)
 */
float setVolume(float volumeKnobValue) {
    ignoreUnused(volumeKnobValue);
    return {};
}
/*
 8)
 */
 bool canSleep(bool isWorkDone = false) {
     ignoreUnused(isWorkDone);
     return {};
 }
/*
 9)
 */
void setTime(int hour, int minute) {
    ignoreUnused(hour, minute);
}
/*
 10)
 */
bool isMusician(bool playsGuitar = false, bool canSing = false, bool playsPiano = false, bool makesSickBeats = true) {
    ignoreUnused(playsGuitar, canSing, playsPiano, makesSickBeats);
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
    auto sum = adder(5,10);
    //2)
    auto status = isOpen(9);
    //3)
    auto first = firstInitial('s', 't');
    //4)
    auto area = getArea(20.f, 89.f);
    //5)
    auto outputs = totalOutputs(40, 70);
    //6)
    drawLine(39, 8);
    //7)
    auto volume = setVolume(78);
    //8)
    auto allowedToSleep = canSleep(false);
    //9)
    setTime(12, 48);
    //10)
    bool friends = isMusician(true, false, true, false);
    
    ignoreUnused(carRented, sum, status, first, area, outputs, volume, allowedToSleep, friends);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
