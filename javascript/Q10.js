// 10. Given an array of integers, count how many numbers are even and how many are odd.
// Example:
// Input: [1, 2, 3, 4, 5]
// Output: Even: 2, Odd: 3
let arr=[1,2,3,4,5];
let i=0;
let even=0;
let odd=0;
let len=arr.length;
for(i=0;i<len;i++){
    if(arr[i]%2==0){
      even++
    }else{
        odd++
    }
}
console.log(even, odd)