#include<stdio.h>
int main()
{
    float A,B;
    float D,M,CM, MM;
    printf("this is the new file");
    printf("Enter speed in km/h:");
    scanf("%f",&A);
    printf("\n Enter time in hours:");
	scanf("%f",&B);
	D= A * B;
    M= D * 1000;
    CM= D * 100000; 
    MM=D * 1000000;
   printf("\n Conversion Results ---");
   printf("\n Distance in kilometer:%.2f",D);
   printf("\n Distance in Meters:%.2f",M);
   printf("\n Distance in centimeter:%.2f",CM);
   printf("\n Distance in millimeter:%.2f", MM);
   return 0;
}
