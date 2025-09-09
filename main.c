#include <stdio.h>

int Control(int altitude) {
  int thruster = 0;
  //if the altitude is above 100 then we have no thrust.
if (altitude >= 100)
  thruster = 0;
//if the altitude is under 100 then we have thrust.
else if (altitude > 0 && altitude < 100)
  thruster = 1;
//at last the we only option or situation we have is altitude equal to 0 which means no thrust and we have lande.
else { 
  thruster = 0;
}

  return thruster;
}

void Test(int altitude) {
  int thruster = Control(altitude);
  int behaviorCorrect = (altitude > 100 && thruster == 0) ||
                        (altitude <= 100 && altitude > 0 && thruster == 1) ||
                        (altitude <= 0 && thruster == 0);
  char *behaviorCorrectIcon = behaviorCorrect ? "y" : "n";
  printf("For altitude %3d, your thruster is %d |%s|\n", altitude, thruster,
         behaviorCorrectIcon);
}

int main(void) {
  Test(150);
  Test(100);
  Test(50);
  Test(0);
  Test(-1);
}