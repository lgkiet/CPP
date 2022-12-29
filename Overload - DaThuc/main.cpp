#include <iostream>
#include "DaThuc.h"

using namespace std;

// Xét đa thức theo biến x (đa thức một biến) bậc n có dạng như sau:
// 	P(X) = a1xn + a2xn-1 + a3xn-2 + … + aj
// Trong đó: n là bậc của đa thức. a1, a2, a3,…, aj là các hệ số tương ứng với từng bậc của đa thức.
// a. Xây dựng lớp DaThuc biểu diễn khái niệm đa thức với các thao tác như sau:
// - Hàm khởi tạo mặc định để tạo một đa thức có bậc bằng 0 /
// - Hàm khởi tạo để tạo một đa thức bậc n. /
// - Tính giá trị của đa thức khi biết giá trị của x /
// - Định nghĩa các toán tử tương ứng cho các thao tác sau:
// Nhập đa thức. //
// Xuất đa thức. //
// Cộng hai đa thức //
// Trừ hai đa thức. ++ (Tăng đa thức thêm 1), [] lấy hệ số ở x mũ I, = //
// b. Viết chương trình cho phép người dùng nhập vào hai đa thức rồi xuất các đa thức ra màn hình.
//  Sau đó tính tổng hai đa thức và xuất kết quả ra màn hình.

int main()
{
    DaThuc P, Q, Tong;
    cout << "Nhap da thuc 1: " << endl;
    cin >> P;
    cout << "Nhap da thuc 2: " << endl;
    cin >> Q;

    cout << "----------- Da Thuc 1 -----------" << endl;
    cout << P;
    cout << "----------- Da Thuc 2 -----------" << endl;
    cout << Q;

    Tong = P + Q;
    cout << "----------- Tong 2 da thuc -----------" << endl;
    cout << Tong;

    return 0;
}