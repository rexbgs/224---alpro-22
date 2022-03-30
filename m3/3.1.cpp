#include <iostream>
using namespace std;

class banding{
	friend ostream &operator >> (ostream&, banding&);
	friend istream &operator >> (istream&, banding&);
	
public:
	int a,b,maks;
	
	void bandingkan(){
		if (a > b){
			banding::maks = a;
		}
		else{
			banding::maks = b;
		}
	}
};

istream &operator >> (istream& in, banding& inputData){
	cout << "Masukkan bilangan pertama: ";
	in >> inputData.a;
	cout << "Masukkan bilangan kedua: ";
	in >> inputData.b;
	return in;
}

ostream &operator << (ostream& out, const banding outData){
	out << "Bilangan terbesar adalah : " << outData.maks;
	return out;
}

int main(){
	banding nilai;
	cin >> nilai;
	nilai.bandingkan();
	cout << nilai;
	return 0;
}
