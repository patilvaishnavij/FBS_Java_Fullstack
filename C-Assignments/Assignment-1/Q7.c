#include<stdio.h>
void main(){
	int basic=9000;
	int da,ta,hra;
	
	if(basic<=5000){
		da=(10*basic)/100;
		ta=(20*basic)/100;
		hra=(25*basic)/100;
		printf("da=%d,ta=%d,hra=%d",da,ta,hra);
	}
	
	else{
		da=(15*basic)/100;
		ta=(25*basic)/100;
		hra=(30*basic)/100;
		printf("da=%d,ta=%d,hra=%d",da,ta,hra);
	}
}