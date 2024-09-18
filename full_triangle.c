//full triangle
#include<stdio.h>
int main(){
    int num;
    printf("enter no. of Rows you want");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num-i;j++){
        printf(" ");
        }
        for(int k=1;k<=i;k++){
        printf("* ");
        }
        printf("\n");
    }
    return 0;
}
