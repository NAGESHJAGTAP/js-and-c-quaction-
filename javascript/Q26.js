// 26. Write a program to check if a string ends with a specific character.Example: Input: ("codinggita", "a"), Output: true.
let str="codinggita";
let len=str.length;
let i=0;
for(i=0;i<len;i++){
    if(str[len-1]=='a'){
        console.log("true")
        break;
    }else{
        console.log("false")
    }
}