#include <stdio.h>

// Ham kiem tra so nguyen to
int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
int main() {
    int arr[100], n = 0, choice, value, index;
        do{
		printf("     Menu   \n");
		printf("1.Nhap so phan tu va gia tri cho mang\n");
		printf("2.In ra gia tri cac phan tu dang quan ly\n");
		printf("3.Dem so luong cac nguyen tu co trong mang\n");
		printf("4.Tim gia tri nho thu hai trong mang\n");
		printf("5.Them mot phan tu ngau nhien trong mang\n");
		printf("6.Xoa phan tu tai vi tri cu the\n");
		printf("7.Sap xep mang theo thu tu giam dan\n");
		printf("8.Cho nguoi dung nhap mot phan tu, tim kiem xem phan tu do co ton tai hay khong\n");
		printf("9.Xoa toan bo phan tu trung lap trong mang va hien thi toan bo phan tu doc nhat co trong mang\n");
		printf("10.Dao nguoc phan tu co trong mang\n");
		printf("11.Thoat\n");
		printf("Moi ban nhap lua chon: \n");
		scanf("%d",&choice);
        switch (choice) {
            case 1: // Nhap so phan tu va gia tri cac phan tu
                printf("Nhap so phan tu: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("Nhap gia tri phan tu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;

            case 2: //In ra gia tri cac phan tu 
            if(n==0){
            	printf("Moi ban nhap lai gia tri: ");
			}else{
                printf("Cac gia tri trong mang: ");
                for (int i = 0; i < n; i++) {
                    printf("arr[%d] = %d ",i, arr[i]);
                }
                printf("\n");
        }
                break;
             case 3: // Dem cac phan tu la so nguyen to trong mang
                printf("Cac so nguyen to trong mang: ");
                for (int i = 0; i < n; i--) {
                    if (isPrime(arr[i])) {
                        printf("%d ", arr[i]);
                    }
                }
                printf("\n");
                break;
            case 4://Tim gia tri nho thu hai trong mang
            for (int i = 1; i < n; i++) {
        int key = arr[i]; 
        int j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key; 
    }
    break;
            case 5: // Them mot phan tu vao trong mang
                if (n >= 100) {
                    printf("Mang da day, khong the them phan tu!\n");
                } else {
                    printf("Nhap phan tu can them: ");
                    scanf("%d", &value);
                    arr[n] = value;
                    n++;
                    printf("Phan tu da duoc them!\n");
                }
                break;

            case 6: // Xoa mot phan tu trong mang
                printf("Nhap vi tri phan tu muon xoa (tu 0 den %d): ", n - 1);
                scanf("%d", &index);
                if (index < 0 || index >= n) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    for (int i = index; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Phan tu da duoc xoa!\n");
                }
                break;

            case 7:             
    for (int i = 1; i < n; i++) {
        int key = arr[i]; 
        int j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key; 
    }
    printf("Mang sau khi sap xep giam dan la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t ", arr[i]);
    }
                break;
            case 8: 
                printf("Nhap gia tri can tim: ");
                scanf("%d", &value);
                int found = 0;
                for (int i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        printf("Phan tu %d co vi tri index %d\n", value, i);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("Khong tim thay phan tu %d trong mang!\n", value);
                }
                break;
            
            
    } 
}while (choice != 11);
return 0;
}
      

