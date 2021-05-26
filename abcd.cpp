#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int c[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	
	
	int i,j;
	printf ("the input elements in the matrix are :\n");
	
	for (int i = 0; i < 3; ++i)
  {
    for (int j = 0; j < 3; ++j)
    
      {
        printf("element-[%d],[%d] = %d\n", i, j,  c[i][j]);
      }
    }
    
    
    printf("\n\n\nthe matrix is\n\n");
    
  for (int i = 0; i < 3; ++i)
  {
    for (int j = 0; j < 3; ++j)
    
      {
        printf("  %d  ",c[i][j]);
      }
      printf("\n");
    }
    
    
    
    return 0;
}
