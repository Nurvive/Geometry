#ifndef GEOMETRY_H
#define GEOMETRY_H
struct point {
  double x;
  double y;
};
typedef struct circle {
  double radius;
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
void radius_checker(circle Disk);
#endif
