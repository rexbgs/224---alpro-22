#include <stdio.h>

int main(){
	int x,y,z,besar;
	
	printf(" Masukkan Bilangan 1 : "); scanf("%d", &x);
	printf(" Masukkan Bilangan 2 : "); scanf("%d", &y);
	printf(" Masukkan Bilangan 3 : "); scanf("%d", &z);
	
	if (x>y && x>z){
      besar =x;
	}
   	else{
      if (y>x && y>z){
         besar =y;
      }
      else{
         besar =z;
      }
   }
	printf("\n Bilangan Terbesar adalah %d", besar);

	return 0;		
}
