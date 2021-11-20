#include <bits/stdc++.h>
using namespace std;
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

}
void reviewStatistics()
{

}
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
    sum = rollDice();
    rollCount++;
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
        break;

    }

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

    } 
    if (gameStatus == WON)
    {
        Win[rollCount]++;
        sums += (float)rollCount;
        wins++;

    }
    else
    {
        Lose[rollCount]++;
        sums += (float)rollCount;
        loses++;
      
    }

} // end function playCraps

// dice rolling function
int rollDice()
{
    int die1;
    int die2;
    int workSum;
    die1 = 1 + rand() % 6;
    die2 = 1 + rand() % 6;
    workSum = die1 + die2;

    return workSum;

} // end function rollDice