#include <stdio.h>

void circleArea(float radius) {
    float area = 3.14 * radius * radius;
    printf("Area of circle = %.2f\n", area);
}

int main() {
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    circleArea(r);
    return 0;
}
