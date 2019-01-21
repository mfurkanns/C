#include <stdio.h>
#include <math.h>

int main (){
	
	double a,b,c,d,e,n,i,x,eps,fonk,turev,x1,fark,m=1,l,dur;
	
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
	
	

	
	
	
	
	fonk=(e*x*x*x*x)+(d*x*x*x)+(c*x*x)+(b*x)+(a);
	turev=4*(e*x*x*x)+3*(d*x*x)+2*(c*x)+(b);
	
	x1=x-fonk/turev;
	fark=fabs(x1-x);
	

	
	printf("\nXk             X(k+1)             X(k+1)-Xk");
	printf("\n------------------------------------------------");
	while((fark>eps)){
		printf("\n%lf        %lf        %lf",x,x1,fark);
		x=x1;
		fonk=(e*x*x*x*x)+(d*x*x*x)+(c*x*x)+(b*x)+(a);
        turev=4*(e*x*x*x)+3*(d*x*x)+2*(c*x)+(b);		
		x1=x-fonk/turev;		
		fark=fabs(x1-x);	
	}
	printf("\ndenklem koku = %lf",x1);
	
	
	
	
	printf("\ncikmak icin 0'a basiniz ...");
	scanf("%lf",&dur);
	
	
	
	
	
	
	
	
	return 0 ;
}
