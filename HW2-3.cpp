#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
    int s;
    cin >> s;
    int sum = 0;
    for(int i=0;i<5;i++){
        int now=s%10;
        sum+=now;
        s/=10;
    }
    cout << sum << endl;
    return 0;
}