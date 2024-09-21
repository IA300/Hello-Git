#include<stdio.h>
#include<math.h>

int test(){
	int num1=rand()%6+1;
	int num2=rand()%6+1;
	printf("test:%d+%d=%d\n",num1,num2,num1+num2);
	return num1+num2;
	
}

int main(){
	unsigned int _input=0;
	int pre = 0;
	printf("输入种子:");
	scanf("%u",&_input);
	srand(_input);
	int now=test();
	if(now==7||now==11){
		printf("Win!game over!\n");
		return 0;
	}
	else if(now==2||now==3||now==12){
		printf("Lose!game over!\n");
		return 0;
	}
	else{
		pre = now;
	}
	while(1){
		now=test();
		if(now==pre){
			printf("Win!game over!\n");
			return 0;
		}
		else if(now==7){
			printf("Lose!game over!\n");
			return 0;
		}
		pre=now;
		
	}
	
	return 0;
}
