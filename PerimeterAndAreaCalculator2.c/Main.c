#include<stdio.h>
#include<math.h>
#include "Library.c"

typedef struct
{
    int side;
    int length;
    int width;
    int radius;
    int side1;
    int side2;
    int side3;
} Dimensions;


float SquareArea(int side);
float SquarePerimeter(int side);
float RectangleArea(int length, int width );
float RectanglePerimeter(int length, int width);
float CircleArea(int radius);
float CirclePerimeter(int radius);
float TriangleArea(int side1, int side2, int side3);
float TrianglePerimeter(int side1, int side2, int side3);

int main ()
{
  Dimensions dimension;
  int loop = 0;

  while (loop == 0) {
  int shape;
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
                scanf("%d", &dimension.side);
                printf("Area: %.2f\n", SquareArea(dimension.side));
                printf("Perimeter: %.2f\n\n", SquarePerimeter(dimension.side));
                break;

            case 2:
                printf("Enter Length: ");
                scanf("%d", &dimension.length);
                printf("Enter Width: ");
                scanf("%d", &dimension.width);
                printf("Area: %.2f\n", RectangleArea(dimension.length, dimension.width));
                printf("Perimeter: %.2f\n\n", RectanglePerimeter(dimension.length, dimension.width));
                break;

            case 3:
                printf("Enter Radius: ");
                scanf("%d", &dimension.radius);
                printf("Area: %.2f\n", CircleArea(dimension.radius));
                printf("Perimeter: %.2f\n\n", CirclePerimeter(dimension.radius));
                break;

            case 4:
                printf("Enter Side 1: ");
                scanf("%d", &dimension.side1);
                printf("Enter Side 2: ");
                scanf("%d", &dimension.side2);
                printf("Enter Side 3: ");
                scanf("%d", &dimension.side3);

                if (dimension.side1 + dimension.side2 > dimension.side3 && dimension.side1 + dimension.side3 > dimension.side2 && dimension.side2 + dimension.side3 > dimension.side1) {
                    printf("Area: %.2f\n", TriangleArea(dimension.side1, dimension.side2, dimension.side3));
                    printf("Perimeter: %.2f\n\n", TrianglePerimeter(dimension.side1, dimension.side2, dimension.side3));
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