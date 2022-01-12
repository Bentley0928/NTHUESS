#include <iostream>
using namespace std;
int main(){
    int a[5];
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    for(int i=0;i<5;i++){
        bool check = 1;
        if(a[i]==1) cout << "*\n";
        else if(a[i]==2) cout << "prime\n";
        else{
            for(int j=2;j<a[i];j++){
                if(a[i]%j==0) check=0;
            }
        }
        if(a[i]>2){
            if(check) cout << "prime\n";
            else{
                for(int j=0;j<a[i];j++){
                    cout << '*';
                }
                cout << endl;
            }
        }
    }
    return 0;
}