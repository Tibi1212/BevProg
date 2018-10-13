#include <iostream>

using namespace std;

int main()
{
    int n,sum=0,c, value;
    cout << "Ird be hány számot akarsz összeadni\n" << endl;
    cin>>n;
    for(c=1; c <=n; c++)
    {
        cin>>value;
        sum=sum +value;

    }
    cout<<"Az összegük  a beirt számoknak="<<sum<<"\n";

    return 0;
}
