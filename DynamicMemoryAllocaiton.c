#include <stdio.h>

int** mtxalloc(int **mtr,int a,int b){
	
	int i,j;
	
	mtr=(int**)malloc(a*sizeof(int*));
	for(i=0;i<a;i++){
		mtr[i]=(int*)calloc(b,sizeof(int));
	}	
	
	return mtr;
}

int main(){
	
	int i,j,n,l,**matrix;
	
	printf("enter the row = ");
	scanf("%d",&n);
	printf("enter the column = ");
	scanf("%d",&l);
	
	matrix=mtxalloc(matrix,n,l);
	
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			matrix[i][j]=1;
		}
		
	}	
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}	
	
	return 0;
}
