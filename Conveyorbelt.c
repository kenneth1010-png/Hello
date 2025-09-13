//stdio.h used for the compiler to include the standard input output library.
#include <stdio.h>
#include <stdbool.h>

//The main fuction is the entrypoint of the program. Return 0 is used as an exit code, where values of non-zero indicates error.
int main(void){
//defining the motor max weight capacity
    float moter = 5.6;
    float packages = 0.0f;
    float motors = 0.0f;

//prompts the user to tell how many motors are carrying the packages.
//printf is used for printing text.
printf("How many motors are carrying the packages?: ");
scanf("%f", &motors);

//prompts the user to tell how many kg of packages we expect.
printf("How many kg of packages do we expect?: ");
scanf("%f", &packages);

//defining the true or false capacitycheck status
bool capacitycheck;
float weight = 0.0f;

weight = packages / motors;

if(weight < moter){
    capacitycheck = 1;
}
else {
    capacitycheck = 0;
}

if(capacitycheck){
    printf("Yes! The conveyor belt can carry the packages");
}
else{
    printf("No. The conveyor belt cannot carry the packages");
}
return 0;
}