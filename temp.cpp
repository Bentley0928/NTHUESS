#include <bits/stdc++.h>
using namespace std;
int columscount[13];
void shuffle( int wDeck[][ 13 ] );
void deal( const int wDeck[][ 13 ], const char *wFace[], 
           const char *wSuit[] );
int determinepair();
int main()
{
   const char *suit[ 4 ] = { "Hearts", "Diamonds", "Clubs", "Spades" };
   const char *face[ 13 ] = 
      { "Ace", "Deuce", "Three", "Four", 
        "Five", "Six", "Seven", "Eight",
        "Nine", "Ten", "Jack", "Queen", "King" };
   int deck[ 4 ][ 13 ] = { 0 };
   srand( time( 0 ) );
   shuffle( deck );
   deal( deck, face, suit );
   return 0;
}
void shuffle( int wDeck[][ 13 ] )
{
   int row;
   int column;
   int card;
   for ( card = 1; card <= 52; card++ ) {
      do {
         row = rand() % 4;
         column = rand() % 13;
      } while( wDeck[ row ][ column ] != 0 );
      wDeck[ row ][ column ] = card;
   }
}
void deal( const int wDeck[][ 13 ], const char *wFace[],
           const char *wSuit[] )
{
   int card;
   int row;
   int column;
   int count=0,pickCard[5];
   bool beenused[52];
   for (int i = 0; i < 52; i++)
   {
       beenused[i]=0;
   }
   while(count<5){
        int tmp=rand()%52;
        if(beenused[tmp]) continue;
        else{
            pickCard[count]=tmp;
            count++;
        }
   }
   int cardplace[2][5];//0-row,1-column
    cardplace[0][0]=1;
    cardplace[0][1]=4;
    cardplace[0][2]=2;
    cardplace[0][3]=3;
    cardplace[1][0]=3;
    cardplace[1][1]=3;
    cardplace[1][2]=3;
    cardplace[1][3]=3;
    cardplace[1][4]=5;
    printf( "%5s of %-8s%c", wFace[ 4 ], wSuit[ 3 ],'\n');
    printf( "%5s of %-8s%c", wFace[ 4 ], wSuit[ 1 ],'\n');
    printf( "%5s of %-8s%c", wFace[ 4 ], wSuit[ 3 ],'\n');
    printf( "%5s of %-8s%c", wFace[ 4 ], wSuit[ 0 ],'\n');
    printf( "%5s of %-8s%c", wFace[ 10 ], wSuit[ 0 ],'\n');
    for(int i=0;i<13;i++){
        columscount[i]=0;
    }
    for(int i=0;i<5;i++){
        columscount[cardplace[1][i]]++;
    }
    cout << "The types of 5-card poker hands are : ";
    switch(determinepair()){
        case 1:
            cout << "nothing:(\n";
            break;
        case 2:
            cout << "a pair\n";
            break;
        case 3:
            cout << "three of a kind\n";
            break;
        case 4:
            cout << "four of a kind\n";
            break;
        case 5:
            cout << "a flush\n";
            break;
        case 6:
            cout << "a straight\n";
            break;
        case 7:
            cout << "two pairs\n";
            break;
        default:
            break;
    }
} /* end function deal */
int determinepair(){
    int maxn=0;
    for(int i=0;i<13;i++){
        maxn=max(maxn,columscount[i]);
    }
    int count=0;
    bool checkstraight=1,temp=0;
    if(maxn==1){
        for(int i=0;i<13;i++){
            if(!temp){
                if(columscount[i]!=0){
                    temp=1;
                    count++;
                }
            }
            else{
                if(columscount[i]==0){
                    break;
                }
                else{
                    count++;
                }
            }
        }
        if(count==5) return 6;
    }
    else if(maxn==2){
        int countpair=0;
        for(int i=0;i<13;i++){
            if(columscount[i]==2){
                countpair++;
            }
        }
        if(countpair==2) return 7;
    }
    return maxn;
}