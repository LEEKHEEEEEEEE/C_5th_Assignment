#include <stdio.h>


void main (){


 int pa[100][100]={0}, h, i, j;
 scanf("%d", &h);
 pa[1][1]=1; 
 for(i=2;i<=h+1;i++)   
 {
  for(j=2;j<=i;j++){    pa[i][j]=pa[i-1][j]+pa[i-1][j-1];  }
 }


 for(i=2;i<=h+1;i++)  {
  for(j=2;j<=i;j++){
   printf("%d", pa[i][j]); 
  }
  printf("\n");
 }
}

