#include<iostream>
using namespace std;

int main(){
	float cm,m,inch;
	
	cout<<"Nilai Meter = ";cin>>m;
	cm=m*100;
	inch=m*100/2.54;
	
	cout<<"Hasil CM = "<<cm<<endl;
	cout<<"Hasil INCH = "<<inch<<endl;
	
	return 0;
}
