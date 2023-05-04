#include<stdio.h>
//WAP to get & print 2D array of N elements..............//
int main(){
//0  0 1 2  -R
//1  1 2 3....
//2  4 5 6....
//-
//C	
	
	int n;
	printf("enter size of array: ");
	scanf("%d",&n);
	
	int a[n][n],i,j;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("enter element: ");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
