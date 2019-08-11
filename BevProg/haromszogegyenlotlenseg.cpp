#include <iostream>

using namespace std;

int main()
{
    int a,b, c;

    cout << "Add meg a haromszog 1. oldalat" << endl;
    cin>>a;

    cout << "Add meg a haromszog 2. oldalat" << endl;
    cin>>b;

    cout << "Add meg a haromszog 3. oldalat" << endl;
    cin>>c;
    if(a+b >c && a+c>b && c+b>a){
        cout<<"A haromszog szerkesztheto"<<endl;

}else{
    cout<<"A háromszog nem szerkesztheto!"<<endl;
}


    return 0;
}
