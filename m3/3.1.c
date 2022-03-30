#include <stdio.h>

int main(){
	int bilangan1,bilangan2;
	
	printf(" Masukkan Bilangan 1 : "); scanf("%d", &bilangan1);
	printf(" Masukkan Bilangan 2 : "); scanf("%d", &bilangan2);
	if(bilangan1>bilangan2){
		printf("\n Bilangan Terbesar adalah %d", bilangan1);
	}
	else{
			printf("\n Bilangan Terbesar adalah %d", bilangan2);
	}
	return 0;		
}
