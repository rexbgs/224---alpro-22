#include <iostream>
using namespace std;

int main(){
	float p,q,x1,x2,y1,y2;
	
	cout<<"Titik Tengah Sebuah Garis Yang"<<endl;
	cout<<"Ujung Titiknya A(x1,y1) dan B(x2,y2)"<<endl;
	cout<<"Nilai x1 = ";cin>>x1;
	cout<<"Nilai y1 = ";cin>>y1;
	cout<<"Nilai x2 = ";cin>>x2;
	cout<<"Nilai y2 = ";cin>>y2;
	p=(x1+y1)/2;
	q=(x1+y1)/2;
	cout<<"Titik Tengah Garis A(x1,y1) dan B(x2,y2) = "<<"("<<p<<","<<q<<")";
	
	
	return 0;
}
