#include <stdio.h>
#include <math.h>

int main(){
	
		
	double a,b,c,d,e,n,i,x,eps,fonk,turev,x1,fark,delta,l,fonk1,dur;
	
	printf("x^0 katsayisini giriniz = ");
	scanf("%lf",&a);	
	printf("x^1 katsayisini giriniz = ");
	scanf("%lf",&b);	
    printf("x^2 katsayisini giriniz = ");
	scanf("%lf",&c);	
	printf("x^3 katsayisini giriniz = ");
	scanf("%lf",&d);	
	printf("x^4 katsayisini giriniz = ");
	scanf("%lf",&e);
	
	
	printf("baslangic degerini giriniz = ");
	scanf("%lf",&x);
	printf("epsilon degerini giriniz = ");
	scanf("%lf",&eps);
	printf("delta x'i giriniz = ");
	scanf("%lf",&delta);
	
	
	x1=x+delta;
	fonk1=(e*x1*x1*x1*x1)+(d*x1*x1*x1)+(c*x1*x1)+(b*x1)+(a);
	fonk=(e*x*x*x*x)+(d*x*x*x)+(c*x*x)+(b*x)+(a);
	
	printf("x                      f(x)                  x+1                  f(x+1)                delta                   |(x+1)-x|");
	printf("\n%lf             %lf             %lf             %lf             %lf                  %lf",x,fonk,x1,fonk1,delta,fabs(x1-x));
	while(fabs(fonk1-fonk)>eps){
		
		x=x1;
		x1=x+delta;
	    fonk1=(e*x1*x1*x1*x1)+(d*x1*x1*x1)+(c*x1*x1)+(b*x1)+(a);
	    fonk=(e*x*x*x*x)+(d*x*x*x)+(c*x*x)+(b*x)+(a);
	    printf("\n%lf             %lf             %lf             %lf             %lf                  %lf",x,fonk,x1,fonk1,delta,fabs(x1-x));
	    if(fonk1*fonk<0){
	    	x=x-delta;
	    	x1=x1-delta;
	    	delta=delta/2;
	    	
		}
		
	    
		
	}
	
	printf("\nDENKLEMIN KOKU = %lf",x1);
	
	
	
	
	printf("\ncikmak icin 0'a basiniz ...");
	scanf("%lf",&dur);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
