// 33. Write a program that takes a year as input and checks whether it is a century year (a year divisible by 100).
# include <stdio.h>
int main(){
  int year;
  printf("enter thr year:");
  scanf("%d",&year);
  if(year%100==0){
      printf("true");
  }else{
      printf("false");
  }
}