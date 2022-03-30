#include <iostream>
using namespace std;

class ubah{
	friend ostream &operator >> (ostream&, ubah&);
	friend istream &operator >> (istream&, ubah&);
	
public:
	int nilai;
	char nilai_huruf;
	
void ubahan(){
	if ((nilai > 0) && (nilai <= 20)){
		nilai_huruf = 'E';
	}
	else if ((nilai > 20) && (nilai <= 40)){
		nilai_huruf = 'D';
	}
	else if ((nilai > 40) && (nilai <= 60)){
		nilai_huruf = 'C';
	}
	else if ((nilai > 60) && (nilai <= 80)){
		nilai_huruf = 'B';
	}
	else{
		nilai_huruf = 'A';
	}
}
};

istream &operator >> (istream& in, ubah& input){
	cout << "Masukkan nilai angka = ";
	in >> input.nilai;
	
	return in;
}

ostream &operator << (ostream& out, const ubah& output){
	out << "Nilai Huruf = " << output.nilai_huruf;
	
	return out;
}

int main(){
	ubah x;
	cin >> x;
	x.ubahan();
	cout << x;
	return 0;
}
