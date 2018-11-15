#include "std_lib_facilities.h"	


using namespace std;

int main()
{
    char op;
    float num1, num2;

    cout << "Válszd ki a műveletet + vagy - vagy * vagy /: ";
    cin >> op;

    cout << "Add meg az első számot: ";
    cin >> num1;
    cout << "Add meg a második számot: ";

    
    cin>> num2;

    switch(op)
    {
        case '+':
            cout <<"Az eredmény:\t"<< num1+num2<<endl;
            break;

        case '-':
            cout <<"Az eredmény:\t"<< num1-num2<<endl;
            break;

        case '*':
            cout <<"Az eredmény:\t"<< num1*num2<<endl;
            break;

        case '/':
            cout <<"Az eredmény:\t"<< num1/num2<<endl;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Hiba! A művelet nem létezik!";
            break;
    }

    return 0;
}
