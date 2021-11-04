class Pegawai :
    def __init__(self, namaPegawai, kodePegawai):
        self.namaPegawai = namaPegawai
        self.kodePegawai = kodePegawai

    def setKodePegawai(self, kodePegawai):
        self.kodePegawai = kodePegawai

    def setNamaPegawai(self, namaPegawai):
        self.namaPegawai = namaPegawai

    def setJamMasuk(self, jam, menit, detik):
        self.jamMasuk = [0,0,0] 
        self.jamMasuk[0] = jam
        self.jamMasuk[1] = menit
        self.jamMasuk[2] = detik

    def setJamPulang(self, jam, menit, detik):
        self.jamPulang = [0,0,0] 
        self.jamPulang[0] = jam
        self.jamPulang[1] = menit
        self.jamPulang[2] = detik

    def getKodePegawai(self):
        return self.kodePegawai

    def getNamaPegawai(self):
        return self.namaPegawai

    def getJamMasuk(self):
        return self.jamMasuk

    def getJamPulang(self):
        return self.jamPulang

    def hitungDurasi(self):
        a = (self.jamPulang[1]-self.jamMasuk[1])
        c = (self.jamPulang[0]-self.jamMasuk[0])
        if self.jamPulang[0] >= 16 and self.jamPulang[1] > 0 and self.jamPulang[2] > 0:
            a = 0 - self.jamMasuk[1]
            b = 0 - self.jamMasuk[2]
            c = 16 - self.jamMasuk[0]
        if a<=-1:
            a = a*-1
        b = (self.jamPulang[2]-self.jamMasuk[2])
        if b<=-1 :
            b = b*-1
        second = (c)*3600 + (a)*60 + (b)
        self.durasiKerja = int ((second%86400)/3600)
        if self.durasiKerja > 8:
            self.durasiKerja = 8
        return self.durasiKerja

    def getDurasiKerja(self):
        return self.durasiKerja

    def getGaji(self):
        return int (self.durasiKerja*50000)

if __name__ == "__main__" :
    namaPegawai = input("Masukan Nama : \n")
    kodePegawai = input("Masukan Kode : \n")
    jamMasuk = int (input("Masukan JAM masuk : \n"))
    menitMasuk = int (input("Masukan MENIT masuk : \n"))
    secondMasuk = int (input("Masukan DETIK masuk : \n"))
    jamPulang = int (input("Masukan JAM pulang : \n"))
    menitPulang = int (input("Masukan MENIT pulang : \n"))
    secondPulang = int (input("Masukan DETIK pulang : \n"))
    orang = Pegawai (namaPegawai, kodePegawai)
    orang.setJamMasuk(jamMasuk, menitMasuk, secondMasuk)
    orang.setJamPulang(jamPulang, menitPulang, secondPulang)
    orang.hitungDurasi()
    print("Nama Pegawai : " + orang.getNamaPegawai())
    print("Kode Pegawai : " + orang.getKodePegawai())
    print("Durasi Kerja : " + str (orang.getDurasiKerja()) + " Jam")
    print("Upah Pegawai : " + str (orang.getGaji()))
