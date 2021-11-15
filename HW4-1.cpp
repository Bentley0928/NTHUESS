#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n=(int)(s[0]-'0');
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout << s[1] << ' ';
        }
        cout << endl;
    }
    return 0;
}