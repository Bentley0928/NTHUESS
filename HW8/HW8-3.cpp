#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(cin >> s){
        string ss="";
        for(auto it=s.end()-4;it!=s.end();it++){
            ss+=*it;
        }
        if(ss=="tion"){
            cout << s << endl;
        }
    }
    return 0;
}