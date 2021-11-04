class MyMatriks:
    def __init__(self):
        self.__baris = 3
        self.__kolom = 3
        self.__matriks = []

    def setMatriks(self, baris, kolom):
        self.__baris = baris
        self.__kolom = kolom
        self.__matriks = []
    
    def setBarisKolom(self):
        print("=> Input banyak baris dan kolom")
        self.__baris = int(input("Masukkan banyak baris : "))
        self.__kolom = int(input("Masukkan banyak kolom : "))
        print()
    
    def setIsiMatriks(self):
        print("=> Input isi matriks")
        for i in range(self.__baris):
            nilai = []
            for j in range(self.__kolom):
                print("Masukkan nilai matriks baris ke-",i+1, ", kolom ke-",j+1, " : ", end="")
                nilai.append(int(input()))
            self.__matriks.append(nilai)
    
    def getMatriks(self):
        print("\n=> Cetak matriks")
        for i in range(self.__baris):
            for j in range(self.__kolom):
                print(self.__matriks[i][j], end="\t")
            print()
    
    def jumlahBaris(self):
        print("\n=> Hasil penjumlahan baris")
        for i in range(self.__baris):
            temp = 0
            for j in range(self.__kolom):
                temp += self.__matriks[i][j]
            print("baris[",i+1,"] = ", temp, sep="")
    
    def jumlahKolom(self):
        print("\n=> Hasil penjumlahan kolom")
        for i in range(self.__kolom):
            temp = 0
            for j in range(self.__baris):
                temp += self.__matriks[j][i]
            print("kolom[",i+1,"] = ", temp, sep="")
    
A = MyMatriks()
B = MyMatriks()
C = MyMatriks()
            
print("\n--------- Matriks A ---------\n")
A.setIsiMatriks()
A.getMatriks()
A.jumlahBaris()
A.jumlahKolom()

print("\n--------- Matriks B ---------\n")
B.setMatriks(2,2)
B.setIsiMatriks()
B.getMatriks()
B.jumlahBaris()
B.jumlahKolom()       
        
print("\n--------- Matriks C ---------\n")
C.setBarisKolom()
C.setIsiMatriks()
C.getMatriks()
C.jumlahBaris()
C.jumlahKolom()
