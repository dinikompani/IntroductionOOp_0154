#include <iostream>
using namespace std;

class mahasiswa
{
public:
    int nim;
    string nama;
    float nilai;
    void printData (){
        cout<<"NIM    = "<<nim<<endl;
        cout<<"Nama   = "<<nama<<endl;
        cout<<"Nilai  = "<<nilai<<endl;
    }

};

int main(){
    mahasiswa mhs;
    mhs.nim = 20210140154;
    mhs.nama = "Wahdini Amri Kompani";
    mhs.nilai = 87.8;

    mhs.printData ();
    
}