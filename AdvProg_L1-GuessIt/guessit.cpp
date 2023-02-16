#include <iostream>
#include <cstdlib>
#include <ctime>
#include "guessit.h"

using namespace std;


/***
    Args:
    Returns:
        number (int) : random number in range 1-100
***/
int generateRandomNumber() {
    int n;
    for (int i = 0; i < 5; i++)
        n=rand()%100;
    return n;
}

int getPlayerGuess() {
    int n;
    cin>>n;
    return n;
}


/***
    Args:
        number (int): answer number from player
        randomNumber (int): the true number
    Returns:
        answer (string) : answer of computer after checking result
***/
string getAnswer(int number, int randomNumber) {
    string answer;
    if (number==randomNumber)
    {
        cout<<"Congratulation! You win.";
        answer="Congratulation! You win.";
    }
    else if (number>randomNumber)
    {
        cout<<"Your number is higher.";
        answer="Your number is higher.";
    }
    else if (number<randomNumber)
    {
        cout<<"Your number is lower.";
        answer="Your number is lower.";
    }
    string answer;

    return answer;
}


/***
    Args:
        answer (string): answer from computer after compare numbers
    Returns:
        result (bool) : player win or not
***/
bool checkSuccess(string answer) {
    // TODO: return the result after checking that player guessed right or wrong
    if (answer=="Congratulation! You win.")
    {
        return true;
    }
    return false;
}


/***
    Args:
        isContinued (char): player's choice
    Returns:
        result (bool) : continue playing or not
***/
bool checkContinuePlaying(char isContinued) {
    // TODO: return result after checking player continue playing or not
    bool result = false;
    
    return result;
}


/***
    Args:
        
    Returns:
        isContinues (char) : player's choice (continue playing or not)
***/
char getPlayerOpinion() {
    // TODO: Ask the player about continue playing and return the player's choice
    char isContinued;
    cout<<"continue: ";
    cin>>isContinued;
    return isContinued;
}


void playGuessIt() {
    int randomNumber = generateRandomNumber();
    int number;
    string answer;
    
    do {
        number = getPlayerGuess();
        answer = getAnswer(number, randomNumber);
        cout << answer << endl;
    } while (!checkSuccess(answer));
}

int run() {
    srand(time(0));
    char isContinued;
    do {
        playGuessIt();
        isContinued = getPlayerOpinion();
    } while (checkContinuePlaying(isContinued));
    return 0;
}
