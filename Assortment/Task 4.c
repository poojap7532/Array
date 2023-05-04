// Write C program  to perform diagonal sum of 2D array.//
#include<stdio.h>
//4 5 6
//5 6 7 
//6 7 8  

//6+6+6=18

//Write C program  to perform diagonal sum of 2D array//

int main(){
	int i,j,r,c,sum=0;

	printf("Enter row: ");
	scanf("%d",&i);
	
	printf("Enter column: ");
	scanf("%d",&j);
	
	int a[3][3];
		
	for(r=0; r<i; r++){
		for(c=0; c<j; c++){
			printf("Enter number[%d] : " ,r,c);
			scanf("%d",& a[r][c]);
		}
	}
	for(r=0; r<i; r++){
		sum =sum+a[r][r];
	}
	  printf("\n the sum of diagonal element : %d",sum);	
	return 0;
}


