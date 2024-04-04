#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input (){
    while (true)
    {
        cout << "Masukkan Panjang Elemen Array : ";
        cin >> n;

        if (n <= 20)
            break;
        else 
        cout << "\nMaksimum Array Hanya 20 Elemen\n";
    }

    cout << "\n------------\n";
    cout << "Enter Array Element\n";
    cout << "-------------\n";

    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}

void linear () {
    char ch;
    int ctr;
    int item;

    do
    {
        cout << "\nEnter The Element You Want To Search : ";
        cin >> item;

        ctr = 0;
        i = 0;
    }

}