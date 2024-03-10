#include<stdio.h>
int fun();
int var = 10;
int main(){
	printf("%d",var);
	fun();
	return 0;
}
int fun(){
	printf("%d",var);
}
