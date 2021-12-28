#include <bits/stdc++.h>
using namespace std;
int main(){
    string s="",tmp;
    int line=0;
    while(getline(cin,tmp) && tmp != "Z"){
        s+=tmp;
        s+=" ";
        line++;
    }
    int n=s.size(),count = 0;
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            count++;
        }
    }
    cout << n << endl << count << endl << line << endl;
    return 0;
}