// Cho bảng giá tiền taxi như sau
//   - 1km đầu tiên: 16000 VNĐ/km
// 	 - Từ km thứ 2 đến km thứ 5: 12000 VNĐ/km
// 	 - Từ km thứ 5 trở đi: 10000 VNĐ/km
// Ngoài ra tổng tiền phải trả sẽ chịu thêm 5% thuế VAT
// Viết chương trình cho phép nhập số km cần đi, tính tổng tiền phải trả
// 
// VD: 25km => 277200 VNĐ 
//  Giải thích: (1km đầu = 16k, 4km tiếp theo = 48k, 20km tiếp theo = 10k) * 5% thuế
#include <stdio.h>

int main() {
    int km, tien;
    // Nhập số km cần đi - tự nhập

    if (km < 0) 
        printf("Số km không hợp lệ");
    else if (km <= 1) {
        tien = 16000;
    } else if (km <= 5){
        tien = 16000 + (km - 1) * 12000;
    } else {
        tien = 16000 + 4 * 12000 + (km - 5) * 10000;
    }
    tien = tien * 1.05;

    printf("Số tiền phải trả khi đi %dkm là: %d vnđ", km, tien);
    return 0;
}