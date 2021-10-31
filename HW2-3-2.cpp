#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    int sum = 0;
    for(int i=0;i<5;i++){
        int now=(int)s[i]-'0';
        sum+=now;
    }
    cout << sum << endl;
    return 0;
}