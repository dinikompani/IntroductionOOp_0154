#include <iostream>
using namespace std;

class mahasiswa
{
public:
    int nim;
    int nama;
    float nilai;
    void printData (){
        cout<<"NIM    = "<<nim<<endl;
        cout<<"Nama   = "<<nama<<endl;
        cout<<"Nilai  = "<<nilai<<endl;
    }

};

int main(){
    mahasiswa mhsl;
    mhsl.nim = 2021;
    mhsl.nama = "Winter";
    mhsl.nilai = 87.8;

    mhsl.printData ();
    
}