#include <iostream>
#include <bitset>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << dec << n << endl << hex << n  << endl << oct << n << endl << bitset<8>(n) << endl;
    return 0;
}