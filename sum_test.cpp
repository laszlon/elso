#include <iostream>

using namespace std;

int mail()
{
    int a, b, c, osszeg;
    cout<<"Adj meg harom szamot!"<< endl;
    cin>>a;
    cin>>b;
    cin>>c;

    osszeg=a+b+c;
    cout<<"A 3 szam osszege: "<<osszeg<< endl;
    cout<<"A 3 szam eredmenyenek 2x-ese: "<<osszeg*2<< endl;

    return 0;
}
