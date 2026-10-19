//Write a program to check whether a given character is uppercase or lowercase.

#include<stdio.h>
void main(){
	char ch='A';
	
	if(ch>='a'&& ch<='z'){
		ch=ch+32;
		printf("char is lowercase");
	}
	else{
		ch=ch-32;
		printf("char is uppercase");
	}
}