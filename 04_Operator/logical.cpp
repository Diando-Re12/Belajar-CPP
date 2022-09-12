#include <iostream>
#include <string>

using namespace std;

// basicnya sederhana ini cuma emg perlu teliti aja

// && = AND, jika kedua statement TRUE maka hasilnya TRUE
// || = OR, jika salah satu statement TRUE maka hasilnya akan tetap TRUE
// ! = NOT, jika kedua statement TRUE maka hasilnya FALSE begitupula sebaliknya

// seperti biasa 1 artinya TRUE, dan 0 artinya FALSE

int main()
{
    int x = 10;
    int y = 15;

    int hasiland = (x<y) && (y<x);
    cout<<"(x < y) AND (y < x) = "<<hasiland<<endl;

    int hasilor = (x<y) || (y<x);
    cout<<"(x < y) OR (y < x) = "<<hasilor<<endl;

    int hasilnotand = (!(x<y) && (y<x)); //tanda not (!) di taruh di awal
    cout<<"(x < y) NOT AND (y < x) = "<<hasilnotand<<endl<<endl; 
    // "loh kok yang NOT AND hasilnya sama kek yang AND?"
    // ya karena dari awal AND udah emang ada yang salah
    // coba pake contoh AND yang bener sekarang

    int hasiland2 = (x<y) && (y>x);
    cout<<"(x < y) AND (y > x) = "<<hasiland2<<endl;

    int hasilnotand2 = (!(x<y) && (y>x));
    cout<<"(x < y) NOT AND (y > x) = "<<hasilnotand2<<endl;
    
    // nah kan udah beda ;D
    return 0;
}