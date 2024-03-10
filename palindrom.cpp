#include<stdio.h>
int main(){
	 long n, num, rev;
	int digit;
	printf("Enter the number you want to checked \n");
	scanf("%ld",&num);
	n = num;
	do{
		digit = num%10;
		rev = rev*10+digit;
		num = num/10;
		
	} while (num != 0);
	if(n==rev){
		printf("The entered number is Palindrome \n");
		
	}else{
		printf("The Entered Number is not a palindrome");
	}
	return 0;
	
	
}
