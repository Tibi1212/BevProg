#include <iostream>

using namespace std;

int main()
{
    int szam;
    cout << "Adj meg egy szamot!" << endl;
    cin>>szam;
    szam=szam++;
    cout<<"A bekert szam +1 : "<<szam<<endl;
    return 0;
}
