//Inverse Left triangle
#include<stdio.h>
int main(){
    int num;
    printf("enter no. of Rows you want");
    scanf("%d",&num);
    for(int i=num;i>0;i--){
        for(int j=1;j<=i;j++){
        printf("*");
        }
        printf("\n");
    }
    return 0;
}
