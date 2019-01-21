#include <stdio.h>

int compare(FILE *p1,FILE *p2){
	
	while((!feof(p1))&&(!feof(p2))){
		if(fgetc(p1)!=fgetc(p2)){
			return 0;
		}				
	}
	if(feof(p1)==feof(p2)){
		return 1;
	}
	else{
		return 0;
	}	
}

int main(){
	
	
	FILE *fp1,*fp2;
	char x;
	
	fp1=fopen("text1.txt","r");
	fp2=fopen("text2.txt","r");
	
	printf("%d",compare(fp1,fp2));
	
	fclose(fp1);
	fclose(fp2);	
	
	return 0;
}
