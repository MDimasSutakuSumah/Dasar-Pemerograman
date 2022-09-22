#include <iostream>

using namespace std;

int main()
{
   int p, l, t, hasil;
   cout << "Masukan Panjang : ";
   cin >> p;
   cout << "Masukan Lebar : ";
   cin >> l;
   cout << "Masukan Tingi : ";
   cin >> t;
   hasil = 2*p*l+2*p*t+2*t*l;
   cout << "Luas Balok = " << hasil;


    return 0;
}
