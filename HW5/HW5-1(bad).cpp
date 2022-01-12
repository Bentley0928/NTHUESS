#include <bits/stdc++.h>
#define LOST 0
#define WON 1
#define CONTINUE 2
using namespace std;
int dice();
int initialRoll(int);
int reRoll(int, int);
int Win[100], Lose[100];
int n;
int wins=0,loses=0;
int main()
{
    cin >> n;
    srand(n);
    for (int i = 0; i < 100; i++)
    {
        Win[i] = 0;
        Lose[i] = 0;
    }

    
    int roll = 0;
    float sum=0,count_Win=0;
    int firstPoint = dice();
    
    for (int z = 0; z < 1000; z++)
    {
        roll = 0;
        int status = initialRoll(firstPoint);
        while (status == CONTINUE)
        {
            roll++;
            int point = dice();
            status = reRoll(firstPoint, point);
        }
        if (status == WON)
        {
            Win[roll]++;
            count_Win++;
            wins++;
        }
        else{
            Lose[roll]++;
            loses++;
        }
        sum+=(float)roll;
    }
    for (int k = 1; k <= 25; k++)
    {
        printf("%3d games won and %3d games lost on roll %-1d \n", Win[k], Lose[k], k);
    }
    printf("Average game length=%f\n", sum/(float)1000);
    cout << "wins:" << wins << "\nloses:" << loses << endl;
    printf("Probability of Winning=%f", count_Win / 1000.);
    return 0;
}

int dice()
{
    return (rand() % 6) + (rand() % 6) + 2;
}

int initialRoll(int firstPoint)
{
    switch (firstPoint)
    {
    case 7:
    case 11:
        return WON;
    case 2:
    case 3:
    case 12:
        return LOST;
    default:
        return CONTINUE;
    }
}

int reRoll(int firstPoint, int point)
{
    return firstPoint == point ? WON : (7 == point ? LOST : CONTINUE);
}