#include <iostream>

using namespace std;

class PersegiPanjang{

private:
    float panjang;
    float lebar;

public:
    PersegiPanjang() {
        panjang = 0;
        lebar = 0;    
    }

    PersegiPanjang(float panjangPp,float lebarPp){
        panjang = panjangPp;
        lebar = lebarPp;
    }
    //Setter dan Getter
    void setPanjang(float panjangPp){ 
        panjang = panjangPp;
    }

    void setLebar(float lebarPp){
        lebar = lebarPp;
    }

    void setPersegiPanjang(float panjangPp, float lebarPp){
        panjang = panjangPp;
        lebar = lebarPp;
    }

    float getPanjang(){
        return(panjang);
    }

    float getLebar(){
        return (lebar);
    }

    float getKeliling(){
        return ((panjang * 2) + (lebar * 2));
    }

    float getLuas(){
        return (panjang * lebar);
    }

    // Operasi
    void hitungKeliling(float& hslKeliling){
        hslKeliling = (panjang * 2) + (lebar * 2);
    }

    void hitungLuas(float& hslLuas){
        hslLuas = panjang * lebar;
    }

    //Input
    void inputData(){
        cout << "Input data dari dalam class :" << endl;
        cout << "Masukkan Panjang (Cm) = ";
            cin >> panjang;
        cout << "Masukkan Lebar   (Cm) = ";
            cin >> lebar;
        cout << endl;
    }

    // Output
    void printData(){
        cout << "Output data dalam class :" << endl;
        cout << "Panjang Persegi Panjang  = " << panjang << " Cm" << endl;
        cout << "Lebar Persegi Panjang    = " << lebar << " Cm" << endl;
        cout << "Keliling Persegi Panjang = " << getKeliling() << " Cm" << endl;
        cout << "Luas Persegi Panjang     = " << getLuas() << " Cm Kuadrat" << endl;
    }
};
// Main Program
main() {
    cout << "Program Persegi Panjang : Keliling dan Luas\n\n";
    float panjangPp, lebarPp, luas, keliling;

    PersegiPanjang myPersegiPanjang1(2, 4);
    PersegiPanjang myPersegiPanjang2;
    PersegiPanjang myPersegiPanjang3;

    luas = myPersegiPanjang1.getLuas();
    keliling = myPersegiPanjang1.getKeliling();
        cout << "Lewat constructor : " << endl;
        cout << "Luas Persegi Panjang     = " << luas << " Cm Kuadrat" << endl;
        cout << "Keliling Persegi Panjang = " << keliling << " Cm" << endl;
        cout << endl;

    myPersegiPanjang2.setPersegiPanjang(9, 7);
        cout << "Lewat setClass : " << endl;
        cout << "Panjang Persegi Panjang         = " << myPersegiPanjang2.getPanjang() << " Cm" << endl;
        cout << "Lebar Persegi Panjang           = " << myPersegiPanjang2.getLebar() << " Cm" << endl;
        cout << "Keliling Persegi Panjang        = " << myPersegiPanjang2.getKeliling() << " Cm" <<endl;
        cout << "Luas Persegi Panjang (setClass) = " << myPersegiPanjang2.getLuas() << " Cm Kuadrat" <<endl;
        cout << endl;

        myPersegiPanjang3.inputData();
        myPersegiPanjang3.hitungLuas(luas);
        myPersegiPanjang3.hitungKeliling(keliling);
            cout << "Dengan Prosedur : " << endl;
            cout << "Keliling Persegi Panjang = " << keliling << " Cm" << endl;
            cout << "Luas Persegi Panjang     = " << luas << " Cm Kuadrat" <<endl;
            cout << endl;

        myPersegiPanjang3.printData();
}