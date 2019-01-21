#include <stdio.h>
#include <math.h>

int main (){
	
	double f,g,h,d,e,n,i,x,eps,fonk,turev,x1,fark,m=1,l,f_a,f_b,f_c,a,b,c,dur;
	
	printf("x^0 katsayisini giriniz = ");
	scanf("%lf",&f);	
	printf("x^1 katsayisini giriniz = ");
	scanf("%lf",&g);	
    printf("x^2 katsayisini giriniz = ");
	scanf("%lf",&h);	
	printf("x^3 katsayisini giriniz = ");
	scanf("%lf",&d);	
	printf("x^4 katsayisini giriniz = ");
	scanf("%lf",&e);
	
	
	
	
	
	printf("epsilon degerini giriniz = ");
	scanf("%lf",&eps);
	printf("koku icine alan 2 nokta giriniz \n1.= ");
	scanf("%lf",&a);
	printf("\n2. =");
	scanf("%lf",&b);
	
	f_a=e*(a*a*a*a)+d*(a*a*a)+h*(a*a)+g*(a)+f;
	f_b=e*(b*b*b*b)+d*(b*b*b)+h*(b*b)+g*(b)+f;
	
	
	if((f_a*f_b)>0){
		printf("\nkok yoktur ");
		
	}
	if (f_a*f_b==0){
		if(f_a==0){
			printf("kok a dir = %lf",a);
		}
		if(f_b==0){
		    printf("kok b dir = %lf",b);
		}
		if((f_a==0)&&(f_b==0)){
			printf("\n a ve b cakisik koktur.");			
		}
		
	    
		
	}
	
	c=(a+b)/2;
	f_c=e*(c*c*c*c)+d*(c*c*c)+h*(c*c)+g*(c)+f;
	
	if(f_a*f_b<0){
		printf("\na                       f(a)                        b                   f(b)                      c                      f(c)");
		printf("\n----------------------------------------------------------------------------------------------------------------------------------------------");
		while(fabs(f_c)>eps){
		printf("\n%lf               %lf               %lf               %lf               %lf               %lf",a,f_a,b,f_b,c,f_c);
			
		
		c=(a+b)/2;
		f_c=e*(c*c*c*c)+d*(c*c*c)+h*(c*c)+g*(c)+f;
		f_a=e*(a*a*a*a)+d*(a*a*a)+h*(a*a)+g*(a)+f;
    	f_b=e*(b*b*b*b)+d*(b*b*b)+h*(b*b)+g*(b)+f;
		
		if((fabs(f_c)<=eps)||(f_c==0)){
			printf("\nDENKLEMIN KOKU = %lf",c);
			
		}
				    
		if(f_a*f_c<0){
			b=c;
		}
		if(f_b*f_c<0){
			a=c;
		}
		
		
		
	}
	
	}
	
	
	
		
	
		
		
		
		
	printf("\ncikmak icin 0'a basiniz ...");
	scanf("%lf",&dur);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	return 0 ;	
}
