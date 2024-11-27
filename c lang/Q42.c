// 42. Given two lists of events. Each event is represented by a start time and an end time. You need to determine if the two events conflict, which means if the events overlap in time.

# include <stdio.h>
int main(){
    int arr1[]={1,5};
    int arr2[]={2,10};
     int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);
    int count;
    int i,j;
    for(i=arr1[0];i<arr1[len1-1];i++){
        for(j=arr2[0];j<=arr2[len2-1];j++){
            if(i==j){
                count++;
            }
        }
    }if(count==0){
        printf("false");
    }else{
        printf("true");
    }
}