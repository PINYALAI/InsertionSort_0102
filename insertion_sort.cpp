#include <iostream>
using namespace std;

int arr[20];    //membuat array dengan data 20
int n;         //membuat variabel input n

void input (){ //procedure input
    while (true){
        cout << "masukanjumlah data pada array : ";
        cin >> n;

        if (n <= 20){
            break;
        }
        else{
            cout << "\narray tidak boleh lebih dari 20\n";
        }
    }
    cout << endl;
    cout << "===================================";
    cout << "=======masukan element array=======";
    cout << "===================================" << endl;

    for (int i = 0; i < n; i++){
        cout << "data ke-" << (i+1) << ": ";
        cin >> arr[i];
    }
}

