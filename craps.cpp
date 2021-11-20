// Chapter 14 of C++ How to Program
// craps.cpp

#include <iostream>
/* Writ statement to include file stream header */
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cerr;
using std::cin;
using std::ios;
using std::endl;
/* Write appropriate using statement(s) */

void playCraps();
void reviewStatistics();
int rollDice();

int main()
{
   int choice;
   
   // continue game unless user chooses to quit
   do {
   
      // offer game options
      cout << "Choose an option" << endl
           << "1. Play a game of craps" << endl
           << "2. Review cumulative craps statistics" << endl
           << "3. Quit program" << endl;
           
      cin >> choice;
        
      if ( choice == 1 )
         playCraps();
      else if ( choice == 2 )
         reviewStatistics();

   } while ( choice != 3 );
   
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
   enum Status { CONTINUE, WON, LOST };
   int sum; 
   int myPoint;
   int rollCount = 0;
   Status gameStatus;
   
   /* Write statement to create an output file stream */
   
   // seed random number generator and roll dice
   srand( time( 0 ) );
   sum = rollDice();
   rollCount++;
   
   // check game conditions
   switch( sum ) {
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
         cout << "Point is " << myPoint << endl;
         break;

   } // end switch
   
   // keep rolling until player matches point or loses
   while ( gameStatus == CONTINUE ) { 
      sum = rollDice();
      rollCount++;
      
      if ( sum == myPoint )
         gameStatus = WON;

      else
         if ( sum == 7 )
            gameStatus = LOST;

   } // end while
   
   //  display status message and write results to file
   if ( gameStatus == WON ) {
      cout << "Player wins\n" << endl;
      /* Write player WIN status and the total number of die 
         rolls to a file */                  

   } // end if
   else {
      cout << "Player loses\n" << endl;
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
   cout << "Player rolled " << die1 << " + " << die2
        << " = " << workSum << endl;
        
   return workSum;

} // end function rollDice


/**************************************************************************
 * (C) Copyright 1992-2003 by Deitel & Associates, Inc. and Prentice      *
 * Hall. All Rights Reserved.                                             *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
