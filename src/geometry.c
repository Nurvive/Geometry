#include "geometry.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  circle Circle;
  triangle Triangle;
  char figure_info[40];
  char figure_info_backup[40];
  char name[10];
  char bracket1;
  char bracket2;
  char comma1;
  char del[] = "()";
  char *istr;
  printf("Input format: (figure(x y, z))\n");
  printf("Input figure: \n");
  fgets(figure_info, 40, stdin);
  strcpy(figure_info_backup, figure_info);
  istr = strtok(figure_info_backup, del);
  if (istr == NULL) {
    printf("Error: invalid input\nPlease input like: (figure(x y, z))\n");
    return -1;
  }
  if (strcmp(istr, "circle") == 0 || strcmp(istr, "Circle") == 0) {
    sscanf(figure_info, "%6s %c %lf%lf %c %lf %c", name, &bracket1,
           &Circle.center.x, &Circle.center.y, &comma1, &Circle.radius,
           &bracket2);
    if (bracket1 != '(' || bracket2 != ')' || comma1 != ',') {
      printf("Error: invalid input\nPlease input like: figure(x y, z)\n");
      return -1;
    }
    radius_checker(Circle);
    area_of_circle(Circle);
    perimeter_of_circle(Circle);
  } else if (strcmp(istr, "triangle") == 0 || strcmp(istr, "Triangle") == 0) {
    char bracket3;
    char bracket4;
    char comma2;
    char comma3;
    sscanf(figure_info, "%8s %c %c %lf%lf %c %lf%lf %c %lf%lf %c %lf%lf %c %c",
           name, &bracket1, &bracket2, &Triangle.first_point.x,
           &Triangle.first_point.y, &comma1, &Triangle.second_point.x,
           &Triangle.second_point.y, &comma2, &Triangle.third_point.x,
           &Triangle.third_point.y, &comma3, &Triangle.fourth_point.x,
           &Triangle.fourth_point.y, &bracket3, &bracket4);
    if (bracket1 != '(' || bracket2 != '(' || comma1 != ',' || comma2 != ',' ||
        comma3 != ',' || bracket3 != ')' || bracket4 != ')') {
      printf("Error: invalid input\nPlease input like: figure((x y, a b, c d, "
             "e f))\n");
      return -1;
    }
    perimeter_and_area_of_triangle(Triangle);
  } else {
    printf("Error: unknown figure \n");
  };
  return 0;
}
