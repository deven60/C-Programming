#include<stdio.h>
#include<math.h>
int main(){
	int num,oNum,rem,result = 0 ; 
	printf("Enter the integer");
	scanf("%d",&num);
	
	
	oNum = num;
	
 		while(oNum != 0){
 			rem = oNum%10;
 			result = result+rem*rem*rem;
 			
 			oNum = oNum%10;
		 }
		 if(result == num){
		 	printf("%d is an armstrong number",num);
		 	
		 }else{
		 	printf("%d is not armstrong number",num);
		 }
		 
		 return 0;
}
