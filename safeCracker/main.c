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
int *makeApin();
int *getPinGuess();
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

int *getPinGuess() {
    int pin[4];
    int numberOfItemsScanned = 0;
    while (numberOfItemsScanned != 1) {
        printf("Please a four digit pin: ");
        fpurge(stdin);
        numberOfItemsScanned = scanf("%d", pin);
    }
    // Prints to the screen to make sure that the number was captured correctly.
    printf("%d%d%d%d\n",pin[0],pin[1],pin[2],pin[3]);
    
    return 0;
    
}

//**********************************
//******Generates Random Pin********
//**********************************
//**********************************

int *makeApin() {
    int pinNumber[4] = {'\0'};
    
    //***Generate Random Pin***
    pinNumber[3] = arc4random_uniform(3),arc4random_uniform(3),arc4random_uniform(3),arc4random_uniform(3);
    printf("\n %D", *pinNumber);
    
    
    return 0;
};



void part1(void) {
}

