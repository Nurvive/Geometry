#include <math.h>
#include <stdio.h>
void area_of_circle(float);
void perimeter_of_circle(float);
void perimeter_and_area_of_triangle(float, float, float, float, float, float);
void triangle_checker(float, float, float, float, float, float);
void circle_checker(float, float, float);

struct point {
    float point1;
    float point2;
};
struct circle {
    float radius;
    struct point point_of_circle;
};
struct triangle {
    struct point first_point_of_triangle;
    struct point second_point_of_triangle;
    struct point third_point_of_triangle;
    struct point fourth_point_of_triangle;
};

int main()
{
    struct circle Circle;
    struct triangle Triangle;
    Triangle.first_point_of_triangle.point1 = 0;
    Triangle.first_point_of_triangle.point2 = 0;
    Triangle.second_point_of_triangle.point1 = 0;
    Triangle.second_point_of_triangle.point2 = 0;
    Triangle.third_point_of_triangle.point1 = 0;
    Triangle.third_point_of_triangle.point2 = 0;
    Triangle.fourth_point_of_triangle.point1 = 0;
    Triangle.fourth_point_of_triangle.point2 = 0;
    Circle.point_of_circle.point1 = 0;
    Circle.point_of_circle.point2 = 0;
    Circle.radius = 0;
    char name[10];
    char first_letter;
    printf("Please input figure: \n");
    first_letter = getchar();
    if (first_letter == 'c') {
        scanf("%5s%*c%f%f%*c%f",
              name,
              &Circle.point_of_circle.point1,
              &Circle.point_of_circle.point2,
              &Circle.radius);
        circle_checker(
                Circle.point_of_circle.point1,
                Circle.point_of_circle.point2,
                Circle.radius);
        area_of_circle(Circle.radius);
        perimeter_of_circle(Circle.radius);
    } else if (first_letter == 't') {
        scanf("%7s%*c%*c%f%f%*c%f%f%*c%f%f%*c%f%f%*c",
              name,
              &Triangle.first_point_of_triangle.point1,
              &Triangle.first_point_of_triangle.point2,
              &Triangle.second_point_of_triangle.point1,
              &Triangle.second_point_of_triangle.point2,
              &Triangle.third_point_of_triangle.point1,
              &Triangle.third_point_of_triangle.point2,
              &Triangle.fourth_point_of_triangle.point1,
              &Triangle.fourth_point_of_triangle.point2);
        triangle_checker(
                Triangle.first_point_of_triangle.point1,
                Triangle.first_point_of_triangle.point2,
                Triangle.second_point_of_triangle.point1,
                Triangle.second_point_of_triangle.point2,
                Triangle.third_point_of_triangle.point1,
                Triangle.third_point_of_triangle.point2);
        perimeter_and_area_of_triangle(
                Triangle.first_point_of_triangle.point1,
                Triangle.first_point_of_triangle.point2,
                Triangle.second_point_of_triangle.point1,
                Triangle.second_point_of_triangle.point2,
                Triangle.third_point_of_triangle.point1,
                Triangle.third_point_of_triangle.point2);
    } else {
        printf("Error: unknown figure \n");
    };

    return 0;
}
