/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main(){
    //Interchanging diagonals of a matrix
    int n;
    printf("Enter the size of square matrix:");
    scanf("%d",&n);
    //Matrix entry
    int a[n][n];
    printf("Matrix 1:\n");
    for(int i=0;i<n;i++){
        printf("Enter the row %d:",i+1);
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        int temp=a[i][i];
        a[i][i]=a[i][n-1-i];
        a[i][n-1-i]=temp;
    }
    printf("Interchanged Diagonals of Matrix are:\n")
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%7d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}