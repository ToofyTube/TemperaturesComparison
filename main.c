#include <stdio.h>

int main(void) {
  char warm;
  char cold;
  char mixed;
  float temperatura1;
  float temperatura2;
  float temperatura3;
  float temperatura4;
  float temperatura5;
  float avrage;

  printf("Enter temperature 1 (between -30 and 130): ");
  scanf("%f", &temperatura1);
  while (temperatura1 < -30 || temperatura1 > 130) {
    printf("EXCEPTION Temperature %f is invalid, Please enter a valid temperature between -30 and 130\n", temperatura1);
      scanf("%f", &temperatura1);
  }
  printf("Enter temperature 2 (between -30 and 130): ");
  scanf("%f", &temperatura2);
  while (temperatura2 < -30 || temperatura2 > 130) {
    printf("EXCEPTION Temperature %f is invalid, Please enter a valid temperature between -30 and 130\n", temperatura2);
      scanf("%f", &temperatura2);
  }

  printf("Enter temperature 3 (between -30 and 130): ");
  scanf("%f", &temperatura3);
  while (temperatura3 < -30 || temperatura3 > 130) {
    printf("EXCEPTION Temperature %f is invalid, Please enter a valid temperature between -30 and 130\n", temperatura3);
      scanf("%f", &temperatura3);
  }

  printf("Enter temperature 4 (between -30 and 130): ");
  scanf("%f", &temperatura4);
  while (temperatura4 < -30 || temperatura4 > 130) {
    printf("EXCEPTION Temperature %f is invalid, Please enter a valid temperature between -30 and 130\n", temperatura4);
      scanf("%f", &temperatura4);
  }

  printf("Enter temperature 5 (between -30 and 130): ");
  scanf("%f", &temperatura5);
  while (temperatura5 < -30 || temperatura5 > 130) {
    printf("EXCEPTION Temperature %f is invalid, Please enter a valid temperature between -30 and 130\n", temperatura5);
      scanf("%f", &temperatura5);
  }

  if (temperatura1 > temperatura2 && temperatura2 > temperatura3 && temperatura3 > temperatura4 && temperatura4 > temperatura5) {
        printf("Getting cooler\n");
    } else if (temperatura1 < temperatura2 && temperatura2 < temperatura3 && temperatura3 < temperatura4 && temperatura4 < temperatura5) {
        printf("Getting warmer\n");
    } else {
        printf("It's a mixed bag\n");
    }

  
  printf("OUTPUT 5-day Temperature: [%.1f, %.1f, %.1f, %.1f, %.1f]\n", temperatura1, temperatura2, temperatura3, temperatura4, temperatura5);
  
avrage = ((temperatura1 + temperatura2 + temperatura3 + temperatura4 + temperatura5) / (5.0) );
printf("OUTPUT 5-day Average Temperature: %f\n", avrage);

           return 0;
}
//create class for temprature1-temprature5
//create class for each temprature ranging from -30 to 130
//create a while that will run 5 times if the tenptirtue is from -30 to 130 
//tell me if the wather is getting warmer, getting cooler , or if it's a mixed bag with if statement
//create a statement that will print the tempratures
//create a statement that will add the 5 weathers and tgeb devide by 5 to get the average