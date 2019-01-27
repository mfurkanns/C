#include <stdio.h>

#define MACRO1(a,b)	 ((a)*(b)+5) 
#define min(a,b)	 ((a)<(b) ? (a):(b))
#define MAX	100
#define CHECK(a) \
	if(a%2==0){ \
		printf("even value");\
	} \
	else \
		printf("odd value");\		
	

int main(){
	
	printf("%d\n",MACRO1(5,5));
	printf("%d\n",min(3,8));
	printf("%d\n",MAX);
	CHECK(4);
	
	return 0;
}
