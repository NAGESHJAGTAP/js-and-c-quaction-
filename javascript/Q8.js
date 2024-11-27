// Find the Average of an Array. Example: Input: arr=[1,2,3,4,5]; Output: 3
let arr=[1,2,3,4,5]
let len=arr.length
let i=0;
let sum=0;
let avg;
for(i=0;i<len;i++){
    sum=sum+arr[i]
    avg=sum/len
}

console.log(avg)