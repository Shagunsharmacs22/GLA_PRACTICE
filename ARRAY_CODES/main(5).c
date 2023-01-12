/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
//Multiplication of 2 matrices
int main(){
    int n1,m1,n2,m2;
    printf("Enter the size of row and column:");
    scanf("%d %d",&n1,&m1);
    int a[n1][m1];
    printf("MATRIX 1:-\n");
    for(int i=0;i<n1;i++){
        printf("Enter the row %d:",i+1);
        for(int j=0;j<m1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the size of row and column:");
    scanf("%d %d",&m2,&n2);
    int b[m2][n2];
    printf("MATRIX 2:-\n");
    for(int i=0;i<m2;i++){
        printf("Enter the row %d:",i+1);
        for(int j=0;j<n2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    //Matrices are n1*m1 and m2*n2
    int c[n1][n2];
    printf("check=%d\n",c[0][0]);
    int sum=0,i,j,k;
    if(m1!=m2){
        printf("Multiplication of matrices is not possible");
    }
    else{
        for(i=0;i<n1;i++){
            for(j=0;j<n2;j++){
                sum=0;
                for(k=0;k<m1;k++){
                    sum=sum+(a[i][k]*b[k][j]);
                }
                c[i][j]=sum;
            }
        }
        printf("Matrix 1 * Matrix 2:\n");
        for(i=0;i<n1;i++){
            for(j=0;j<n2;j++){
                printf("%7d ",c[i][j]);
            }
            printf("\n");
        }

    }
    return 0;
}