#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x[3]={1,2,3};//array itu selalu di mulai dari angka 0
    int c[10];
    
    /*
    for (int i=0;i<3;i++){
        cout<<"angka ke-"<<x[i]<<endl;
    }
    */

    //array input
    for(int j=0;j<9;j++){
        cout<<"Masukkan nilai= ";//untuk menunjjukan bahwa ini adalah inputan
        cin>>c[j];//ini adalah array untuk menampung data nilai yang tipe integer
        cout<<"\n";
    }

    //array output
    for(int f=0;f<9;f++){
        cout<<"nilai="<<c[f]<<" \n";//hasil dari inputan
    }
    
    return 0;
}
