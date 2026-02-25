/*Make a program as you give input of marks and program gives grade as output*/

#include <stdio.h>

int main(){
    
    int marks;
    printf("Enter Marks:\n");
    scanf("%d",&marks);

    if(marks<=100 && marks>=90){
        printf ("Your Grade is %c",'A');}

    else if(marks>=80){
        printf ("Your Grade is %c",'B');}
    
    else if(marks>=70){
        printf ("Your Grade is %c",'C');}
     
    else if(marks>=60){
        printf ("Your Grade is %c",'D');}   
    
    else if(marks>=50){
        printf ("Your Grade is %c",'E');} 

     else  {
        printf ("Your Grade is %c",'F');} 

    return 0;
}