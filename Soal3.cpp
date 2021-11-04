#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class Pegawai {

    private :
    string kodePegawai;
    string namaPegawai;
    int jamMasuk[3]; 
    int jamPulang[3]; 
    int durasiKerja;

    public :
    Pegawai(string namaPegawai, string kodePegawai){
        this->namaPegawai = namaPegawai;
        this->kodePegawai = kodePegawai;
    }
    Pegawai(){
        this->namaPegawai = "";
        this->kodePegawai = "";
    }

    void setKodePegawai(string kodePegawai){
        this->kodePegawai = kodePegawai;
    }

    void setNamaPegawai(string namaPegawai){
        this->namaPegawai = namaPegawai;
    }

    void setJamMasuk(int jam, int menit, int detik){
        this->jamMasuk[0] = jam;
        this->jamMasuk[1] = menit;
        this->jamMasuk[2] = detik;
    }
    void setJamPulang(int jam, int menit, int detik){
        this->jamPulang[0] = jam;
        this->jamPulang[1] = menit;
        this->jamPulang[2] = detik;
    }

    string getKodePegawai(){
        return this->kodePegawai;
    }

    string getNamaPegawai(){
        return this->namaPegawai;
    }

    int* getJamMasuk(){
        return this->jamMasuk;
    }

    int* getJamPulang(){
        return this->jamPulang;
    }

    int hitungDurasi(){
        int a,b,c;
        a = (this->jamPulang[1]-this->jamMasuk[1]);
        c = (this->jamPulang[0]-this->jamMasuk[0]);
        if (this->jamPulang[0] >= 16 && this->jamPulang[1] > 0 && this->jamPulang[2] > 0) {
            a = 0 - this->jamMasuk[1];
            b = 0 - this->jamMasuk[2];
            c = 16 - this->jamMasuk[0];
        }
        if(a<=-1){
            a = a*-1;
        }
        b = (this->jamPulang[2]-this->jamMasuk[2]);
        if(b<=-1){
            b = b*-1;
        }
        int second = (c)*3600 + (a)*60 + (b);
        this->durasiKerja= (second%86400)/3600;
        if(this->durasiKerja > 8){
            this->durasiKerja = 8;
        }
        return this->durasiKerja;
    }

    int getDurasiKerja(){
        return this->durasiKerja;
    }

    int getGaji(){
        return this->durasiKerja*50000;
    }
};

int main(){
        cout << "Masukkan Nama Pegawai : \n";
        string namaPegawai;
        cin >> namaPegawai;
        cout << "Masukkan Kode Pegawai : \n";
        string kodePegawai;
        cin >> kodePegawai;
        cout << "Masukkan JAM masuk: \n";
        int jamMasuk;
        cin >> jamMasuk;
        cout << "Masukkan MENIT masuk: \n";
        int menitMasuk;
        cin >> menitMasuk;
        cout << "Masukkan DETIK masuk: \n";
        int secondMasuk;
        cin >> secondMasuk;
        cout << "Masukkan JAM pulang: \n";
        int jamPulang;
        cin >> jamPulang;
        cout << "Masukkan MENIT pulang: \n";
        int menitPulang;
        cin >> menitPulang;
        cout <<"Masukkan DETIK pulang: \n";
        int secondPulang;
        cin >> secondPulang;
        Pegawai orang = Pegawai(namaPegawai, kodePegawai);
        orang.setJamMasuk(jamMasuk, menitMasuk, secondMasuk);
        orang.setJamPulang(jamPulang, menitPulang, secondPulang);
        orang.hitungDurasi();
        cout << "Nama Pegawai : " << orang.getNamaPegawai() << endl;
        cout << "Kode Pegawai : " << orang.getKodePegawai() << endl;
        cout << "Durasi Kerja : " << orang.getDurasiKerja() << "Jam\n";
        cout << "Upah : " << orang.getGaji() << endl;
}
