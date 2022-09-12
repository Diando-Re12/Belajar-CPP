#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a=10;
    int b=8;
    int c;
    /*if (a>b){ //apabila a>b 
        cout<<"Iya emang benar";
    }*/
    cout<<"Masukkan Nilai c=";
    cin>>c;
    if (c%2==0){
        cout<<"Maka bilangan adalah genap";// 90:2==0 
    }
    if (c%2!=0){
        cout<<"Maka bilangan adalah ganjil";// 7:2==1
    }

    return 0;
}
