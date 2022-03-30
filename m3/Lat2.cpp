#include<iostream>
#include<cmath>
#include<string>

using namespace std;

class Cek{
	friend ostream& operator<<(ostream &, Cek &);
	friend istream& operator>>(istream &, Cek &);
	
public :
	Cek();
	void Cekbil(){
		b = floor(a);	
	}		 
	
private :
	float a,b;
	string hasil;	
	
};

Cek::Cek(){
	if(a==b){
		hasil =" Input merupakan bilangan bulat = ";	
	}	
	else{
		hasil = " Input merupakan bilangan real = ";
	}	
}


istream &operator>>(istream & in , Cek & input){
	cout<<" Input bilangan = "; in >> input.a;
	return in;
}

ostream &operator<<(ostream & out , Cek & output){
	out<<output.hasil;
	out<<output.a; 
	return out;
}


int main(){ 	
	Cek bil;
	cin>>bil;
	bil.Cekbil();	
	cout<<bil;
	
	return 0; 
}
