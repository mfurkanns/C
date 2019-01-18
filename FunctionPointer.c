#include <stdio.h>

int squ(int a){	
	return a*a;
}

int sum(int (*fp)(),int a,int b){
	
	int i,sum=0;
	for(i=a;i<=b;i++){
		sum=sum+(*fp)(i);		
	}	
	return sum;
}


int main(){
	
	int   (*fp)();	        // definition of function pointer
	fp=squ;                 // assignment of a function to function pointer
	printf("square = %d\n",(*fp)(5));
	printf("square sum = %d",sum(fp,3,5)); 
	
	return 0 ;
}
