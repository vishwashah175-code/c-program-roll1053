#include <stdio.h>

int main() {
    float radius, circumference;
    const float PI = 3.1416;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate circumference
    circumference = 2 * PI * radius;

    // Display result
    printf("Circumference of the circle = %.2f\n", circumference);

    return 0;
}
