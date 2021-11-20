#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,arr[1000],count = 1;
    cin >> n;
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                flag = 1;
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(flag){
            cout << "Cycle = " << count << " : ";
            count++;
            for(int k=0;k<n-i;k++){
                cout << arr[k] << ' ';
            }
            cout << endl;
        }
        flag = 0;
    }
    cout << "Final : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}