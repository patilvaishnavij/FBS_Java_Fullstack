#include<stdio.h>
void main(){
	int yr=1616;
	if(yr%4==0 && yr%100!=0 || yr%400==0){
		printf("year is leap");
	}
	else{
		printf("year is not leap");
	}
}