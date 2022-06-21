// There are multiple advantages of using enum over macro when many related named constants have integral values. 
// a) Enums follow scope rules. 
// b) Enum variables are automatically assigned values.

// enum vs macros
#define Working 0
#define Failed 1
#define Freezed 2

// enum State{Working, Failed, Freezed}; // throw an error
enum State{working, failed, freezed}; // will not throw an error


int main()
{
    return 0;
}