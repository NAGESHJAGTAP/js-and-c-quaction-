// 2. Write a function to determine whether a given number is positive, negative, or zero.
function determine(num){
    if(num>0){
        console.log("positive")
    }else if(num<0){
        console.log("negative")
    }else{
        console.log("zero")
    }
}
determine(prompt("enter the number:"))