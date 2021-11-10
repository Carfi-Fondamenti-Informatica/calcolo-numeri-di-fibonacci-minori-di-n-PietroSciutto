#include <iostream>
using namespace std;

int main() {
   int i=0, n=0, primo=1, secondo=1, terzo=0;
    cout<<"Inserisci numero"<<endl;
    cin>>n;

    cout << primo << endl;
    cout << secondo << endl;

    for(i=0;i<=n-1;i++) {
        terzo = primo + secondo;
        primo = secondo;
        secondo = terzo;
        cout << terzo << endl;
    }
   return 0;
}
