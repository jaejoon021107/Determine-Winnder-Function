// Final Project_mypart pt 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void determineWinner(int usr1bankrupt, int usr2bankrupt)           // 2 players scenario ,, each player has its independent variable that checks if a player is bankrupted
{                                                                  // same information applies to other functions, but with more players 
    if ((usr1bankrupt > 0) && (usr2bankrupt == 0))                                     
    {
            cout << "Congratulations! player 1 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt > 0))
    {
            cout << "Congratualations! player 2 wins!" << endl;
    }
    else                                                            // if both players are bankrupt, which mean none of the condidtions are met from the conditional statements above, error occurs.
    {
        cout << "ERROR!";
    }
}

void determineWinner(int usr1bankrupt, int usr2bankrupt, int usr3bankrupt)   // 3 players scenario
{
    if ((usr1bankrupt > 0) && (usr2bankrupt == 0) && (usr3bankrupt == 0))
    {
            cout << "Congratulations! player 1 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt > 0) && (usr3bankrupt == 0))
    {
        cout << "Congratulations! player 2 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt == 0) && (usr3bankrupt > 0))
    {
        cout << "Congratulations! player 3 wins!" << endl;
    }
    else
    {
        cout << "ERROR!";
    }
}


void determineWinner(int usr1bankrupt, int usr2bankrupt, int usr3bankrupt, int usr4bankrupt)  // 4 players scenario
{
    if ((usr1bankrupt > 0) && (usr2bankrupt == 0) && (usr3bankrupt == 0) && (usr4bankrupt == 0))
    {
        cout << "Congratulations! player 1 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt > 0) && (usr3bankrupt == 0) && (usr4bankrupt == 0))
    {
        cout << "Congratulations! player 2 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt == 0) && (usr3bankrupt > 0) && (usr4bankrupt == 0))
    {
        cout << "Congratulations! player 3 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt == 0) && (usr3bankrupt == 0) && (usr4bankrupt > 0))
    {
        cout << "Congratulations! player 4 wins!" << endl;
    }
    else
    {
        cout << "ERROR!";
    }
}


void determineWinner(int usr1bankrupt, int usr2bankrupt, int usr3bankrupt, int usr4bankrupt, int usr5bankrupt)   // 5 players scenario
{
    if ((usr1bankrupt > 0) && (usr2bankrupt == 0) && (usr3bankrupt == 0) && (usr4bankrupt == 0) && (usr5bankrupt == 0))
    {
        cout << "Congratulations! player 1 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt > 0) && (usr3bankrupt == 0) && (usr4bankrupt == 0) && (usr5bankrupt == 0))
    {
        cout << "Congratulations! player 2 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt == 0) && (usr3bankrupt > 0) && (usr4bankrupt == 0) && (usr5bankrupt == 0))
    {
        cout << "Congratulations! player 3 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt == 0) && (usr3bankrupt == 0) && (usr4bankrupt > 0) && (usr5bankrupt == 0))
    {
        cout << "Congratulations! player 4 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt == 0) && (usr3bankrupt == 0) && (usr4bankrupt == 0) && (usr5bankrupt))
    {
        cout << "Congratulations! player 5 wins!" << endl;
    }
    else
    {
        cout << "ERROR!";
    }
}

void determineWinner(int usr1bankrupt, int usr2bankrupt, int usr3bankrupt, int usr4bankrupt, int usr5bankrupt, int usr6bankrupt)   // 6 players scenario
{
    if ((usr1bankrupt > 0) && (usr2bankrupt == 0) && (usr3bankrupt == 0) && (usr4bankrupt == 0) && (usr5bankrupt == 0) && (usr6bankrupt == 0))
    {
        cout << "Congratulations! player 1 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt > 0) && (usr3bankrupt == 0) && (usr4bankrupt == 0) && (usr5bankrupt == 0) && (usr6bankrupt == 0))
    {
        cout << "Congratulations! player 2 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt == 0) && (usr3bankrupt > 0) && (usr4bankrupt == 0) && (usr5bankrupt == 0) && (usr6bankrupt == 0))
    {
        cout << "Congratulations! player 3 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt == 0) && (usr3bankrupt == 0) && (usr4bankrupt > 0) && (usr5bankrupt == 0) && (usr6bankrupt == 0))
    {
        cout << "Congratulations! player 4 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt == 0) && (usr3bankrupt == 0) && (usr4bankrupt == 0) && (usr5bankrupt > 0) && (usr6bankrupt == 0))
    {
        cout << "Congratulations! player 5 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt == 0) && (usr3bankrupt == 0) && (usr4bankrupt == 0) && (usr5bankrupt == 0) && (usr6bankrupt > 0))
    {
        cout << "Congratulations! player 6 wins!" << endl;
    }
    else
    {
        cout << "ERROR!";
    }
}


void determineWinner(int usr1bankrupt, int usr2bankrupt, int usr3bankrupt, int usr4bankrupt, int usr5bankrupt, int usr6bankrupt, int usr7bankrupt)   // 7 players scenario
{
    if ((usr1bankrupt > 0) && (usr2bankrupt == 0) && (usr3bankrupt == 0) && (usr4bankrupt == 0) && (usr5bankrupt == 0) && (usr6bankrupt == 0) && (usr7bankrupt == 0))
    {
        cout << "Congratulations! player 1 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt > 0) && (usr3bankrupt == 0) && (usr4bankrupt == 0) && (usr5bankrupt == 0) && (usr6bankrupt == 0) && (usr7bankrupt == 0))
    {
        cout << "Congratulations! player 2 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt == 0) && (usr3bankrupt > 0) && (usr4bankrupt == 0) && (usr5bankrupt == 0) && (usr6bankrupt == 0) && (usr7bankrupt == 0))
    {
        cout << "Congratulations! player 3 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt == 0) && (usr3bankrupt == 0) && (usr4bankrupt > 0) && (usr5bankrupt == 0) && (usr6bankrupt == 0) && (usr7bankrupt == 0))
    {
        cout << "Congratulations! player 4 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt == 0) && (usr3bankrupt == 0) && (usr4bankrupt == 0) && (usr5bankrupt > 0) && (usr6bankrupt == 0) && (usr7bankrupt == 0))
    {
        cout << "Congratulations! player 5 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt == 0) && (usr3bankrupt == 0) && (usr4bankrupt == 0) && (usr5bankrupt == 0) && (usr6bankrupt > 0) && (usr7bankrupt == 0))
    {
        cout << "Congratulations! player 6 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt == 0) && (usr3bankrupt == 0) && (usr4bankrupt == 0) && (usr5bankrupt == 0) && (usr6bankrupt == 0) && (usr7bankrupt > 0))
    {
        cout << "Congratulations! player 7 wins!" << endl;
    }
    else
    {
        cout << "ERROR!";
    }
}

void determineWinner(int usr1bankrupt, int usr2bankrupt, int usr3bankrupt, int usr4bankrupt, int usr5bankrupt, int usr6bankrupt, int usr7bankrupt, int usr8bankrupt)   // 8 players scenario
{
    if ((usr1bankrupt > 0) && (usr2bankrupt == 0) && (usr3bankrupt == 0) && (usr4bankrupt == 0) && (usr5bankrupt == 0) && (usr6bankrupt == 0) && (usr7bankrupt == 0) && (usr8bankrupt == 0))
    {
        cout << "Congratulations! player 1 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt > 0) && (usr3bankrupt == 0) && (usr4bankrupt == 0) && (usr5bankrupt == 0) && (usr6bankrupt == 0) && (usr7bankrupt == 0) && (usr8bankrupt == 0))
    {
        cout << "Congratulations! player 2 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt == 0) && (usr3bankrupt > 0) && (usr4bankrupt == 0) && (usr5bankrupt == 0) && (usr6bankrupt == 0) && (usr7bankrupt == 0) && (usr8bankrupt == 0))
    {
        cout << "Congratulations! player 3 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt == 0) && (usr3bankrupt == 0) && (usr4bankrupt > 0) && (usr5bankrupt == 0) && (usr6bankrupt == 0) && (usr7bankrupt == 0) && (usr8bankrupt == 0))
    {
        cout << "Congratulations! player 4 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt == 0) && (usr3bankrupt == 0) && (usr4bankrupt == 0) && (usr5bankrupt > 0) && (usr6bankrupt == 0) && (usr7bankrupt == 0) && (usr8bankrupt == 0))
    {
        cout << "Congratulations! player 5 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt == 0) && (usr3bankrupt == 0) && (usr4bankrupt == 0) && (usr5bankrupt == 0) && (usr6bankrupt > 0) && (usr7bankrupt == 0) && (usr8bankrupt == 0))
    {
        cout << "Congratulations! player 6 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt == 0) && (usr3bankrupt == 0) && (usr4bankrupt == 0) && (usr5bankrupt == 0) && (usr6bankrupt == 0) && (usr7bankrupt > 0) && (usr8bankrupt == 0))
    {
        cout << "Congratulations! player 7 wins!" << endl;
    }
    else if ((usr1bankrupt == 0) && (usr2bankrupt == 0) && (usr3bankrupt == 0) && (usr4bankrupt == 0) && (usr5bankrupt == 0) && (usr6bankrupt == 0) && (usr7bankrupt == 0) && (usr8bankrupt > 0))
    {
        cout << "Congratulations! player 8 wins!" << endl;
    }
    else
    {
        cout << "Error!";
    }
}

int main()
{
    int player1 = -1;
    int player2 = 0;
    int player3 = 0;
    int player4 = 0;
    int player5 = 0;
    int player6 = 0;
    int player7 = 0;
    int player8 = 0;

    determineWinner(player1, player2, player3, player4, player5, player6, player7, player8);
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file