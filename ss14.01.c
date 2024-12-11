#include <stdio.h>

// H�m t?o ma tr?n 2 chi?u
int** taoMaTran(int hang, int cot) {
    // C?p ph�t b? nh? cho m?ng 2 chi?u
    int** maTran = (int**)malloc(hang * sizeof(int*));
    for (int i = 0; i < hang; i++) {
        maTran[i] = (int*)malloc(cot * sizeof(int));
    }

    // Nh?p c�c gi� tr? v�o ma tr?n
    printf("Nhap cac gia tri cho ma tran %dx%d:\n", hang, cot);
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("Nhap gia tri cho maTran[%d][%d]: ", i, j);
            scanf("%d", &maTran[i][j]);
        }
    }

    return maTran;
}

// H�m in ma tr?n 2 chi?u
void inMaTran(int** maTran, int hang, int cot) {
    printf("Ma tran 2 chieu:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d ", maTran[i][j]);
        }
        printf("\n");
    }
}

// H�m gi?i ph�ng b? nh?
void giaiPhongMaTran(int** maTran, int hang) {
    for (int i = 0; i < hang; i++) {
        free(maTran[i]);
    }
    free(maTran);
}

int main() {
    int hang, cot;

    // Nh?p s? h�ng v� s? c?t t? ngu?i d�ng
    printf("Nhap so hang: ");
    scanf("%d", &hang);
    printf("Nhap so cot: ");
    scanf("%d", &cot);

    // T?o ma tr?n v� in ra k?t qu?
    int** maTran = taoMaTran(hang, cot);
    inMaTran(maTran, hang, cot);

    // Gi?i ph�ng b? nh?
    giaiPhongMaTran(maTran, hang);

    return 0;
}

