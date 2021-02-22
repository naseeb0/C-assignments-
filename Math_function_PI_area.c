#include<stdio.h>
#include<math.h>
int main(){
    float Area_C,Area_S,l,r;
    printf("Enter Length of Square");
    scanf("%f",&l);
    printf("Enter Radius of circle");
    scanf("%f",&r);
    Area_C = M_PI*r*r;
    Area_S = l*l;
    printf("Area of Circle= %.2f\n",Area_C);
    printf("Area of Square = %.2f\n",Area_S);
    return 0;
}
