#include<stdio.h>

int main(){

int nilai;


printf("Masukkan Nilai : "); scanf("%d", &nilai);

if (nilai>0 && nilai<=20){
	printf("Nilai Huruf = E");
}
else if(nilai>20 && nilai<=40){
	printf("Nilai Huruf = D");
}
else if(nilai>40 && nilai<=60){
	printf("Nilai Huruf = C");
}
else if(nilai>60 && nilai<=80){
	printf("Nilai Huruf = B");
}
else {
	printf("Nilai Huruf = A");
}

return 0;
}
