// Write C program  to perform anti-diagonal sum of 2D array .//
#include<stdio.h>
//2 3 4
//2 3 4 
//4 5 6

//4+3+4=11

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
	for(c=0; c<i; c++){
		sum =sum+a[c][c];
	}
	  printf("\n the sum of diagonal element : %d",sum);
	return 0;
}

