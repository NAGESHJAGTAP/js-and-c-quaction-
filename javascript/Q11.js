// 11. Remove duplicate elements from the array arr = [1, 2, 2, 3, 4, 4, 5] and print the updated array.
let arr = [1, 2, 2, 3, 4, 4, 5];
let newArr = [...new Set(arr)];

console.log(newArr);
