#include <iostream>
using namespace std;

class banding{
	friend ostream &operator >> (ostream&, banding&);
	friend istream &operator >> (istream&, banding&);
public:
	int x,y,z,besar;
void bandingkan(){
	if ((x > y) && (x > z)){
		banding::besar = x;
	}
	else if ((y > x) && (y > z)){
		banding::besar = y;
	}
	else{
		banding::besar = z;
	}
}
};

istream &operator >> (istream& in, banding& input){
	cout << "Masukkan bilangan pertama: ";
	in >> input.x;
	cout << "Masukkan bilangan kedua: ";
	in >> input.y;
	cout << "Masukkan bilangan ketiga: ";
	in >> input.z;
	return in;
}

ostream &operator << (ostream& out, const banding& output){
	out << "Bilangan terbesar adalah : " << output.besar;
	return out;
}

int main(){
	banding nilai;
	cin >> nilai;
	nilai.bandingkan();
	cout << nilai;
	return 0;
}
