#include<stdio.h>
#include<stdlib.h>                                         
#define MAX 10000000
#include<time.h>

int a[MAX];
clock_t start,end;
int sel(int n,int a[]){
           int min=0;
	for(int i=0;i<=n-2;i++){
		int min=i;
		for(int j=i+1;j<=n-1;j++){
			if(a[j]<a[min])
		           min=j; 
	            }
		
		int temp=a[i];
		a[i]=a[min];
		a[min]=temp;
           }
}
int main(){
	int n;
	printf("ENter number of elements:");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
a[i]=rand()%(n*2);
}
start=clock();
sel(n,a);	           
end=clock();
printf("Time taken: %lfms\n",(double)(end-start)/(double)(CLOCKS_PER_SEC)*1000);
return 0;		
}
		
			
	
	
