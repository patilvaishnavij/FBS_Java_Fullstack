#include<stdio.h>
void main(){
	int num=120;
	int d1,d2;
	d1=num%10;
	d2=num/10;
	if(d1==d2){
		printf("num is pallindrome");
	}
		else{
			printf("num is not pallindrome");
		}
	
}