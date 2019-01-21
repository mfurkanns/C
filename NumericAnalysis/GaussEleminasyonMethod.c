#include<stdio.h>

int main(){
	int denklem,derece,i,j,t,k;
	
	double matris[20][20],dur;
	double c[20];
	static double kokler[20];
	
	
	printf("denklem sayisini gir =  ");
	
	scanf("%d",&denklem);
	printf("denklemlerin derecesini giriniz = ");
	
	scanf("%d",&derece);
	
	
	for( i=0;i<denklem;i++)
	{
		printf("%d. denklemin denklem kisminin katsayilarini gir = ",(i+1));
		for(j=0;j<=derece;j++)
		
		{
			scanf("%lf",&matris[i][j]);
		}
		printf("%d. esitligin sonuc kisminin elemani gir = ",(i+1));
		scanf("%lf",&c[i]);
	}

	printf("girdiginiz denklemlerin katsayilar matrisi = \n");
	for( i=0;i<=derece;i++){
		for( j=0;j<=derece;j++){
			printf("%lf ",matris[i][j]);
		}
		printf("| %lf",c[i]);
		printf("\n");
	}

	int K=derece+1;
	for( t=0;t<K;t++){
		for( i=t;i<K;i++)
		
		{
			double bol=matris[i][t];
			for(j=0;j<K;j++){
				matris[i][j]=matris[i][j]/bol;
			}
			c[i]=c[i]/bol;
			if(i>t){
				for( k=0;k<K;k++){
					matris[i][k]=matris[i][k]-matris[t][k];
				}	
				c[i]=c[i]-c[t];
			}
		}
	}

	for(i=K-1;i>=0;i--)
	{
		double sum=c[i];
		for(j=i;j<K;j++)
		
		{
			sum=sum-matris[i][j]*kokler[j];
		}
		kokler[i]=sum/matris[i][i];
	}


	for(j=0;j<K;j++){
		printf("%d . kok = %lf \n",(j+1),kokler[j]);
	}
	
	
	
	printf("\ncikmak icin 0'a basiniz...");
	scanf("%lf",&dur);
	
	
	
	
return 0;
}









