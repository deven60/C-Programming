#include<stdio.h>
int main(){
	float area,r;
	float pi = 3.1415;
	printf("Enter the radius of the circle");
	scanf("%f",&r);
	area = pi*r*r;
	printf("The are of the circle is:%f",area);
	return 0;
	
}
