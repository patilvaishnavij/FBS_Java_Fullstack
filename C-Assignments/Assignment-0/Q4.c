#include<stdio.h>
void main(){
	int num1=20;
	int num2=10;
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
	printf("numbers after swaapping num1=%d,num2=%d",num1,num2);
}