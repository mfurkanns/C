#include <stdio.h>


int main(){
	
	int *a,i,j,tmp,min,minind,n;
	printf("enter the number of elements \n ");
	scanf("%d",&n);
	
	a=(int*)malloc(n*sizeof(int));
	
	printf("enter the elements\n");
	for(i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
		
	for(i=0;i<n;i++){
		min=a[i];
		for(j=i;j<n;j++){
			if(min>=a[j]){
				min=a[j];
				minind=j;
			}				
		}
		tmp=a[i];
		a[i]=a[minind];
		a[minind]=tmp;
		
		
	}
	
	printf("sorted array \n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}	
	
	return 0;
}
