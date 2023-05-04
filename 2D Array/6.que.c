#include<stdio.h>
//.WAP to perform diagonal sum of 2D array

//1 2 3 
//4 5 6
//7 8 9

//1+5+9=15

int main(){
	int a[3][3];
	int i,j,c,r;
	int sum=0;                              
	
	printf("Enter row : ");
	scanf("%d",&i);
	
	printf("Enter column : ");
	scanf("%d",&j);
	
	for(r=0; r<i; r++){
		for(c=0; c<j; c++){
			printf("Enter number[%d] :",r,c);
			scanf("%d",&a[r][c]);
		}
	}
	for(r=0; r<i; r++){
		sum =sum+a[r][r];
	}
	  printf("\n the sum of diagonal element : %d",sum);
	  
	return 0;
}
