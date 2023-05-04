#include<stdio.h>
// Write C program to print all negative elements in an array.//
int main(){
	int n;
	printf("Enter Size: ");
	scanf("%d",&n);
	
	int a[n],i;
	
	for(i=0 ; i<n ; i++){
		printf("Enter Value [%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if (a[i]<0) {
			printf("%d ",a[i]);
		}
		printf("\n");
		}
	
	
	return 0;
}
