#include <stdio.h>

int main (){
	
	double a,b,c,d,e,x,y,n,h,sonuc,toplam=0,f,f1,alan,dur;
	int ss=1;
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
	toplam=e*x*x*x*x+a*x*x*x+b*x*x+c*x+d;
	x=x+h;
	
	while(x<y){
		if(ss%2==1){
			f=e*x*x*x*x+a*x*x*x+b*x*x+c*x+d;
			f=f*4;
			
		}
		else{
			f=e*x*x*x*x+a*x*x*x+b*x*x+c*x+d;
			f=f*2;
		}
		ss++;
		x=x+h;		
		toplam=toplam +f;
		
	}
	f=e*x*x*x*x+a*x*x*x+b*x*x+c*x+d;
	toplam=toplam +f;
	
	if(alan<0){
		toplam=toplam*(-1);
	}
	toplam=toplam*h/3;
	printf("alan = %lf",toplam);
	
	
	
	printf("\ncikmak icin 0'a basiniz...");
	scanf("%lf",&dur);
	
	
	
	
	
	
	return 0 ;
}
