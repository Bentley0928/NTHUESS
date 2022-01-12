#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << a+b+c << '\n' << (a+b+c)/3 << '\n' << a*b*c << '\n' << min(a,min(b,c)) << '\n' << max(a,max(b,c)) << endl;
    return 0;
}