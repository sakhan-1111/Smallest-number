#include <stdio.h>
#include <conio.h>

int main()
{
    float x,y,z;
    printf("Enter the first number: ");
    scanf("%f",&x);
    printf("Enter the second number: ");
    scanf("%f",&y);
    printf("Enter the third number  : ");
    scanf("%f",&z);
    if(x<y){
        if(x<z){
        printf("%f is the smallest number",x);
        }
    }
    if(y<x){
        if(y<z){
        printf("%f is the smallest number",y);
        }
    }
    if(z<x){
        if(z<y){
        printf("%f is the smallest number",z);
        }
    }

    return 0;
}

