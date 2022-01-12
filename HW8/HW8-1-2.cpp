#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <string> array;
    string s,ss,stemp;
    getline(cin,s);
    cin >> ss;
    int n=s.size();
    string tmp="";
    for(int i=0;i<n;i++){
        if(s[i]!=' '){
            tmp+=s[i];
        }
        else{
            array.push_back(tmp);
            tmp="";
        }
    }
    array.push_back(tmp);
    tmp="";
    n=array.size();
    int count=0;
    for(auto it=array.begin();it!=array.end();it++){
        if(*it==ss){
            array.erase(it);
            count++;
        }
    }
    for(auto i:array){
        cout << i << " ";
    }
    cout << endl << n << endl << n-count << endl;
    return 0;
}