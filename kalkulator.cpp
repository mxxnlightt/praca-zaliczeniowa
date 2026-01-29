#include <iostream>
using namespace std;    

int main()
{
    double a,b;
    char op;
    cout<<"Podaj pierwsza liczbe: ";    
    cin>>a;
    cout<<"Podaj operator (+, -, *, /): ";
    cin>>op;
    cout<<"Podaj druga liczbe: ";
    cin>>b;
    switch(op)
    {
        case '+':
            cout<<"Wynik: "<<a+b<<endl;
            break;
        case '-':
            cout<<"Wynik: "<<a-b<<endl;
            break;
        case '*':
            cout<<"Wynik: "<<a*b<<endl; 
            break;
        case '/':
            if(b!=0)
                cout<<"Wynik: "<<a/b<<endl;
            else
                cout<<"Blad: Dzielenie przez zero!"<<endl;
            break;
        default:
            cout<<"Blad: Nieznany operator!"<<endl;
    }
}