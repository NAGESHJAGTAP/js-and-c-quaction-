//37.  Given a sorted array and a target value, return the starting and ending position of that target in the array.Example:Input: [5, 7, 7, 8, 8, 10], target=8 ,Output: [3, 4];

# include <stdio.h>
int main(){
    int arr[]={5,7,7,8,8,10};
    int len=sizeof(arr)/sizeof(arr[0]);
    int target=8;
    int i;
    for(i=0;i<len;i++){
        if(arr[i]==target){
           printf("%d",i);
           
        }
    }
}