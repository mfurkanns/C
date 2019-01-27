#include <stdio.h>

typedef struct book{
	
	char name[20];
	char author[20];
	char page[5];
		
};


int main(){
	
	int n,i,s;
	struct book *book_arr,kit;
	char x[20];	
	FILE *fp;
	
	fp=fopen("exp.data","wb+");
	
	
	printf("enter the number of books = ");
	scanf("%d",&n);
	
	book_arr=(struct book*)malloc(n*sizeof(struct book));
	
	for(i=0;i<n;i++){
		printf("%d.books name = ",i+1);
		scanf("%s",book_arr[i].name);
		printf("%d.books author = ",i+1);
		scanf("%s",book_arr[i].author);
		printf("%d.books page = ",i+1);
		scanf("%s",book_arr[i].page);
	}
	
	fwrite(book_arr,n,sizeof(struct book),fp);
	
	
	printf("");
	printf("which book ? = ");
	scanf("%d",&n);
	printf("\n");
	
	fseek(fp,(n-1)*sizeof(struct book),SEEK_SET);
	fread(x,1,20,fp);
	printf("name = %s\n",x);
	fread(x,1,20,fp);
	printf("author = %s\n",x);
	fread(x,1,5,fp);
	printf("page = %s",x);
	
	
	
	return 0;
}
