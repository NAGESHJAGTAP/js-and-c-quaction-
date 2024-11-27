// 3. Write a function that takes three sides of a triangle and checks whether the triangle is equilateral, isosceles, or scalene.
function tri(a, b, c){
    if(a==b&&b==c){
        console.log("equilateral")
    }else if(a==b||b==c){
        console.log("isoscale")
    }else{
        console.log("scalen")
    }
}
tri(12,12,68)



