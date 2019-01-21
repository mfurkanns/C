#include <stdio.h>
#include <string.h>

char* split(char *str,int a){
	
	int i,j=0;
	char *p;
	p=(char*)calloc(strlen(str)-a,sizeof(char));
	
	for(i=a;i<strlen(str);i++){
		p[j]=str[i];
		j++;
	}	
	
	return p;
}

int main(){
	
	int n;
	char x[100];
	
	printf("enter the string = ");
	gets(x);
	
	printf("from which character = ");
	scanf("%d",&n);
	
	printf("%s",split(x,n));	
	
	return 0;
}
