#include <stdio.h>

int index;
int d;
int control;
int size;

int main() {	

	index=0;
	d=2;
	control=0;

	printf("Enter the number of prime numbers you want to calculate:");
	scanf("%d",&size);
	
	if(size<1){
		while(size<1){
			printf("Please enter a number greater than 0:");
			scanf("%d",&size);
		}
		
	}
	int primeNumberArray[size];
	primeNumberArray[0]=0;
	
	while(index!=size){
		if(d==2){
			primeNumberArray[index]=d;
			index++;
			d++;
			continue;
		}
		for(int i=0;i<index || d==2 ;i++){
	
			if(d%primeNumberArray[i]==0){
				control=1;
				break;
			}	
		
		}
		if(control==0){
			primeNumberArray[index]=d;
			index++;
		}else{
			control=0;
		}
		
		d++;	
	}

	for(int i=0;i<size;i++){
		printf("%d ",primeNumberArray[i]);
		
		if(i%25==24){
			printf("\n");
		}
	}
		
	return 0;
}

