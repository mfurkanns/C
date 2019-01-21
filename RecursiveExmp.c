#include <stdio.h>

int factor(int a){
	
	if(a==0){
		return 1;
	}
	else {
		return factor(a-1)*a;
	}
}

int main(){
	
	int n; 	
	printf("enter a number (n>=0) = ");
	scanf("%d",&n);
	printf("factorial = %d",factor(n));
		
	return 0;
}
