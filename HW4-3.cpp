#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum=2;
    bool flag=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag) cout << "This input is a prime number\n";
    else cout << "This input is not a prime number\n";
    for(int i=4;i<=n;i++){
        flag = 1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag) sum++;
    }
    cout << "There are " << sum << " of prime numbers below " << n << endl;
    return 0;
}