#include <stdio.h>
#include <math.h>
typedef struct mat{	
	double sinx,cosx,tanx;	
};

struct mat *f1(double x){	
	static struct mat sonuc;	
	sonuc.cosx=cos(x);
	sonuc.sinx=sin(x);
	sonuc.tanx=tan(x);		
	return &sonuc;
}

void str_print(struct mat *z){	
	printf("sine = %lf\n",z->sinx);
	printf("cosine = %lf\n",z->cosx);
	printf("tangent = %lf\n",z->tanx);
	
}


int main (){
	
	double x;
	printf("Enter the radian = ");
	scanf("%lf",&x);
	
	str_print(f1(x));
	
	
	
	
	
	return 0 ;
}
