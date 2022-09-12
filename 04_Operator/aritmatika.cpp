#include <iostream>
#include <string>

using namespace std;

// oke puh seperti biasa aritmatika basic di coding sama semua

// (+) = buat tambah
// (-) = buat kurang
// (*) = buat kali
// (/) = buat bagi
// (%) = buat modulus

// (++) = buat Increment/nambahin 1
// (--) = buat Decrement/ngurangi 1

// berikut contohnya

int main()
{
    int x = 10;
    int y = 5;

    cout << "---CONTOH TAMBAH (+)---"<<endl;
    int hasilint = x + y;
    cout << x <<" + "<< y << " = " << hasilint << endl;

    cout << "---CONTOH KURANG (-)---"<<endl;
    int hasilkur = x - y;
    cout << x <<" - "<< y << " = " << hasilkur << endl;

    cout << "---CONTOH KALI (X)---"<<endl;
    int hasilkal = x * y;
    cout << x <<" x "<< y << " = " << hasilkal << endl;

    cout << "---CONTOH BAGI (:)---"<<endl;
    int hasilbag = x / y;
    cout << x <<" : "<< y << " = " << hasilbag << endl;

    cout << "---CONTOH MODULUS (%)---"<<endl;
    int hasilmod = x % y;
    cout << x <<" % "<< y << " = " << hasilmod << endl;

    
    
    // yang ini emg unik cok anjing lah, lain kali buatin variabel baru masing masing ama yg diatas v;

    cout << "---CONTOH INCREMENT (++)---"<<endl;
    int hasilincre = ++x;
    cout << "10" <<" ++ "<< "1" << " = " << hasilincre << endl;

    cout << "---CONTOH DECREMENT (--)---"<<endl;
    int hasildecre = --x;
    cout << "11" <<" -- "<< "1" << " = " << hasildecre << endl;
    return 0;

}
