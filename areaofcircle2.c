#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

// for testing only - do not change
void getTestInput(int argc, char* argv[], float* a, int* b)
{
  if (argc == 3) {
    sscanf(argv[1], "%f", a);
    sscanf(argv[2], "%d", b);
  }
}



// add your areaOfCircle function here - it must NOT printf, instead it must
// return the result to be printed in main
float areaOfCircle(float num1, float num2)
{
  float radius = num1 - num2;
  if (radius == 0);
    radius = fgets(input, 256, stdn);
  float area;
  area = (radius*radius)*M_PI;
  return area;
}

int main(int argc, char* argv[]) 
{
  // the two variables which control the number of times areaOfCircle is called
  // in this case 5.2, 6.2, 7.2
  float start = 5.2;
  int reps = 3;
  
  // for testing only - do not change
  getTestInput(argc, argv, &start, &reps);

  printf("calculating area of circle starting at %f, and ending at %f\n", start, start+reps-1);
  
  // add your code below to call areaOfCircle function with values between
  // start and end
for (float i = 0.0; i < reps; i++) {
  float var = i + 5.2;
  float r = areaOfCircle(var);
  printf("area of circle with radius %d is %d\n", var, r);
  var++;
}


  
}

