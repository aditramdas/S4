/*Multiplcation of matrices with function
Name : Adith Ramdas
Class : S2CS2
Date : 01/07/2022*/

#include <stdio.h>
void read(int A[][100] , int B[][100], int m , int n, int p, int q);
 void multiply(int A[][100] , int B[][100], int m , int n, int p, int q, int C[][100]);
  void output(int C[][100] , int m ,int q);
 int main(void)
 {
 	int A[100][100] , B[100][100], C[100][100] , m, n, p, q;	
 	printf("Enter rows and columns in first matrix: ");
 	scanf("%d %d" , &m, &n);
 	printf("Enter rows and colums in second matrix: ");
 	scanf("%d %d" , &p, &q);
 	if(n == p)
 	{
 		read(A , B , m , n, p, q);
 		multiply(A , B , m , n, p, q , C);
 		output(C , m , q);
 	}

 }
 void read(int A[][100] , int B[][100], int m , int n, int p, int q)
 {
 	printf("Enter numbers in first matrix: ");
 	for(int i = 0 ; i< m ; i++)
 		for(int j = 0 ; j < n ; j++)
 			scanf("%d" , &A[i][j]);
 	printf("Enter numbers in second matrix: ");
 	for(int i = 0 ; i< p ; i++)
 		for(int j = 0 ; j < q ; j++)
 			scanf("%d" , &B[i][j]);
 }

 void multiply(int A[][100] , int B[][100], int m , int n, int p, int q, int C[][100])
 {
 	for(int i = 0 ; i < m ; i++)
 		for(int j = 0 ; j < q  ; j++)
 			for(int k = 0 ; k< n ; k++)
 				C[i][j] += A[i][k]*B[k][j]; 
 		
 	
 }
 void output(int C[][100] ,int m ,int q)
 {
 	for(int i = 0 ; i< m ; i++){
 		for(int j = 0 ; j < q ; j++)
 			printf("%d\t", C[i][j]);
 		printf("\n");
 	}
 }
