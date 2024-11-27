// 19. Check if the array arr = [1, 2, 3, 4, 5] is sorted in ascending order, and print true or false.
let arr = [1, 2, 3, 4, 5];
let len = arr.length;
let i;
let short;
for (i = 0; i < len - 1; i++) {
  if (arr[i] < arr[i + 1]) {
      short=1
  }}if(short==1){
    console.log("true");
  } else {
    console.log("false");
  }