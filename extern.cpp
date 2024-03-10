#include<stdio.h>

 int a = 10;
int main(){
	extern int a;
		printf("The value of a is : %d",a);
		return 0;
}
