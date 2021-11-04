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
        if self.jamPulang[2] < self.jamMasuk[2]:
            self.jamPulang[2] += 60
            self.jamPulang[1]-= 1
        if self.jamPulang[1] < self.jamMasuk[1]:
            self.jamPulang[1] += 60
            self.jamPulang[0]-=1
        self.durasiKerja = self.jamPulang[0]-self.jamMasuk[0]
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
