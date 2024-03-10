#include<stdio.h>
int main(){
	int t1 = 0 ,t2 = 1 ,i,n;
	int nT = t1+t2;
	printf("Enter the number of terms");
	scanf("%d",&n);
	
	printf("FibonacciSeries :\n %d \n %d \n",t1,t2);
	for(i=3;i<=n;++i){
		printf("%d \n",nT);
		t1 = t2;
		t2 = nT;
		nT = t1+t2;
				
	}
	return 0;
	
}
