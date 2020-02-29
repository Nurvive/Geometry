#include <math.h>
#include <stdio.h>
void area_of_circle(struct circle);
void perimeter_of_circle(struct circle);
void perimeter_and_area_of_triangle(struct triangle);
void triangle_checker(struct triangle);
void circle_checker(struct circle);

struct point {
    float point1;
    float point2;
};
struct circle {
    float radius;
    struct point center;
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
    Circle.center.point1 = 0;
    Circle.center.point2 = 0;
    Circle.radius = 0;
    char name[10];
    char first_letter;
    printf("Please input figure: \n");
    first_letter = getchar();
    if (first_letter == 'c') {
        scanf("%5s%*c%f%f%*c%f",
              name,
              &Circle.center.point1,
              &Circle.center.point2,
              &Circle.radius);
        circle_checker(Circle);
        area_of_circle(Circle);
        perimeter_of_circle(Circle);
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
        triangle_checker(Triangle);
        perimeter_and_area_of_triangle(Triangle);
    } else {
        printf("Error: unknown figure \n");
    };

    return 0;
}
