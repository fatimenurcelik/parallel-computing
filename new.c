#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char*argv[])
{
 int **a;
 int **b;
 int **transposeB;
 int **mul;
 int i,j,k,limit;
 limit=atoi(argv[1]);
 struct timeval start,stop; 

 a=(int**)malloc(sizeof(int*)*limit);
 for(i=0;i<limit;i++){
 	a[i]=(int*)malloc(sizeof(int*)*limit);
 	for(j=0;j<limit;j++){
 		a[i][j]=rand();
		printf(a[i][j]);
 	} 
 }
