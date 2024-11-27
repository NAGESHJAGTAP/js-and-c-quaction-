// 16. Check if all the elements in arr = [3, 5, 9, 1, 7] are positive numbers, and print true or false.
let arr=[3,5,9,1,7];
let len=arr.length;
let i;
let flag;
for(i=0;i<len;i++){
    if(arr[i]>0){
    flag=1;
    }
}
if(flag==1){
    console.log("true")
}else{
    console.log("false")
}