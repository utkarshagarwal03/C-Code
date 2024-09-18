//Inverse right triangle
#include<stdio.h>
int main(){
    int num;
    printf("enter no. of Rows you want");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        for(int j=0;j<i;j++){
        printf(" ");
        }
        for(int k=1;k<=num-i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
