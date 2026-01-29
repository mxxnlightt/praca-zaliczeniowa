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
    }
}