// WAP to check wheather the number is present or not using linear search
#include<stdio.h>
int arr[100];
 int linear_search(int arr[],int num, int key){ // function for linear search
	for(int i=0;i<num;i++)
		if(arr[i] == key)
			return i;
		return -1 ;
	
}
void print(int arr[], int num){ // function created
	for(int i=0;i<num;i++){
		printf("%d",arr[i]);
		printf(" ");
	}
}
int main(){
	int num;
	int key;
	printf("Enter the Size of an ARRAY:\n");
	scanf("%d",&num);
	printf("Enter the element of an ARRAY:\n");
	for(int i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}
	print(arr,num); // function calling
	printf("\n Enter the key to search \n");
	scanf("%d",&key);
    
	int result = linear_search(arr, num, key); // function call
	
	if(result == -1){
		printf("\n Element is not present");
	}else
	    printf("\n Element is present at index %d", result);
	
	return 0;
}
