// 9. Sort an Array in Ascending Order Example: Input: nums = [4,2,8,5,1]; Output: nums = [1,2,4,5,8].
let arr = [4, 2, 8, 5, 1];
let len = arr.length;
let temp;

for (let i = 0; i < len; i++) {
    for (let j = 0; j < len - 1; j++) {
        if (arr[j] > arr[j + 1]) {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}

console.log(arr);