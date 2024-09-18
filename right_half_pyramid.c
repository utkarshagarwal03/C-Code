//right half pyramid
#include<stdio.h>
int main(){
    int num;
    printf("enter no. of Rows you want");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
        printf("*");
        }
        printf("\n");
    }
    return 0;
}
