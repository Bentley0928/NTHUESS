#include <bits/stdc++.h>

using namespace std;
/* Write appropriate using statement(s) */
int Win[100], Lose[100];
int wins = 0, loses = 0;
float sums = 0;
void playCraps();
void reviewStatistics();
int rollDice();
int n;
int main()
{
    cin >> n;
    srand(n);
    for (int i = 0; i < 100; i++)
    {
        Win[i] = 0;
        Lose[i] = 0;
    }
    // continue game unless user chooses to quit
    for (int i = 0; i < 1000; i++)
    {
        playCraps();
    }
    for (int k = 1; k <= 25; k++)
    {
        printf("%3d games won and %3d games lost on roll %-1d \n", Win[k], Lose[k], k);
    }
    printf("Average game length=%f\n", sums / (float)1000);
    cout << "wins:" << wins << "\nloses:" << loses << endl;
    printf("Probability of winning=%f", (float)wins / 1000.);
    return 0;

} // end main

// review cumulative craps statistics
void reviewStatistics()
{
    /* Write a body for reviewStatistics which displays
      the total number of wins, losses and die rolls recorded 
      in craps.dat */

} // end function reviewStatistics

// play game
void playCraps()
{
    enum Status
    {
        CONTINUE,
        WON,
        LOST
    };
    int sum;
    int myPoint;
    int rollCount = 0;
    Status gameStatus;

    /* Write statement to create an output file stream */

    // seed random number generator and roll dice
    sum = rollDice();
    rollCount++;

    // check game conditions
    switch (sum)
    {
    case 7:
    case 11:
        gameStatus = WON;
        break;
    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        break;
    default:
        gameStatus = CONTINUE;
        myPoint = sum;
        //cout << "Point is " << myPoint << endl;
        break;

    } // end switch

    // keep rolling until player matches point or loses
    while (gameStatus == CONTINUE)
    {
        sum = rollDice();
        rollCount++;
        if (sum == myPoint)
        {
            gameStatus = WON;
        }
        else if (sum == 7)
        {
            gameStatus = LOST;
        }

    } // end while

    //  display status message and write results to file
    if (gameStatus == WON)
    {
        Win[rollCount]++;
        sums += (float)rollCount;
        wins++;
        /* Write player WIN status and the total number of die 
         rolls to a file */

    } // end if
    else
    {
        Lose[rollCount]++;
        sums += (float)rollCount;
        loses++;
        /* Write player LOSE status and the total number of die 
         rolls to a file */

    } // end else

} // end function playCraps

// dice rolling function
int rollDice()
{
    int die1;
    int die2;
    int workSum;

    // roll two dice
    die1 = 1 + rand() % 6;
    die2 = 1 + rand() % 6;

    // total and print results
    workSum = die1 + die2;
    //cout << "Player rolled " << die1 << " + " << die2
    //<< " = " << workSum << endl;

    return workSum;

} // end function rollDice