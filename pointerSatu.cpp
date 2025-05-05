

int main(){

    mahasiswa mhs(1);
    mhs showNim();

    mahasiswa &refMhs = mhs;
    refMhs.nim = 2;
    mhs.showNim();

    mahasiswa *pMhs = &mhs;
    pMhs ->nim = 3;
    pMhs ->showNim();
    return 0;
}
