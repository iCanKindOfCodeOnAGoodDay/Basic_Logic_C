// A Simple C program containing a main func that initializes a constant, 
// And passes that k into myFunc which checks if the parameter is zero

// Inputs: myFunc(int someNum)

// Returns: Main() int; myFunc() bool; 

// Scott Quashen 3.17.2024

#include <stdio.h>
#include <stdbool.h>

bool myFunc(int someNum){

// Check if input is 0, else return false

    if(someNum == 0){

        printf("\nLooks like the condition is true.");

        return true;

    } 
    
    else {

        printf("\nLooks like the condition is false.");

        return false;

    }
}

int main(){

// Declare and initialize constant

    int myNumber = 0;

// function calls

    myFunc(myNumber);

    return 0;

}

