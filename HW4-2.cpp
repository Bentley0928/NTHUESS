#include <bits/stdc++.h>
using namespace std;
int main(){
    stringstream ss;

    string s;
    cin >> s;
    int x;
    ss << s;
    ss >> x;

    int sum=0,siz=s.length();
    for(int i=0;i<siz;i++){
        sum+=pow((int)(s[i]-'0'),3);
    }
    if(sum == x) cout << "The "+s+" is an Armstrong number" << endl;
    else cout << "The "+s+" is not an Armstrong number" << endl;

    sum=0;
    for(int i=1;i<x;i++){
        if(x%i==0) sum+=i;
    }
    if(sum==x) cout << "The "+s+" is a Perfect number" << endl;
    else cout << "The "+s+" is not a Perfect number" << endl;
    return 0;
}
