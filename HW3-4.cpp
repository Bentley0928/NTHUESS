#include <iostream>
using namespace std;
int main(){
    char grade;
    int a=0,b=0,c=0,d=0,f=0;
    int count=0;
    while(( grade=getchar() ) != 'N'){
        switch(grade){
            case 'A':
            case 'a':
                count+=4;
                a+=1;
                break;
            case 'B':
            case 'b':
                count+=3;
                b+=1;
                break;
            case 'c':
            case 'C':
                count+=2;
                c+=1;
                break;
            case 'd':
            case 'D':
                count+=1;
                d+=1;
                break;
            case 'F':
            case 'f':
                f+=1;
                break;
        }
    }
    cout << "A:" << a << "\nB:" << b << "\nC:" << c << "\nD:" << d << "\nF:" << f << "\nAverage:";
    double ave=(double)count/(a+b+c+d+f);
    if(ave>3.5)cout << "A\n";
    else if(ave>2.5)cout << "B\n";
    else if(ave>1.5)cout << "C\n";
    else if(ave>0.5)cout << "D\n";
    else cout << "F\n";
    return 0;
}