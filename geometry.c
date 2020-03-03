#include "geometry.h"
#include <math.h>
#include <stdio.h>

void area_of_circle(circle Disk);
void perimeter_of_circle(circle Disk);
void perimeter_and_area_of_triangle(triangle Delta);
void triangle_checker(triangle Delta);
void circle_checker(circle Disk);

int main()
{
    circle Circle;
    triangle Triangle;
    Triangle.first_point.x = 0;
    Triangle.first_point.y = 0;
    Triangle.second_point.x = 0;
    Triangle.second_point.y = 0;
    Triangle.third_point.x = 0;
    Triangle.third_point.y = 0;
    Triangle.fourth_point.x = 0;
    Triangle.fourth_point.y = 0;
    Circle.center.x = 0;
    Circle.center.y = 0;
    Circle.radius = 0;
    char name[10];
    char first_letter;
    printf("Please input figure: \n");
    first_letter = getchar();
    if (first_letter == 'c') {
        scanf("%5s%*c%f%f%*c%f",
              name,
              &Circle.center.x,
              &Circle.center.y,
              &Circle.radius);
        circle_checker(Circle);
        area_of_circle(Circle);
        perimeter_of_circle(Circle);
    } else if (first_letter == 't') {
        scanf("%7s%*c%*c%f%f%*c%f%f%*c%f%f%*c%f%f%*c",
              name,
              &Triangle.first_point.x,
              &Triangle.first_point.y,
              &Triangle.second_point.x,
              &Triangle.second_point.y,
              &Triangle.third_point.x,
              &Triangle.third_point.y,
              &Triangle.fourth_point.x,
              &Triangle.fourth_point.y);
        triangle_checker(Triangle);
        perimeter_and_area_of_triangle(Triangle);
    } else {
        printf("Error: unknown figure \n");
    };

    return 0;
}
