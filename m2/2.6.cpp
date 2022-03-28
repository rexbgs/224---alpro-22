#include<iostream>
using namespace std;

int main(){
	int m,n,q,r;
	cout<<"Masukkan nilai m : ";cin>>m;
	cout<<"Masukkan nilai n : ";cin>>n;
	
	if (n < m){
		q = m / n;
		r = m % n;
		cout<<"Bentuk bilangan bulat "<<m<<" = "<<q<<" x "<<n<<" + "<<r;
	}
	else {
		cout<<"Nilai m harus lebih besar dari Nilai n!!!";
	} 
	return 0;
}
