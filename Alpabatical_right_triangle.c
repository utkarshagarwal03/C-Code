//Alpabatical right triangle
#include<stdio.h>
int main(){
    int num;
    printf("enter no. of Rows you want");
    scanf("%d",&num);
    int a=64;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            printf("%c",a+j);
        }
        printf("\n");
    }
    return 0;
}
