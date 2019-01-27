#include <stdio.h>

void factorial(int a){
	int i,fac=1;
	
	for(i=1;i<=a;i++){
		fac=fac*i;
	}	
	printf("factorial = %d",fac);
}

int pow(int n,int a){
	int i,res=1;
	
	for(i=1;i<=a;i++){
		res=res*n;
	}
	
	return res;
}


int main(){
	
	int n,p;
	
	printf("enter a number = ");
	scanf("%d",&n);
	
	factorial(n);
	
	printf("\nenter a number = ");
	scanf("%d",&n);
	printf("enter the power of number = ");
	scanf("%d",&p);
	
	printf("\n%d",pow(n,p));
	
	return 0;
}
