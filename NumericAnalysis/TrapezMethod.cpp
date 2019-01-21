#include <stdio.h>

int main (){
	
	double a,b,c,d,e,x,y,n,h,sonuc,toplam=0,f,f1,alan,dur;
	printf("x^0 katsayisini giriniz = ");
	scanf("%lf",&d);	
	printf("x^1 katsayisini giriniz = ");
	scanf("%lf",&c);	
    printf("x^2 katsayisini giriniz = ");
	scanf("%lf",&b);	
	printf("x^3 katsayisini giriniz = ");
	scanf("%lf",&a);
	printf("x^4 katsayisini giriniz = ");
	scanf("%lf",&e);
	
	printf("\n");
	printf("araligi giriniz [x,y](y>x olacak sekilde)\n");
	printf("x= ");
	scanf("%lf",&x);
	printf("\ny= ");
	scanf("%lf",&y);
	
	printf("n=aralik sayisini giriniz\n");
	printf("n= ");
	scanf("%lf",&n);
	
	h=(y-x)/n;
	
	while(x<y){		
		f=e*x*x*x*x+a*x*x*x+b*x*x+c*x+d;
		x=x+h;
		f1=a*x*x*x+b*x*x+c*x+d;
		alan=(f1+f)*h/2;
		toplam=toplam +alan;
		
	}
	if(alan<0){
		toplam=toplam*(-1);
	}
	printf("alan = %lf",toplam);
	
	
	
	printf("\ncikmak icin 0'a basiniz...");
	scanf("%lf",&dur);
	
	
	
	
	
	
	return 0 ;
}
