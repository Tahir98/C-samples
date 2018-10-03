#include<stdio.h>

int temp;
int number;
int a;

int main(){		

	temp=20;
	number=temp;
	a=0;
	
	for(int i=0;i<number;){
		printSpaces(a);
		a++;
		printCharacters(number);
		number--;
		printf("\n");
	}
}


void printSpaces(int a){
	for(int j=0;j<a;j++){
		printf(" ");
	}
}

void printCharacters(int number){
		for(int x=0;x<number;x++){
			printf("\\");
		}
		
		for(int x=0;x<number;x++){
			printf("/");
		}
}
