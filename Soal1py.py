# Anggota kelompok :
# Della Fauziyyah H.  (140810200012)
# Indah Sutriyati     (140810200040)
# Andre Nathaniel A.  (140810200042)
# Zahran Hanif F.     (140810200062)

class patternBintang:
    def __init__(self, baris):
        self.baris = baris
    
    #Getter
    def getBaris(self):
        return self.baris

    def nestedFor(self):
        for i in range (0, self.baris):
            print(str(i+1) + ". ", end = '')
            for j in range (0, self.baris):
                if(j<i):
                    print("  ", end = '')
                else:
                    print('* ', end = '')
            print()

    #Operasi
    def nestedWhile(self):
        i = 1
        while(i <= self.baris):
            print(str(i) + ". ", end = '')
            j = 1
            while(j <= self.baris):
                if(j<i):
                    print("  ", end = '')
                else:
                    print('* ', end = '')
                j += 1
            print()
            i += 1
    
    #Input
    def input(self):
        baris = input("Masukkan jumlah baris = ")
        self.baris=int(baris)
    
    #Output
    def output(self):
        print("Jumlah Baris  = ",self.baris)
        print()
        print("<-- Pola Menggunakan Nested For -->")
        self.nestedFor() 
        print("<-- Pola Menggunakan Nested While -->")
        self.nestedFor()
  
print()      
print("=======================Via Constructor=======================")
pattern1=patternBintang(3)
print("Jumlah Baris : 3") 
print() 

print("<-- Pola Menggunakan Nested For -->") 
pattern1.nestedFor()
print("<-- Pola Menggunakan Nested While -->")
pattern1.nestedWhile()

print() 
print() 
print("===========Via Constructor Output di Dalam Class=============")
pattern2=patternBintang(4)
pattern2.output()

print() 
print() 
print("=========Percetakan Data dari Luar Class Melalui Get=========")
print("Jumlah Baris : 4") 
print() 
pattern2.getBaris()
print("<-- Pola Menggunakan Nested For -->") 
pattern2.nestedFor()
print("<-- Pola Menggunakan Nested While -->")
pattern2.nestedWhile()

print() 
print() 
print("==============Input dan Output dari Dalam Class==============")
pattern4=patternBintang(0)
pattern4.input()
pattern4.output()
