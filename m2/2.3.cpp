#include<iostream>
using namespace std;

int main(){
	float cm,m,inch;
	
	cout<<"Nilai Meter = ";cin>>m;
	cm=m*100;
	inch=m*100/2.54;
	
	cout<<"Hasil Konversi ke CM = "<<cm<<" CM"<<endl;
	cout<<"Hasil Konversi ke INCH = "<<inch<<" INCH"<<endl;
	
	return 0;
}
