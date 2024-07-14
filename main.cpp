
#include <iostream>

using namespace std;
int n;
int an;
char j;
int a;
int i;
int main()
{


    //Unutrasnji uglovi

        cout << "Upisi zbir unutrasnjih uglova S(n)=(n-2)*180 :";
        cin >> n;
        an = (n-2)*180;
        cout << "S(";
        cout << n;
        cout << ")=(";
        cout << n;
        cout << "-2)*180=";
        cout << an << endl;
cout << n << "*" << "(" << n << "-" << "1" << ")" <<"/2=" << (n*(n-1)/2) << endl;
cout << "n=(n-2)*180" << endl;
cout << "n-2=n/180" << endl;
i = n/180;
cout << n << "-2=" << n << "/180=";
cout << i << endl;
cout << "n-2=n+2" << endl;
a = i+2;
cout << "n-2=" << a << "+2" << endl;
cout << "n=" <<a << endl;


    //Unutrasnji uglovi End

//Diagonala
 cout << "Da li bih volio da nastavis ako hoces unesi y ako ne unesi n" << endl;
    cin >> j;
    if (j == 'y' && n>0)
    {
    cout << "Upisi broj diagonala D(n)=n*(n-3)/2 :";
    cin >> n;

        an = n*(n-3)/2;
        cout << "D(";
        cout << n;
        cout << ")=";
        cout << n;
        cout << "*";
        cout <<"(";
        cout << n;
        cout << "-3)/2=";
         cout << an << endl;
         cout << "n-3=n*2" <<endl;
         i=n*2;
         cout << "n-3=" << n << "*2=";
        cout <<i << endl;
        cout << "n-3=" << i <<endl;
        a=3+i;
        cout << "n=3+" << i << endl;
        cout << "n=" <<a <<endl;
    }
    if (j == 'n'){
        cout << "bay" << endl;
        return 0;
    }
    //Diagonala End

    //Duzina stranica

    //Broj tacaka
    cout << "Da li voljeli nastavit ako hocete unesi te y ako ne unesi te n" << endl;
   cin >> j;
   if (j == 'y' && n>0){
   cout << "Upisi duzinu stranica a+a1=180 :";
        cin >> n;
   cout << n << "+a1=180" <<endl;
   an = 180-n;
   cout << "a1=180-" << n << endl;
   cout << "a1=" << an << endl;
   cout << "n=360/a1=" << endl;
   cout << "n=360/" << an << endl;
   i = 360/an;
   cout << "n=" << i << endl;

   }
   cout << "Da li voljeli nastavit ako hocete unesi te y ako ne unesi te n" << endl;
   cin >> j;
   if (j == 'y' && n>0){
        cout << "Upisi broj tacaka P(n)=(n-1)/2:";
        cin >> n;

        an = n*(n-1)/2;
        cout << "P(";
        cout << n;
        cout << ")=(";
        cout << n;
        cout << "-1)/2=";
        cout << an;

   }
    if (j == 'n'){
        cout << "bay" << endl;
        return 0;
    }
   //Broj tacaka End
    return 0;
}
//Code finished

