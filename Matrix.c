#include <stdio.h>


int main(){
	
	int n,m,i,j;
	
	printf("enter the number of rows = ");
	scanf("%d",&n);
	printf("enter the number of colums = ");
	scanf("%d",&m);
	
	int matrix[n][m];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",matrix[i][j]);			
		}
		printf("\n");
	}
	
	return 0;
}
