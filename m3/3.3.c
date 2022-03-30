#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c; 
	float x1,x2,disk;
	
	printf(" Masukkan Bilangan 1 : "); scanf("%d", &a);
	printf(" Masukkan Bilangan 2 : "); scanf("%d", &b);
	printf(" Masukkan Bilangan 3 : "); scanf("%d", &c);
	
	if (a==0){
    	printf("\n Bukan Persamaan Kuadrat ");
	}
   	else if (disk>0){
   		x1 =-b+sqrt(disk)/2*a;
        x2 =-b-sqrt(disk)/2*a;
        printf("\n akar pertama x1 =  %2.f", x1);
        printf("\n akar pertama x1 =  %2.f", x2);
	}
    else if (disk==0){
    	x1 =-b/2*a;
        x2 =x1;
        printf("\n akar pertama x1 =  %2.f", x1);
        printf("\n akar pertama x1 =  %2.f", x2);
    }
   	else{
   		printf("\n Akar imajiner ");
	}
	

	return 0;		
}
