// Write a program to repeat a string a specified number of times.Example: Input: ("hello", 3), Output: "hellohellohello".
let str = "hello";
let newstr = "";
for (let i=0;i<3;i++) {
  newstr+=str;
}

console.log(newstr);
