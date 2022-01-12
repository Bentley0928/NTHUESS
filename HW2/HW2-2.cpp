#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float x;
    cin >> x;
    float sum = 1.0;
    for(int i=1;i<11;i++){
        int steps=1;
        for(int j=1;j<=i;j++){
            steps*=j;
        }
        sum+=((pow(x,i))/steps);
    }
    printf("%.2f\n",sum);
    return 0;
}