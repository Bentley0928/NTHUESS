#include <bits/stdc++.h>
using namespace std;
int roman(char c){
    switch(c){
        case 'I':return 1;
        case 'V':return 5;
        case 'X':return 10;
        case 'L':return 50;
        case 'C':return 100;
        case 'D':return 500;
        case 'M':return 1000;
    }
    return 0;
}
int main(){
    int sum=0;
    string s;
    int n;
    cin >> n;
    cin >> s;
    int siz=s.length();
    sum+=roman(s[n-1]);
    for(int i=0;i<siz-1;i++){
        if(roman(s[i])<roman(s[i+1])){
            sum-=roman(s[i]);
        }
        else sum+=roman(s[i]);
    }
    cout << sum << endl;
    return 0;
}