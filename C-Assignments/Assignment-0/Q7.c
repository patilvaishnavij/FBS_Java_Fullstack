#include<stdio.h>
void main(){
	int min=145,hr,remainmin;
	hr=min/60;
	remainmin=min%60;
	printf("hour=%d,rmin=%d",hr,remainmin);
}