#include<stdio.h>
#include <string.h>
#include <math.h>


int main(){
	int boyut,i,j,k,t;
	static double matris[30][30];

	printf("matrisin boyutunu giriniz = ");
	scanf("%d",&boyut);

	for(i=0;i<boyut;i++){
		printf("%d. satir elemanlarini giriniz = ",(i+1));
		for( j=0;j<boyut;j++){
			scanf("%lf",&matris[i][j]);
		}
	}
	
	
	printf(" matris = \n");
	for(i=0;i<boyut;i++){
		for( j=0;j<boyut;j++){
			printf("%lf ",matris[i][j]);
		}
		printf("\n");
	}		
	
	
	for(j=0;j<boyut;j++){
		matris[j][boyut+j]=1;
	}
	int K=boyut;
	
	
	for( t=0;t<K;t++){
		for( i=t;i<K;i++){
			double bol=matris[i][t];
			if(bol!=0)
			
			{
			for(j=0;j<2*K;j++){
				matris[i][j]=matris[i][j]/bol;
			}
			if(i>t){
				for( k=0;k<2*K;k++){
					matris[i][k]=matris[i][k]-matris[t][k];
				}	
			}
			}
		}
	}
	for(t=K-1;t>=0;t--){
		for( i=t;i>=0;i--){
			double bol=matris[i][t];
			if(bol!=0)
			
			{
				for( j=2*K-1;j>=i;j--){
					if(matris[i][j]!=0)
						matris[i][j]=matris[i][j]/bol;
				}
				if(i<t){
					for( k=0;k<2*K;k++){
						matris[i][k]=matris[i][k]-matris[t][k];
					}
				}
			}
		}
	}

	printf("\n");
	printf(" matrisin tersi = \n");
	for( i=0;i<boyut;i++){
		for( j=boyut;j<boyut*2;j++)
		
		
		{
			printf("%lf ",matris[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}













