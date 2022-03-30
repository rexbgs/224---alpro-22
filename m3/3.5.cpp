#include <iostream>
#include <conio.h>

using namespace std;

class ubah {
	friend ostream& operator << (ostream&, const ubah&);
	friend istream& operator >> (istream&, ubah&);
	
public:
	
	void ubahan() {
		switch(A) {
			case 1:
				hari = "SENIN";
				break;
			case 2:
				hari = "SELASA";
				break;
			case 3:
				hari = "RABU";
				break;
			case 4:
				hari = "KAMIS";
				break;
			case 5:
				hari = "JUM'AT'";
				break;
			case 6:
				hari = "SABTU";
				break;
			case 7:
				hari = "MINGGU";
				break;
		}
	}
	
private:
	int A;
	string hari;
	
};

istream& operator >> (istream& in, ubah& input) {
	cout<<"Konversi Hari"<<endl;
	cout<<endl;
	cout << "Masukkan Hari ke - ";
	in >> input.A;
}

ostream& operator << (ostream& out, const ubah& output) {
	out << "\nHari ke - " << output.A << " Adalah hari " << output.hari;
}

int main() {
	ubah hari;
	cin >> hari;
	hari.ubahan();
	cout << hari;
	
	return 0;
}
