#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793


void polarToCartesian(double r, double theta) {
    double x = r * cos(theta * PI / 180.0); 
    double y = r * sin(theta * PI / 180.0);
    printf("직교좌표: x = %.2f, y = %.2f\n", x, y);
}


void cartesianToPolar(double x, double y) {
    double r = sqrt(x * x + y * y);
    double theta = atan2(y, x) * 180.0 / PI; 
    printf("극좌표: r = %.2f, θ = %.2f도\n", r, theta);
}

int main() {
    int choice;
    double x, y, r, theta;

    while (1) {
        printf("\n좌표 변환 선택:\n");
        printf("1. 극좌표 -> 직교좌표\n");
        printf("2. 직교좌표 -> 극좌표\n");
        printf("3. 종료\n");
        printf("선택: ");
        scanf_s("%d", &choice);

        if (choice == 1) {
                printf("극좌표 입력 (r, θ in degrees): ");
                scanf_s("%lf %lf", &r, &theta);
                polarToCartesian(r, theta);
            }
        else if (choice == 2) {
                printf("직교좌표 입력 (x, y): ");
                scanf_s("%lf %lf", &x, &y);
                cartesianToPolar(x, y);
            }
        else if (choice == 3) {
                printf("프로그램을 종료합니다.\n");
                break;
            }
        else {
                printf("올바른 선택을 입력하세요.\n");
            }
    }

    return 0;
}
