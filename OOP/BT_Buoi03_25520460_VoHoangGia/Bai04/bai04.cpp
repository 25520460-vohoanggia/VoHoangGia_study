//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include "cTamgiac.h"
#include <iostream>
using namespace std;

int main(){
    cTamgiac tg;

    cout << "Nhap tam giac:\n";
    tg.Nhap();
    cout<<"\nCac dinh cua tam giac: ";
    tg.Xuat();
    cout << "\nChu vi: " << tg.TinhCV();
    cout << "\nDien tich: " << tg.TinhDT();

    int loai = tg.KtraTG();

    cout << "\nLoai tam giac: ";
    if(loai == 3) cout << "Tam giac deu";
    else if(loai == 4) cout << "Tam giac vuong can";
    else if(loai == 2) cout << "Tam giac can";
    else if(loai == 1) cout << "Tam giac vuong";
    else cout << "Tam giac thuong";

    // Test tinh tien
    int dx, dy;
    cout << "\nNhap vector tinh tien (dx dy): ";
    cin >> dx >> dy;
    tg.Tinhtien(dx, dy);

    cout << "\nSau khi tinh tien, dien tich: " << tg.TinhDT();

    // Test phong to
    int k;
    cout << "\nNhap he so phong to: ";
    cin >> k;
    tg.Phongto(k);

    cout << "\nSau khi phong to, dien tich: " << tg.TinhDT();

    // Test thu nho
    cout << "\nNhap he so thu nho: ";
    cin >> k;
    tg.Thunho(k);

    cout << "\nSau khi thu nho, dien tich: " << tg.TinhDT();

    return 0;
}