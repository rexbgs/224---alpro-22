#include <iostream>
#include <stdlib.h>
using namespace std;

class konversi{
    friend ostream& operator << (ostream&, const konversi&);
    friend istream& operator >> (istream&, konversi&);
    public :
    konversi();
    void angka_kata() {
        data_angka = angka;
        satuan = data_angka%10;
        puluhan = (data_angka/10)%10;
        ratusan = (data_angka/100)%10;
        ribuan = (data_angka/1000)%10;

        switch(satuan) { // SATUAN
            case 1: a = "SATU"; break;
            case 2: a = "DUA"; break;
            case 3: a = "TIGA"; break;
            case 4: a = "EMPAT"; break;
            case 5: a = "LIMA"; break;
            case 6: a = "ENAM"; break;
            case 7: a = "TUJUH"; break;
            case 8: a = "DELAPAN"; break;
            case 9: a = "SEMBILAN"; break;
            default: break;
        }
        switch(puluhan) { // PULUHAN
            case 1: b = "SATU"; break;
            case 2: b = "DUA"; break;
            case 3: b = "TIGA"; break;
            case 4: b = "EMPAT"; break;
            case 5: b = "LIMA"; break;
            case 6: b = "ENAM"; break;
            case 7: b = "TUJUH"; break;
            case 8: b = "DELAPAN"; break;
            case 9: b = "SEMBILAN"; break;
            default: break;
        }
        switch(ratusan) { // RATUSAN
            case 1: c = "SATU"; break;
            case 2: c = "DUA"; break;
            case 3: c = "TIGA"; break;
            case 4: c = "EMPAT"; break;
            case 5: c = "LIMA"; break;
            case 6: c = "ENAM"; break;
            case 7: c = "TUJUH"; break;
            case 8: c = "DELAPAN"; break;
            case 9: c = "SEMBILAN"; break;
            default: break;
        }
        switch(ribuan) { // RIBUAN
            case 1: d = "SATU"; break;
            case 2: d = "DUA"; break;
            case 3: d = "TIGA"; break;
            case 4: d = "EMPAT"; break;
            case 5: d = "LIMA"; break;
            case 6: d = "ENAM"; break;
            case 7: d = "TUJUH"; break;
            case 8: d = "DELAPAN"; break;
            case 9: d = "SEMBILAN"; break;
            default: break;
        }

        if(puluhan!=0 && puluhan>=2)
            q = " PULUH ";
        else if(puluhan!=0 && puluhan<2){
            q ="";
            b = a;
            a = " BELAS";
        }
        // untuk puluhan
        if(puluhan==1 && satuan ==0){
            q ="";
            b ="SEPULUH";
            a ="";
        }
        else if(puluhan==1 && satuan ==1){
            q ="";
            b ="SEBELAS";
            a ="";
        }
        // untuk ratusan
        if(ratusan!=0 && ratusan >=1)
            r = " RATUS ";
        else if(ratusan!=0 && ratusan ==1)
            c = "SERATUS ";

        // untuk ribuan
        if(ribuan!=0 && ribuan >=1)
            s = " RIBU ";
        else if(ribuan!=0 && ribuan ==1)
            d = "SERIBU ";   

        // teks nol
        if(angka==0)
            teks = "NOL";
        // teks error
        else if(angka > 9999)
            teks = "NOMOR YANG ANDA MASUKKAN MELEBIHI RIBUAN";
        // tampilan teks
        else
            teks =""+d+s+c+r+b+q+a; 
    };
    private :
    int angka, data_angka, satuan, puluhan, ratusan, ribuan; // input
    string a; // teks satuan
    string b,q; // teks puluhan
    string c,r; // teks ratusan
    string d,s; // teks ribuan
    string teks=""; // teks nol dan lainnya 
};
konversi::konversi() {
    cout << "Program konversi angka ke kata\n";
}

istream& operator >> (istream& in, konversi& inputan){
    cout << "Input angka satuan sampai ribuan : "; in >>inputan.angka;
    inputan.angka_kata();
    return in;
}
ostream& operator << (ostream& out, const konversi& outputkan){
    out << "\nTerbilang : " << outputkan.teks <<endl;
    return out;
}
int main() {
    konversi(x);
    cin >> x;
    x.angka_kata();
    cout << x;
    return 0;
}