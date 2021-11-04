/*
    Anggota kelompok :
    Della Fauziyyah H.  (140810200012)
    Indah Sutriyati     (140810200040)
    Andre Nathaniel A.  (140810200042)
    Zahran Hanif F.     (140810200062)
*/

#include <iostream>
using namespace std;

class MyMatriks{
    private:
        int baris;
        int kolom;
        int nilai[3][3];
        
    public:
        MyMatriks(){
            baris = 3;
            kolom = 3;
            nilai[baris][kolom];
        }

    MyMatriks(int baris, int kolom){
        this->baris = baris;
        this->kolom = kolom;
        nilai[baris][kolom];
    }

    void setBarisKolom(){
        cout << "\n=> Input banyak baris dan kolom" << endl;
        cout << "Masukkan banyak baris : ";
        cin >> baris;
        cout << "Masukkan banyak kolom : ";
        cin >> kolom;
    }

    void setIsiMatriks(){
        cout << "\n=> Input isi matriks" << endl;
        for (int i=0; i<baris; i++) {
            for (int j=0; j<kolom; j++) {
                cout << "Masukkan nilai matriks ke " << i+1 << ", " << j+1 << " : ";
                cin >> nilai[i][j];
            }
        }
    }

    void getMatriks(){
        cout << "\n=> Cetak matriks" << endl;
        for (int i=0; i<baris; i++) {
            for (int j=0; j<kolom; j++) {
                cout << nilai[i][j] << " ";
            }
            cout << endl;
        }
    }

    void jumlahBaris(){
        int temp;
        int jumlah[3];
        
        cout << "\n=>Jumlah Baris" << endl;
        for (int i=0; i<baris; i++) {
            temp = 0;
            for (int j=0; j<kolom; j++) {
                temp += nilai[i][j];
            }
            jumlah[i] = temp;
            cout << "Baris ke-" << i+1 << " : " << jumlah[i] << endl;
        }
    }

    void jumlahKolom(){
        int temp;
        int jumlah[3];
        
        cout << "\n=>Jumlah Kolom" << endl;
        for (int i=0; i<kolom; i++) {
            temp = 0;
            for (int j=0; j<baris; j++) {
                temp += nilai[j][i];
            }
            jumlah[i] = temp;
            cout << "Kolom ke-" << i+1 << " : " << jumlah[i] << endl;
        }
    }
};

int main(){
    MyMatriks A;
    MyMatriks B(2,2);
    MyMatriks C;
    
                
    cout << "\n--------- Matriks A ---------\n";
    A.setIsiMatriks();
    A.getMatriks();
    A.jumlahBaris();
    A.jumlahKolom();

    cout << "\n--------- Matriks B ---------\n";
    B.setIsiMatriks();
    B.getMatriks();
    B.jumlahBaris();
    B.jumlahKolom();      
            
    cout << "\n--------- Matriks C ---------\n";
    C.setBarisKolom();
    C.setIsiMatriks();
    C.getMatriks();
    C.jumlahBaris();
    C.jumlahKolom();
}
