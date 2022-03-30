#include <iostream>

#include <math.h>

using namespace std;

class determinan{
	
	friend ostream &operator >> (ostream&, determinan&);
	friend istream &operator >> (istream&, determinan&);
	
public:
	int a, b, c;
	float disk, x1, x2;
	
void menghitung(){
	disk = (b*b)-4*a*c;
	if (a == 0){
		cout << "Bukan Persamaan Kuadrat";
	}
	else if (disk > 0){
		if (disk == 0){
			x1 = -b/(2*a);
			x2 = x1;
		}
		else{
			x1 = -b + (sqrt(disk/(2*a)));
			x2 = -b - (sqrt(disk/(2*a)));
		}
	}
}
};

istream& operator >> (istream& in, determinan& input){
	cout << "Masukkan Bilangan 1: ";
	in >> input.a;
	cout << "Masukkan Bilangan 2: ";
	in >> input.b;
	cout << "Masukkan Bilangan 3: ";
	in >> input.c;
}

ostream &operator << (ostream& out, determinan& output){
	if (output.disk > 0){
		out << "nilai x1 adalah " << output.x1 << ", nilai x2 adalah " << output.x2;
	}
	else{
		out << "Akar Imaginer";
	}
}

int main(){
	float x1, x2;
	determinan X;
	cin >> X;
	X.menghitung();
	cout << X;
	return 0;
}

