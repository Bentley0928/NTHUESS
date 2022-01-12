#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int x=0;
    double ans=0;
    cin >> x;
    int count = 1;
    bool check=1;
    for(int i=0;i<x;i++){
        if(check){
            ans+=(double)4/count;
            check=0;
        }
        else{
            ans-=(double)4/count;
            check=1;
        }
        count+=2;
    }
    
    cout << fixed << setprecision(6) << ans << endl;
    return 0;
}