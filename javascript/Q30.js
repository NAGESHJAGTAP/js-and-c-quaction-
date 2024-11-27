// 29.Write a program to find all pairs in an array whose sum is equal to a given number.
// Example 1:  Input: nums = [2,7,11,15], target = 9 , Output: [0,1].

let arr=[1,2,3,4,5,6];
let len=arr.length;
let i;
let even=0;
let odd=0;
for(i=0;i<len;i++){
    if(arr[i]%2==0){
        even=even+arr[i]
    }else{
        odd=odd+arr[i]
    }
}
console.log(even ,odd)