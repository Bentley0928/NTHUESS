#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a;
    vector<int> arr1;
    for (int i = 0; i < a; i++)
    {
        int tmp;
        cin >> tmp;
        arr1.push_back(tmp);
    }
    cin >> b;
    vector<int> arr2;
    for (int i = 0; i < b; i++)
    {
        int tmp;
        cin >> tmp;
        arr2.push_back(tmp);
    }
    bool flag = 0;
    vector<int> uni;
    for(int i=0;i<a;i++){
        for (int j = 0; j < b; j++)
        {
            if(arr1[i]==arr2[j]) flag = 1;
        }
        if(flag) uni.push_back(arr1[i]);
        flag=0;
    }
    flag=1;
    for (int i = 0; i < b; i++)
    {
        int n=arr1.size();
        for (int j = 0; j < n; j++)
        {
            if(arr2[i]==arr1[j]) flag = 0;
        }
        if(flag) arr1.push_back(arr2[i]);
        flag=1;
    }
    cout << "intersection : ";
    for(auto i:uni){
        cout << i << " ";
    }
    cout << "\nunion : ";
    for(auto i:arr1){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}