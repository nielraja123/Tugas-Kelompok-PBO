/*
    Anggota kelompok :
    Della Fauziyyah H.  (140810200012)
    Indah Sutriyati     (140810200040)
    Andre Nathaniel A.  (140810200042)
    Zahran Hanif F.     (140810200062)
*/
#include <iostream>
using namespace std;

class patternBintang{
    private:
    int baris;

    public:
    patternBintang(){
        baris = 0;
    }

    patternBintang(int newBaris){
        baris = newBaris;
    }

    //Setter dan Getter
    void setBaris(int newBaris){
        baris = newBaris;
    }

    int getBaris(){
        return(baris);
    }
    
    //Operasi
    void nestedFor(){
        for(int i=0; i< this->baris; i++){
            cout << i + 1 << ". ";
            for(int j=0; j<this->baris; j++){
                if(i<=j){
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }

    void nestedWhile(){
        int i = 0;
        while(i<this->baris){
            cout << i + 1 << ". ";
            int j = 0;
            while(j<this->baris){
                if(i<=j){
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
                j++;
            }
            cout << "\n";
            i++;
        }
    }

    //Input
    void input(){
        cout << "Masukkan baris\t: "; 
        cin >> this->baris;
    }

    //Output
    void output(){
        cout  << "Banyak Baris\t: " << baris << endl;
        cout << "\n<--- Pola Menggunakan Nested For --->" << endl;
        nestedFor();
        cout << "<--- Pola Menggunakan Nested While --->" << endl;
        nestedWhile();
    } 
};

// Main Program
int main(){
    int newBaris;

    cout << "\n===========Via Constructor Output di Dalam Class ============" << endl;
    patternBintang pattern1(3);
    pattern1.output();

    cout << "\n\n=========Menggunakan Set dan Output dari Luar Class =========" << endl;    
    patternBintang pattern2;
    pattern2.setBaris(4);
    pattern2.output();

    cout << "\n\n=========Percetakan Data dari Luar Class Melalui Get=========" << endl;    
    patternBintang pattern3;
    pattern3.setBaris(5);
    newBaris = pattern3.getBaris();
    cout << "Banyak Baris\t: 5"  << endl;
    cout << "\n<-- Pola Menggunakan Nested For -->" << endl;
    pattern3.nestedFor();
    cout << "<-- Pola Menggunakan Nested While -->" << endl;
    pattern3.nestedWhile();

    cout << "\n\n==============Input dan Output dari Dalam Class==============" << endl;
    patternBintang pattern4;
    pattern4.input();
    pattern4.output();
   
}
