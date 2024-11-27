// 9. Sort an Array in Ascending Order Example: Input: nums = [4,2,8,5,1]; Output: nums = [1,2,4,5,8].

# include <stdio.h>
int main(){
	int arr[]={4,2,8,5,1};
	int i,j;
	int temp=0;
	int len=sizeof(arr)/sizeof(arr[0]);
	for(j=0;j<len-1;j++){
		for(i=0;i<len-1;i++){
			if(arr[i]>arr[i+1]){
				temp=arr[i+1];
				arr[i+1]=arr[i];
				arr[i]=temp;
			}
		}
	}
	for(i=0;i<len;i++){	
printf("%d",arr[i]);}
}
   