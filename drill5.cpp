#include <iostream>

using namespace std;

int main()
{
    //1 Hiba: nagy C bet�
    //Cout << "Success!!\n";
    cout << "Success!\n";
    //2 Hiba: " jel lemaradt a v�g�r�l
    //cout << "Success!\n;
    cout << "Success!\n";
    //3 Hiba: " jel lemaradt a ! el�l �s nincs a v�g�n ;
    //cout << "Success" << !\n"
    cout << "Success" << "!\n";
    //4 Hiba: lemaradt a " jel mindk�t oldalr�l
    //cout << success << '\n';
    cout << "success" << '\n';
    //5 Hiba: v[5] int t�pust v�r �s mi stringet adunk neki
    //string res = 7;
    int res = 7;
    vector <int> v(10);
    v[5] = res;
    cout << "Success!\n";
    //6 Hiba: vektor elem�t a[x]-el �rj�k el, nem a(x)-el
    vector <int> a(10);
    //a(5)=7;
    a[5]=7;
    //if(a(5)!=7) cout << "Success!\n";
    if(a[5]!=7) cout << "Success!\n";
    //7 Hiba: cond nem l�tezik
    bool cond = true;
    if(cond) cout << "Success!\n"; else cout << "Fail!\n";
    //8 Hiba: a c hamis
    bool c = true;
    //bool c = false;
    if(c) cout << "Success!\n"; else cout << "Fail!\n";
    //9 Hiba: bool helyett boo van �rva, ape el�r�bb van az abcben mint fool, ez�rt az if nem igaz
    //string s = "ape";
    string s = "xape";
    //boo c = "fool" < s;
    bool d = "fool" < s;
    if(d) cout << "Success!\n";
    //10 Hiba: ape nem fool
    //string b = "ape";
    string b = "fool";
    if(b=="fool") cout << "Success!\n";
    //11 Hiba: ape nem fool emiatt false lesz az if, cout ut�n kett� < jel sz�ks�ges
    //string e = "ape";
    string e = "fool";
    //if(e=="fool") cout < "Success!\n";
    if(e=="fool") cout << "Success!\n";
    //12 Hiba:
    string f = "ape";
    //if(f + "fool") cout << "Success!\n";
    //13 Hiba: for ciklusban 0 helyett i kell legyen
    vector <char> x(5);
    //for (int i=0;0<x.size();i++)
    for (int i=0;i<x.size();i++)
    {
        cout << "13 Success!\n";
    }
    //14 Hiba: for ciklus ut�n ; jel nem kell
    vector<char> y(5);
    //for(int i=0;i<=y.size();i++);
    for(int i=0;i<=y.size();i++)
    {
        cout << "14 Success!\n";
    }
    //15 Hiba: 6 csak Succes-t �r ki, a for ciklusnak t�bbsz�r kell lefutnia
    string ab="15 Success!\n";
    //for(int i=0;i<6;i++)
    for(int i=0;i<ab.size();i++)
    {
        cout << ab[i];
    }
    //16 Hiba: then nem kell az if ut�n
    if(true) /*then*/ cout << "16 Success!\n"; else cout << "Fail!\n";
    //17 Hiba: ha sz�mot akarunk vizsg�lni azt intben kell �s nem charban
    int xy=2000;
    //char cd=xy;
    int cd=xy;
    if(cd==2000) cout << "17 Success!\n";
    //18 Nincs benne hiba
    string sa = "Success!\n";
    for (int i=0;i<10;i++)
    {
        cout << sa[i];
    }
    //19 Hiba: vector ut�n kimaradt a vektor adatt�pusa <> jelek k�z�tt
    //vector ve(5);
    vector <int> ve(5);
    for(int i=0;i<=ve.size();i++)
    {
        cout << "19 Success!\n";
    }
    //20 Hiba: v�gtelen ciklus, az ia sosem n�, helyette a ja n�, �gy az ia sosem lesz egyenl� vagy nagyobb 10-el
    int ia=0;
    int ja=9;
    while(ia<10)
    {
        //ja++;
        ia++;
    }
    if(ja<ia) cout << "20 Success!\n";
    //21 Hiba: null�val oszt�s v�gtelent ad vissza
    //int xb=2;
    /*double xb=1;
    double db=5/(xb-2);
    if (db==2*xb+0.5) cout << "Success!\n";*/
    //22 Hiba: string ut�n nem lehet <char>-t tenni
    string sc="Success!\n";
    for(int i=0;i<=10;i++)
    {
        cout << sc[i];
    }
    //23 Hiba: jd nincs inicializ�lva, sem deklar�lva, a while-b�l v�gtelen ciklus lesz, mert az id mindig 0 marad �s sosem lesz = vagy nagyobb 10n�l
    int jd=0;
    int id=0;
    while(id<10)
    {
        //jd++;
        id++;
    }
    if(jd<id) cout << "23 Success!\n";
    //24 Nincs benne hiba
    int xe=4;
    double de=5/(xe-2);
    if(de=2*xe+0.5) cout << "24 Success!\n";
    //25 Hiba: a cin bek�r a felhaszn�l�tol, a cout pedig ami ki�r
    //cin << "25 Success!\n";
    cout << "25 Success!\n";
}
