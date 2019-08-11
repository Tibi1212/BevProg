#include <iostream>

using namespace std;

int main()
{

 int x;
 int y;

cout << "Adj meg egy szamot: ";
cin >> x;
cout << "Adj meg egy masik szamot ";
cin >> y;

x = x^y;
y = y^x;
x = x^y;

cout << "A számok felcsereles utan: "<<x<<" es "<<y<< '\n';

return 0;
}
