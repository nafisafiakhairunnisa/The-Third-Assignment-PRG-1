/*
Nama: Nafis Afia Khairunnisa
NIM: 26/578105/PA/24215

==================================================================
                     PENJELASAN:
Fungsi `f(n)` dihitung secara rekursif dengan aturan berikut:
1. Base Case (Kasus Dasar):
   - Jika n <= 1, kembalikan 1.

2. Recursive Step (Langkah Rekursif):
   - Jika n genap (n % 2 == 0):
     Kembalikan (n / 2) * f(n - 1)
   - Jika n ganjil (n % 2 != 0):
     Kembalikan n * f(n - 1)
     
Contoh Tracing untuk f(5):
- f(5) = 5 * f(4)
- f(4) = (4 / 2) * f(3) = 2 * f(3)
- f(3) = 3 * f(2)
- f(2) = (2 / 2) * f(1) = 1 * f(1)
- f(1) = 1
Hasil akhir f(5) = 5 * 2 * 3 * 1 * 1 = 30.
===================================================================
*/


#include <iostream>
using namespace std;

int f(int n) {
    if (n <= 1) {
        return 1;
    }
    
    if (n % 2 == 0) {
        return (n / 2) * f(n - 1);
    } else {
        return n * f(n - 1);
    }
}
int main() {
    int input1 = 5;
    int input2 = 7;

    cout << "Hasil f(" << input1 << ") = " << f(input1) << endl; 
    cout << "Hasil f(" << input2 << ") = " << f(input2) << endl; 

    return 0;
}
