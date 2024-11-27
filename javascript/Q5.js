// 5. Write a function that checks if a person is eligible to vote. The person is eligible if they are 18 years old or older.
function person_age(num){
    if(num>=18){
        console.log("true")
    }else{
        console.log("false")
    }
}
person_age(prompt("enter the age:"))