#include <iostream>

using namespace std;

int main()
{
    int n,sum=0,c, value;
    cout << "Ird be h�ny sz�mot akarsz �sszeadni\n" << endl;
    cin>>n;
    for(c=1; c <=n; c++)
    {
        cin>>value;
        sum=sum +value;

    }
    cout<<"Az �sszeg�k  a beirt sz�moknak="<<sum<<"\n";

    return 0;
}
