// 29.Write a program to find all pairs in an array whose sum is equal to a given number.
// Example 1:  Input: nums = [2,7,11,15], target = 9 , Output: [0,1].
let nums=[2,7,11,15];
let target=9;
let len=nums.length;
let i ,j;
for(i=0;i<len;i++){
    for(j=i+1;i<len;i++){
        if(nums[i]+nums[j]==target){
            console.log(i,j)
        }
    }
}