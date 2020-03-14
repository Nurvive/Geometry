#ifndef GEOMETRY_H
#define GEOMETRY_H
struct point {
    float x;
    float y;
};
typedef struct circle {
    float radius;
    struct point center;
} circle;
typedef struct triangle {
    struct point first_point;
    struct point second_point;
    struct point third_point;
    struct point fourth_point;
} triangle;
void area_of_circle(circle Disk);
void perimeter_of_circle(circle Disk);
void perimeter_and_area_of_triangle(triangle Delta);
void triangle_checker(triangle Delta);
void circle_checker(circle Disk);
#endif