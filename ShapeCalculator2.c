#include<stdio.h>
#include<math.h>

void SquareAreaPerimeter(int side, int *perimeter, int *area);
void RectangleAreaPerimeter(int length, int width, int *perimeter, int *area);
void CircleAreaPerimeter(int radius, int *perimeter, int *area);
void TriangleAreaPerimeter(int side1, int side2, int side3, int *perimeter, int *area);

int main ()
{
  int loop;
  loop = 0;
  while (loop == 0) {
  int shape, side, length, width, side1, side2, side3, radius, s, perimeter, area;
  
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
                SquareAreaPerimeter(side, &perimeter, &area);
                printf("Area: %d\n", area);
                printf("Perimeter: %.2f\n\n", perimeter);
                break;

            case 2:
                printf("Enter Length: ");
                scanf("%d", &length);
                printf("Enter Width: ");
                scanf("%d", &width);
                RectangleAreaPerimeter(length, width, &perimeter, &area);
                printf("Area: %d\n", area);
                printf("Perimeter: %d\n\n", perimeter);
                break;

            case 3:
                printf("Enter Radius: ");
                scanf("%d", &radius);
                CircleAreaPerimeter(radius, &perimeter, &area);
                printf("Area: %d\n", area);
                printf("Perimeter: %d\n\n", perimeter);
                break;

            case 4:
                printf("Enter Side 1: ");
                scanf("%d", &side1);
                printf("Enter Side 2: ");
                scanf("%d", &side2);
                printf("Enter Side 3: ");
                scanf("%d", &side3);
                TriangleAreaPerimeter(side1, side2, side3, &perimeter, &area);
                if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
                    printf("Area: %d\n", area);
                    printf("Perimeter: %d\n\n", perimeter);
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

void SquareAreaPerimeter(int side, int *perimeter, int *area){
    *perimeter = 4*side;
    *area = side*side;
}

void RectangleAreaPerimeter(int length, int width, int *perimeter, int *area) {
    *area = length*width;
    *perimeter = 2*(length+width);
}

void CircleAreaPerimeter(int radius, int *perimeter, int *area) {
    *area = (22.0/7.0)*radius*radius;
    *perimeter = 2*(22.0/7.0)*radius;
}

void TriangleAreaPerimeter(int side1, int side2, int side3, int *perimeter, int *area) {
    float s = (side1+side2+side3)/2.0;
    *area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
    *perimeter = side1 + side2 + side3;
}