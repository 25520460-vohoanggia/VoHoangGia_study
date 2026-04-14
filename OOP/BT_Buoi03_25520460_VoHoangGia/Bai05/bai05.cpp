//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include <iostream>
#include "cDagiac.h"

using namespace std;

int main() {
    cDagiac dg;

    // Nhập đa giác
    cout << "--- NHAP DA GIAC ---" << endl;
    dg.Nhap();

    // Xuất đa giác ban đầu
    cout << "\n--- THONG TIN DA GIAC BAN DAU ---" << endl;
    dg.Xuat();
    cout << "Chu vi: " << dg.TinhCV() << endl;
    cout << "Dien tich: " << dg.TinhDT() << endl;

    // Tịnh tiến
    int dx, dy;
    cout << "\n--- TINH TIEN DA GIAC ---" << endl;
    cout << "Nhap vector tinh tien (dx dy): ";
    cin >> dx >> dy;
    dg.Tinhtien(dx, dy);
    cout << "Toa do sau khi tinh tien:" << endl;
    dg.Xuat();

    // Phóng to
    int k_phong;
    cout << "\n--- PHONG TO DA GIAC ---" << endl;
    cout << "Nhap he so phong to (k): ";
    cin >> k_phong;
    dg.Phongto(k_phong);
    cout << "Toa do sau khi phong to:" << endl;
    dg.Xuat();
    cout << "Chu vi moi: " << dg.TinhCV() << endl;
    cout << "Dien tich moi: " << dg.TinhDT() << endl;

    //Thu nhỏ
    int k_thu;
    cout << "\n--- THU NHO DA GIAC ---" << endl;
    cout << "Nhap he so thu nho (k): ";
    cin >> k_thu;
    dg.Thunho(k_thu);
    cout << "Toa do sau khi thu nho:" << endl;
    dg.Xuat();
    return 0;
}