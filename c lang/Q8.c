// 8. Find the Average of an Array.
# include <stdio.h>
int main(){
	int arr[]={1,2,3,4,5};
	int i=0;
	int sum;
	int len=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<len;i++){
		sum=sum+arr[i];
		int avg=sum/len;
	
		printf("%d",avg);
	}
		
}
