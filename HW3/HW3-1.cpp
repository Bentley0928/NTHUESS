#include <iostream>
using namespace std;
int main(){
    int x;
    scanf("%d", &x);
    int n = x*2-1;
    int count = 1;
    for(int i=0;i<x;i++){
        for(int j=1;j<=x;j++){
            if(j<=count) cout << j << ' ';
            else if(j>count) printf("%d ", count);
        }
        for(int j=x-1;j>=1;j--){
            if(j<=count) cout << j << ' ';
            else if(j>count) printf("%d ", count);
        }
        count++;
        cout << endl;
    }
    count-=2;
    for(int i=0;i<x-1;i++){
        //cerr << 'c'<< count<<endl;
        for(int j=1;j<=x;j++){
            if(j<=count) cout << j << ' ';
            else if(j>count) printf("%d ", count);
        }
        for(int j=x-1;j>=1;j--){
            if(j<=count) cout << j << ' ';
            else if(j>count) printf("%d ", count);
        }
        count--;
        cout << endl;
    }
    return 0;
}