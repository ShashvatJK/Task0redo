#include<stdio.h>
main(){
	//inputting the array size and values
	int size;
	printf("Enter array size:\n");
	scanf("%d",&size);
	int array[size];
	printf("Enter array values:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	//sorting algorithm
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(array[j]>array[i]){
				int temp=array[j];
				array[j]=array[i];
				array[i]=temp;
			}
		}
	}
	//outputting the sorted array0
	printf("The sorted array:\n");
	for(int i=0;i<size;i++){
		printf("%d|",array[i]);
	}
}
