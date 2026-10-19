#include<stdio.h>
void main(){
	int sub1=90,sub2=95,sub3=85,sub4=80,sub5=94,tmarks,allmarks=500;
	float percentage;
	tmarks=sub1+sub2+sub3+sub4+sub5;
	percentage=(tmarks/(float)allmarks)*100;
	printf("totalmarks=%d ,percentage=%.2f",tmarks,percentage);
	
}