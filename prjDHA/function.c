#include "function.h"
#include <stdio.h>

void inMenu() {
    printf("\n--- Quan Ly Danh Muc H�ng H�a ---\n");
    printf("1. Hien thi danh sach danh muc\n");
    printf("2. Th�m danh muc\n");
    printf("3. Sua danh muc\n");
    printf("4. X�a danh muc\n");
    printf("5. T�m kiem danh muc\n");
    printf("6. sap xep danh muc theo ten\n");
    printf("7. kiem tra du lieu nhap danh muc\n");
    printf("8. luu du lieu\n");
    printf("9. Thoat\n");
}
void hienThiDanhMuc(Product product[], int n) {
    if (n == 0) {
        printf("Danh muc hien tai chua c� h�ng h�a n�o.\n");
        return;
    }
    printf("\n| %-10s | %-20s | %-10s | %-10s |\n", "M� H�ng", "Loai H�ng", "T�n H�ng", "So Luong", "Gi�");
    printf("-------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("| %-10s | %-10s | %-20s | %-10d | %-10.2f |\n", product[i].productID,product[i].categoryID, product[i].productName, product[i].quantity, product[i].price);
    }
}
