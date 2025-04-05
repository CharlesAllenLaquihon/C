#include<stdio.h>
#include<math.h>

float SquareArea(int side);
float SquarePerimeter(int side);
float RectangleArea(int length, int width);
float RectanglePerimeter(int length, int width);
float CircleArea(int radius);
float CirclePerimeter(int radius);
float TriangleArea(int side1, int side2, int side3);
float TrianglePerimeter(int side1, int side2, int side3);

int main ()
{
  int loop;
  loop = 0;
  while (loop == 0) {
  int shape, side, length, width, side1, side2, side3, radius, s;
  
  printf("Select a Shape:\n");
  printf("[1] Square\n");
  printf("[2] Rectangle\n");
  printf("[3] Circle\n");
  printf("[4] Triangle\n");
  printf("[5] Exit\n");
  scanf("%d", &shape);
  
  switch (shape) {
            case 1:
                printf("Enter Side: ");
                scanf("%d", &side);
                printf("Area: %.2f\n", SquareArea(side));
                printf("Perimeter: %.2f\n\n", SquarePerimeter(side));
                break;

            case 2:
                printf("Enter Length: ");
                scanf("%d", &length);
                printf("Enter Width: ");
                scanf("%d", &width);
                printf("Area: %.2f\n", RectangleArea(length, width));
                printf("Perimeter: %.2f\n\n", RectanglePerimeter(length, width));
                break;

            case 3:
                printf("Enter Radius: ");
                scanf("%d", &radius);
                printf("Area: %.2f\n", CircleArea(radius));
                printf("Perimeter: %.2f\n\n", CirclePerimeter(radius));
                break;

            case 4:
                printf("Enter Side 1: ");
                scanf("%d", &side1);
                printf("Enter Side 2: ");
                scanf("%d", &side2);
                printf("Enter Side 3: ");
                scanf("%d", &side3);

                if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
                    printf("Area: %.2f\n", TriangleArea(side1, side2, side3));
                    printf("Perimeter: %.2f\n\n", TrianglePerimeter(side1, side2, side3));
                } else {
                    printf("nyaw!\n\n");
                }
                break;

            case 5:
                printf("Exit? \n[1] yes\n");
                scanf("%d", &loop);
                break;
    
  default:
  printf("ngek!");
  printf("\n\n");
    break;
  }
  }
}
float SquareArea(int side){
    return (float)(side * side);
}

float SquarePerimeter(int side) {
    return (float)(4 * side);
}

float RectangleArea(int length, int width) {
    return (float)(length * width);
}

float RectanglePerimeter(int length, int width) {
    return (float)(2 * (length + width));
}

float CircleArea(int radius) {
    return (float)((22.0 / 7.0) * radius * radius);
}

float CirclePerimeter(int radius) {
    return (float)(2 * (22.0 / 7.0) * radius);
}

float TriangleArea(int side1, int side2, int side3) {
    float s = (side1 + side2 + side3) / 2.0;
    return (float)sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

float TrianglePerimeter(int side1, int side2, int side3) {
    return (float)(side1 + side2 + side3);

}