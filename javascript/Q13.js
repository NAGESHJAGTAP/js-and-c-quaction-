// 13. Check if the array arr = [1, 2, 3, 4, 5] contains the number 3 and print true or false.

let arr=[1,2,3,4,5];
let flag;
let len=arr.length;
for(i=0;i<len;i++){
    if(arr[i]==3){
   flag=1;
    }
}
if(flag==1){
    console.log("true")
}else{
    console.log("false");
}
