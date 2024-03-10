#include<stdio.h>
int main(){
	float var1 = 3.1415926535897932;
	double var2 = 3.1415926535897932;
	long double var3 = 3.1415926535897;
	
		
	printf("%d \n",sizeof(float));
	printf("%d \n",sizeof(double));
	printf("%d \n",sizeof(long double));
	
	printf("%.16f \n",var1);
	printf("%.16lf \n",var2);
	printf("%.18Llf \n",var3);
	
	return 0;	
}
