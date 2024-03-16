 #include <stdio.h>

 void lower (int a[3][3], int r, int c)
 {
 for(int i = 0; i < r; i++)
 {
 	for(int j = 0; j < c; j++)
 	{
 	if(i > j)
 		printf("0");
 	else
 	printf("%d" , a[i][j]);
 	printf(" ");
 	}
 	printf("\n");
 }
 }

 void upper (int a[3][3], int r, int c)
 {
 for(int i = 0; i < r; i++)
 {
 	for(int j = 0; j < c; j++)
 	{
 	if(i < j)
 		printf("0");
 	else
 	printf("%d" , a[i][j]);
 	printf(" ");
 	}
 	printf("\n");
 }
 }
 int main() {
    
 int i,j,r = 3, c = 3;
 int a[3][3] ;

 printf("Enter the matrix : ");

 for(i=0;i<3;i++)
 {
     for(j=0;j<3;j++)
         scanf("%d",&a[i][j]);
 }
 printf("\nLower Triangular Matrix is :\n");
 lower(a, r, c);
 printf("\nUpper Triangular Matrix is :\n");
 upper(a, r, c);
 	return 0;
 }