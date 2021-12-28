#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <string> array;
    string s,stemp;
    while(cin >> stemp){
        array.push_back(stemp);
    }
    s=array.back();
    array.pop_back();
    int n=array.size(),count=0;
    for(auto it=array.begin();it!=array.end();it++){
        if(*it==s){
            array.erase(it);
            count++;
        }
    }
    for(auto i:array){
        cout << i << " ";
    }
    cout << '\n' << n << '\n' << n-count << "\n";
    return 0;
}