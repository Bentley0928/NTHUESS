#include <bits/stdc++.h>
using namespace std;
int main(){
    FILE *cfPtr;
    if((cfPtr = fopen("oldmast.dat", "w"))==NULL){
        puts("File could not be opened");
    }
    else{
        cout << "Sample data for file oldmast.dat\nEnter the account, name, and balance.(Enter EOF to end input.)";
        unsigned int account;
        char firstname[30],lastname[30];
        double balance;
        scanf("%d%29s%29s%lf", &account, firstname,lastname, &balance);
        while(!feof(stdin)){
            fprintf(cfPtr, "%d %s %s %.2f\n", account, firstname, lastname, balance);
            cout << "Enter the accoung, name, and balance.(Enter EOF to end input.)";
            scanf("%d%29s%29s%lf", &account, firstname, lastname, &balance);
        }
        fclose(cfPtr);
    }
    if((cfPtr = fopen("trans.dat", "w"))==NULL){
        puts("File could not be opened");
    }
    else{
        cout << "Sample data for file trans.dat\nEnter the account & transaction amount.(Enter EOF to end input.)";
        unsigned int account;
        double amount;
        scanf("%d%lf", &account, &amount);
        while(!feof(stdin)){
            fprintf(cfPtr, "%d %.2f\n", account, amount);
            cout << "Enter the account & transaction amount.(Enter EOF to end input.)";
            scanf("%d%lf", &account, &amount);
        }
        fclose(cfPtr);
    }
    return 0;
}