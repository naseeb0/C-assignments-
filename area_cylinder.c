#include<stdio.h>  
  
int main()  
{  
    const float PI = 3.14;  
          float r, h, Area;  
  
    printf("Enter Radius and height \n");  
    scanf("%f%f", &r, &h);  
  
    Area = (2 * PI * r * h) + (2 * PI * r * r);  
  
    printf("Area of Cylinder:  %f\n", Area);  
  
    return 0;    		
}  
