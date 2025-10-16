#include<stdio.h>

int main(){
	

 int arr[5];
 int i,shift;
 
 printf("enter 5 integer: ");
 for(i=0;i<5;i++){
 	scanf("%d",&arr[i]);
 }

shift = arr[4];

for(i=4;i>0;i--){
	arr [i]= arr[i-1];
}  
  arr[0]= shift;
  
 printf("shift array : ");
 for(i=0;i<5;i++){
 	printf("%d ",arr[i]);
 }
 		   
		   
		   
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//	int i, arr[] = {0,-1,4,2,5,6,9};
//	char str[] = "hello";
//for (int i = 0; i<5; i++) {  
//     printf("c\n",i,str[i]);
// }
//    str[0]='J';
//    for (int i = 0; i< 5; i++) {
//		printf("%c\n",i,str[i]);	


// char str[100];  
// printf("enter a string:");
// scanf("%[^A-ZA-z]",str);
//  printf("you entered: %s\n",str);
 	                                                                                                                                                                                                                            
	return 0;
}











