#include<stdio.h>
int main(){
	int count=0;
	unsigned int n=0;
	printf("input=");
	scanf("%u",&n);
	for(int i=n*100;i>=0;i--){
		for(int j=n*50;j>=0;j--){
			for(int k=n*20;k>=0;k--){
				if(i+j*2+k*5==n*100)
					count++;
			}
		}
	}
	printf("output=%d",count);
	return 0;
}
