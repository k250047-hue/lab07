#include<stdio.h>

int main(){
	
	int arr[10],num,count=0,i;
	printf("Enter 10 number: ");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("search a number");
	scanf("%d",&num);
	for(i=0;i<10;i++){
		if(num==arr[i]){
			count++;
		}
	}
	if(count==0){
		printf("Number not found");
	}
	else {
	
	    printf("%d %d times occurred ",num,count);}
	
	
	
	
	
	return 0;
}
