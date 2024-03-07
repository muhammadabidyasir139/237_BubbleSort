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
            cout << "Array dapat mempunyai maksimal 20 elemen.";
        }
    }

}


// int main() {
//     cout << "masukan angka";
// }; 

