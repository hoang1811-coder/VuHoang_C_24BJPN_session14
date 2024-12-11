#include <stdio.h>

// Hàm t?o ma tr?n 2 chi?u
int** taoMaTran(int hang, int cot) {
    // C?p phát b? nh? cho m?ng 2 chi?u
    int** maTran = (int**)malloc(hang * sizeof(int*));
    for (int i = 0; i < hang; i++) {
        maTran[i] = (int*)malloc(cot * sizeof(int));
    }

    // Nh?p các giá tr? vào ma tr?n
    printf("Nhap cac gia tri cho ma tran %dx%d:\n", hang, cot);
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("Nhap gia tri cho maTran[%d][%d]: ", i, j);
            scanf("%d", &maTran[i][j]);
        }
    }

    return maTran;
}

// Hàm in ma tr?n 2 chi?u
void inMaTran(int** maTran, int hang, int cot) {
    printf("Ma tran 2 chieu:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d ", maTran[i][j]);
        }
        printf("\n");
    }
}

// Hàm gi?i phóng b? nh?
void giaiPhongMaTran(int** maTran, int hang) {
    for (int i = 0; i < hang; i++) {
        free(maTran[i]);
    }
    free(maTran);
}

int main() {
    int hang, cot;

    // Nh?p s? hàng và s? c?t t? ngu?i dùng
    printf("Nhap so hang: ");
    scanf("%d", &hang);
    printf("Nhap so cot: ");
    scanf("%d", &cot);

    // T?o ma tr?n và in ra k?t qu?
    int** maTran = taoMaTran(hang, cot);
    inMaTran(maTran, hang, cot);

    // Gi?i phóng b? nh?
    giaiPhongMaTran(maTran, hang);

    return 0;
}

