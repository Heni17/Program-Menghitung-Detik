#include <iostream>
using namespace std;
int main ()
{
   double jam, detik, menit, total;
    cout<< " Masukkan Jam : ";
    cin>> jam;
    cout<<endl;

    cout<< " Masukkan Menit : ";
    cin>> menit;
    cout<<endl;

    cout<< " Masukkan Detik : ";
    cin>> detik;
    cout<<endl;

    total = jam * 3600 + menit * 60 + detik;
    cout<< " Maka Total detiknya adalah : " << total;
    cout<<endl;

return 0;

}
