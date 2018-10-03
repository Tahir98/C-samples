#include<stdio.h>

int temp;
int number;
int a;
int control=0;

int main(){		

	temp=50;
	number=temp;
	a=0;
	for(int i=0;i<number;){
		printSpaces(number-1);
		number--;
		printCharacters(a+1);	
		a++;
		
		printf("\n");
		
		if(i==number){
			control=1;
		}	
	}
	
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
	if(control==0){
		for(int x=0;x<number;x++){
			printf("/");
		}
		
		for(int x=0;x<number;x++){
			printf("\\");
		}
				
	}else if(control==1){
		for(int x=0;x<number;x++){
			printf("\\");
		}
		
		for(int x=0;x<number;x++){
			printf("/");
		}
			
	}
}
