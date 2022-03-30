#include <iostream>
#include <math.h>
using namespace std;

class persamaan{
    friend ostream& operator << (ostream&, const persamaan&);
    friend istream& operator >> (istream&, persamaan&);
    public :
    persamaan();
    void diskriminan() {
        if(a == 0){
            cout << "Bukan persamaan kuadrat \n";
            cout << "Harga akar = " << ((-c)/b);
        }
        else{
            disk = (b * b ) - (4 * a * c);
            if (disk > 0) {
                x1 = (-b) + (sqrt(disk) / 2 * a);
                x2 = (-b) - (sqrt(disk) / 2 * a);
                cout << "Nilai x1 = " << x1;
                cout << "Nilai x2 = " << x2;
            }
            else if (disk < 0) {
                x1 = ((-b) / 2 * a);
                x2 = x1;
                cout << "Nilai x1 = " << x1;
                cout << "Nilai x2 = " << x2;
            }
            else
            cout << a + b <<'i';
        }
        
    };
    private :
    float a, b, c;
    int disk; // input
    int x1, x2; // output
};
persamaan::persamaan() {
    cout << "Program akar-akar persamaan kuadrat\n";
}

istream& operator >> (istream& in, persamaan& inputan){
    cout << "Input nilai a : "; in >>inputan.a;
    cout << "Input nilai b : "; in >>inputan.b;
    cout << "Input nilai c : "; in >>inputan.c;
    inputan.diskriminan();
    return in;
}
ostream& operator << (ostream& out, const persamaan& outputkan){
    out << "Akar persamaannya adalah : ";

    return out;
}
int main() {
    persamaan(x);
    cin >> x;
    x.diskriminan();
    cout << x;
    return 0;
}