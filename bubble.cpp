// ketentuan 5 commit
// membuat prosedure input, bubble short, output memanggil prosedure, membuat variable
// nama repo 3nim_BubbleShort

#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
    while (true) {
        cout << "masukan banyaknya elemen oada array = " ;
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << ":";
        cin >> arr[i]; 
    }

}

void bubbleSortArray () {
    int pass = 1;

    do {
        for (int j = 0; j <= n -1 - pass; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass = pass + 1;

    } while (pass <= n);
}

void display() {
    cout << endl;
    cout << "=================" << endl;
    cout << "Elemen Array Yang Telah Tersusun" << endl;
    cout << "=================" << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j] << endl;
    }
    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;

}

int main() {
    input();
    bubbleSortArray();
    display();
    system("pause");

    return 0;
}






