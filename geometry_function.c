#include <math.h>
#include <stdio.h>

void area_of_circle(float rad)
{
    printf("Area = %.3f\n", (3.14 * 2 * rad));
}

void perimeter_of_circle(float rad)
{
    printf("Perimeter = %.3f\n", (pow(rad, 2) * 3.14));
}

void perimeter_and_area_of_triangle(
        float point1_1,
        float point1_2,
        float point2_1,
        float point2_2,
        float point3_1,
        float point3_2)
{
    float A = sqrt(powf(point2_1 - point1_1, 2) + powf(point2_2 - point1_2, 2));
    float B = sqrt(powf(point3_1 - point2_1, 2) + powf(point3_2 - point2_2, 2));
    float C = sqrt(powf(point1_1 - point3_1, 2) + powf(point1_2 - point3_2, 2));

    if ((A + B <= C) || (A + C <= B) || (B + C <= A)) {
        printf("Error: Invalid triangle \n");
    } else {
        float perimeter = A + B + C;
        float half_of_perimeter = perimeter / 2;
        float area
                = sqrt((half_of_perimeter) * (half_of_perimeter - A)
                       * (half_of_perimeter - B) * (half_of_perimeter - C));

        printf("Perimeter = %.3f \n", perimeter);
        printf("Area = %.3f \n", area);
    }
}

void triangle_checker(
        float point1_1,
        float point1_2,
        float point2_1,
        float point2_2,
        float point3_1,
        float point3_2)
{
    if ((point1_1 == 0) && (point1_2 == 0) && (point2_1 == 0) && (point2_2 == 0)
        && (point3_1 == 0) && (point3_2 == 0)) {
        printf("Error: Invalid input format \n");
    }
}

void circle_checker(float point1_1, float point1_2, float point2_1)
{
    if ((point1_1 == 0) && (point1_2 == 0) && (point2_1 == 0)) {
        printf("Error: Invalid input format \n");
    }
}
