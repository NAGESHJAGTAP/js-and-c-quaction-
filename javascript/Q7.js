// 7. Write a function that simulates a traffic light system. The function should take the current light color (red, yellow, green) as input and print the corresponding action:
// "red" → "Stop"
// "yellow" → "Slow down"
// "green" → "Go"

const red = "red";
const yellow = "yellow";
const green = "green";

function traffic_light(color){
    if(color == red){
        console.log("stop")
    }else if(color == yellow){
        console.log("slow down")
    }else if(color == green){
        console.log("go")
    }
}
traffic_light(prompt("enter the color:"))