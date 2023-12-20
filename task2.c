/*
Q.2 Write a Program to find the length of the String by passing a string as an argument using UDF.For example,
Input:
Enter any string: development

Output:
Length is: 11
*/
#include<stdio.h>
#include<string.h>

int len(){
	
	char a[100];
	int i;
	
	printf("enter value :-");
	gets(a);
	
	for(i=0; i<a[i]; i++){
		printf("%d ",i);
	}
}
void main(){

	
	len();
}
