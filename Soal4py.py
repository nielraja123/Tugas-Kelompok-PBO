class Persegi:
    def __init__(self, panjang, lebar):
        self.__panjang = panjang
        self.__lebar = lebar

    def setPersegi(self, panjang, lebar):
        self.__panjang = panjang
        self.__lebar = lebar

    def setPanjang(self,panjang):
        self.__panjang = panjang

    def setLebar(self,lebar):
        self.__lebar = lebar

    def getPanjang(self):
        return self.__panjang

    def getLebar(self):
        return self.__lebar

    def inputPersegiPanjang(self):
        panjang = input("Masukkan panjang persegi panjang (Cm) = ")
        lebar = input("Masukkan lebar persegi panjang  (Cm)  = ")
        print("")
        self.__panjang = float(panjang)
        self.__lebar = float(lebar)

    def hitungKeliling(self):
        return ((self.__panjang * 2) + (self.__lebar * 2))

    def hitungLuas(self):
        return (self.__panjang * self.__lebar)

    def cetakPersegiPanjang(self):
        print("Pencetakan di dalam class :")
        print("Panjang persegi panjang  = ",self.__panjang, "Cm")
        print("Lebar persegi panjang    = ",self.__lebar, "Cm")
        print("Keliling persegi panjang = ",self.hitungKeliling(), "Cm")
        print("Luas persegi panjang     = ",self.hitungLuas(), "Cm Kuadrat\n")

print("Program Persegi Panjang : Keliling dan Luas\n")
print("Objek 1 : via constructor / Init dengan konstanta")
myPersegiPjg1 = Persegi(2,7)
myPersegiPjg1.cetakPersegiPanjang()
keliling = myPersegiPjg1.hitungKeliling()
luas = myPersegiPjg1.hitungLuas()

print("Dari Luar class :")
print("Panjang persegi panjang                 =", myPersegiPjg1.getPanjang(), "Cm")
print("Lebar persegi panjang                   =", myPersegiPjg1.getLebar(), "Cm")
print("Keliling persegi panjang (diluar class) =", keliling, "Cm")
print("Luas persegi panjang (diluar class)     =", luas, "Cm Kuadrat\n")

#---------------------------------------------------------------------
print("Objek 2 : via initialization, dengan input di luar")
panjang = input("Masukkan panjang persegi panjang     = ")
lebar = input("Masukkan lebar persegi panjang       = ")
panjang = float(panjang)
lebar = float(lebar)
myPersegiPjg2 = Persegi(panjang,lebar)
print("Keliling persegi panjang (di luar class) =", myPersegiPjg2.hitungKeliling(), "Cm")
print("Luas persegi panjang (di luar class)     =", myPersegiPjg2.hitungLuas(), "Cm Kuadrat\n")
myPersegiPjg2.cetakPersegiPanjang()

#-----------------------------------------------------------------
print("Objek 3 : Input di dalam")
myPersegiPjg3 = Persegi(0,0)
myPersegiPjg3.inputPersegiPanjang()
myPersegiPjg3.cetakPersegiPanjang()        