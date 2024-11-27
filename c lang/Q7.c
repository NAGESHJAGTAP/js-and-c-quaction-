// 7. Write a function that simulates a traffic light system. The function should take the current light color (red, yellow, green) as input and print the corresponding action:
// "red" → "Stop"
// "yellow" → "Slow down"
// "green" → "Go"


#include <stdio.h>

void traffic_light(char *color){
 
    if (color== "red") {
        printf("Stop\n");
       
    } else if(color== "yellow") {
        printf("Slow down\n");
        
    } else if(color== "green"){
        printf("Go\n");
       
    } else {
        printf("Invalid \n");
    }
}

    int main() {
        printf("enter the colour :");
        scanf("%d",& traffic_light);
    traffic_light("red");  
      
    return 0;

}
