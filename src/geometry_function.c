#include "geometry.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void area_of_circle(circle Disk) {
  printf("Area = %.3f\n", (M_PI * 2 * Disk.radius));
}

void perimeter_of_circle(circle Disk) {
  printf("Perimeter = %.3f\n", (pow(Disk.radius, 2) * M_PI));
}

void perimeter_and_area_of_triangle(triangle Delta) {
  float A = sqrt(powf(Delta.second_point.x - Delta.first_point.x, 2) +
                 powf(Delta.second_point.y - Delta.first_point.y, 2));
  float B = sqrt(powf(Delta.third_point.x - Delta.second_point.x, 2) +
                 powf(Delta.third_point.y - Delta.second_point.y, 2));
  float C = sqrt(powf(Delta.first_point.x - Delta.third_point.x, 2) +
                 powf(Delta.first_point.y - Delta.third_point.y, 2));

  if ((A + B <= C) || (A + C <= B) || (B + C <= A)) {
    printf("Error: Triangle with such sides does not exist \n");
  } else {
    float perimeter = A + B + C;
    float half_of_perimeter = perimeter / 2;
    float area = sqrt((half_of_perimeter) * (half_of_perimeter - A) *
                      (half_of_perimeter - B) * (half_of_perimeter - C));

    printf("Perimeter = %.3f \n", perimeter);
    printf("Area = %.3f \n", area);
  }
}

void radius_checker(circle Disk) {
  if (Disk.radius <= 0) {
    printf("Error: Radius less or equal to zero \n");
    exit(1);
  }
}
