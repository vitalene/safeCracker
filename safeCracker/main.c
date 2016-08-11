//
//  main.c
//  safeCracker
//  © 2016 Neil Vitale.
//

//================
#include <stdio.h>
#include <stdlib.h>
//================


//**********************
//**********************
char makeApin();
int getPinGuess();
void part1(void);
char getUsername(char userName);
int getNumberFromUser();
//***********************
//***********************

//**********************************
//******Main Function**************
//**********************************
//**********************************
int main(int argc, const char * argv[]) {
    
    
    //******Get user's name*************
    //**********************************
    char userName[20] = {'\0'};
    int numberOfItemsScanned = 0;
    //*********************************
    while (numberOfItemsScanned != 1) {
        //Asks user for name and gathers input
        fpurge(stdin);
        printf("Please enter your first name: ");
        numberOfItemsScanned = scanf("%[^\n]s\n", userName);
        printf("Thanks, %s.  Welcome to the game.\n", userName);
        
        getPinGuess();
        makeApin();
        part1();
        return 0;
    }
}
//**********************************
//******End Main Function***********
//**********************************
//**********************************




//**********************************
//******Get user's guess************
//**********************************
//**********************************

int getPinGuess() {
    int pin[4] = {-1, -1, -1, -1};
    int numberOfItemsScanned = 0;
    while (numberOfItemsScanned != 4) {
        printf("Please enter a four digit pin like this 0123: ");
        fpurge(stdin);
        numberOfItemsScanned = scanf("%1d%1d%1d%1d", &pin[0],&pin[1],&pin[2],&pin[3]);
        fpurge(stdin);
    }
    // Prints to the screen to make sure that the number was captured correctly.
    for (int i = 0; i < 4; i++) {
        printf("pin[%d]%d\n", i, pin[i]);
    }
    
    
    return 0;
    
}

//**********************************
//******Generates Random Pin********
//**********************************
//**********************************

char makeApin() {
    //*************************
    int pinNumber[4] = {arc4random_uniform(4),arc4random_uniform(4),arc4random_uniform(4),arc4random_uniform(4)};
    fpurge(stdin);
    printf("%1d%1d%1d%1d\n", pinNumber[0],pinNumber[1],pinNumber[2],pinNumber[3]);
    fpurge(stdin);
    
    for (int i = 0; i < 4; i++) {
        printf("pin[%d]%d\n", i, pinNumber[i]);
    }
    return *pinNumber;
    
};



void part1(void) {
}

