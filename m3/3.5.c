#include<stdio.h>

int main(){

int hari;

printf("Masukkan hari ke- "); scanf("%d", &hari);

switch(hari){
	case 1 :
		printf("Hari Senin");
	break;
	case 2 :
		printf("Hari Selasa");
	break;
	case 3 :
		printf("Hari Rabu");
	break;
	case 4 :
		printf("Hari Kamis");
	break;
	case 5 :
		printf("Hari Jum'at'");
	break;
	case 6 :
		printf("Hari Sabtu");
	break;
	default :
		printf("Hari Minggu");
} 

return 0;
}
