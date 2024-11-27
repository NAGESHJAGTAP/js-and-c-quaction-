// 3. Write a function that takes three sides of a triangle and checks whether the triangle is equilateral, isosceles, or scalene.


# include <stdio.h>
int main(){
	int  a,b,c;
	printf("enter the numbet");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a==b&&b==c){
		printf("equilateral");
	}else if(a==b||b==c){
		printf("isoscale");
	}else{
		printf("scalar");
	}
	
}






















