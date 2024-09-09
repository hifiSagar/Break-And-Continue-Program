// BREAK AND CONTINUE

/*WHEN WE GIVE THE NEGATIVE - INPUT NUMBERS THEN IT WILL STOP */
 
 /*BREAK PROGRAM FLOAT TYPE*/
// #include<stdio.h>
// void main(){
// int i;
// float number, sum=0;
// for(i=0;i<10;i++){
//     printf("Enter n %d: ",i+1);
//     scanf("%f", & number);
//     if(number<0){
//         break;

//     }
//     sum+=number;
//     printf("present sum : %f\n",sum);

// }
// printf("Total sum: %f\n",sum);
// }







// /*Continue program int type*/
// #include<stdio.h>
// void main(){
// int i;
// int number, sum=0;
// for(i=0;i<10;i++){
//     printf("Enter n %d: ",i+1);
//     scanf("%d", & number);
//     if(number<0){
//   continue;

//     }
//     sum+=number;
//     printf("present sum : %d\n",sum);

// }
// printf("Total sum: %d\n",sum);
// }




/*Continue program float type*/
#include<stdio.h>
void main(){
int i;
float number, sum=0;
for(i=0;i<10;i++){
    printf("Enter n %d: ",i+1);
    scanf("%f", & number);
    if(number<0){
  continue;

    }
    sum+=number;
    printf("present sum : %f\n",sum);

}
printf("Total sum: %f\n",sum);
}