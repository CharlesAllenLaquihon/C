#include <stdio.h>

int main() {

    float x1, y1, z1, c1, x2, y2, z2, c2, x3, y3, z3, c3;

    printf("Enter Equation 1 Coefficients and Constant: ");
    scanf("%f %f %f %f", &x1, &y1, &z1, &c1);

    printf("Enter Equation 2 Coefficients and Constant: ");
    scanf("%f %f %f %f", &x2, &y2, &z2, &c2);

    printf("Enter Equation 3 Coefficients and Constant: ");
    scanf("%f %f %f %f", &x3, &y3, &z3, &c3);

    float array[3][4] = {
        {x1, y1, z1, c1},
        {x2, y2, z2, c2},
        {x3, y3, z3, c3}
    };

    for (int i = 0; i < 3; i++) {
        if (array[i][i] == 0.0) {
            printf("Error!\n");
            return 1;
        }

        float pivot = array[i][i];
        for (int j = 0; j < 4; j++) {
            array[i][j] = array[i][j] / pivot;
        }

        for (int j = 0; j < 3; j++) {
            if (i != j) {
                float ratio = array[j][i];
                for (int k = 0; k < 4; k++) {
                    array[j][k] = array[j][k] - ratio * array[i][k];
                }
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%.2f ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}