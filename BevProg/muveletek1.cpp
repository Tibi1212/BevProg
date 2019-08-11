#include <iostream>

using namespace std;

int main()
{
    int a=5, b, c, osszeg;

    float e=9.26, f=7.14;

    cout << "Adj meg egy számot!" << endl;
    cin>>b;
    cout<<"Adj meg egy másik számot!"<<endl;
    cin>>c;
    osszeg=a+b+c;
    cout<<"A harom valtozo osszege:"<<osszeg<<endl;
    cout<<"A harmadik szám (c) haromszorosa: "<<3*c<<endl;
    a=a-c;
    cout<<"a es c kulonbsege"<<a<<endl;
    cout<<"e es f valtozok hanyados"<<e/f<<endl;


    return 0;
}
