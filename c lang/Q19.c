// 19. Check if the array arr = [1, 2, 3, 4, 5] is sorted in ascending order, and print true or false.
# include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6};
    int len=sizeof(arr)/sizeof(arr[0]);
    int i;
    int flag=1;
    for(i=0;i<len-1;i++){
    if(arr[i]>arr[i+1]){
  flag=0;     
    }
}if(flag==1){
    printf("true");
}else{
    printf("false");
}
}


