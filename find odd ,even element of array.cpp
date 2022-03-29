#include<stdio.h>
int main(){
	
	int arr[10],i,even=0,odd=0;
	for(i=1;i<=10;i++){
		printf("enter value for arr[%d]",i);
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		even++;
		odd++;
	}
	printf("even=%d & odd=%d",even,odd);
	return 0;
	
}
