//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include <iostream>
#include <iomanip>
#include "cListNhanvien.h"
using namespace std;

int main() {
    cListNhanvien ds;

    try {
        // Nhập danh sách
        ds.Nhap();

        cout << "\n DANH SACH NHAN VIEN\n";
        for (size_t i = 0; i < ds.getSize(); i++) {
            ds.Xuat(ds.getNV(i));
        }

        // Nhân viên lương cao nhất
        cout << "\nNhan vien co luong cao nhat \n";
        cNhanvienVP maxLuong = ds.TimNVluongcaonhat();
        ds.Xuat(maxLuong);

        // Nhân viên lớn tuổi nhất
        cout << "\nNhan vien lon tuoi nhat\n";
        cNhanvienVP lonTuoi = ds.TimNVlontuoinhat();
        ds.Xuat(lonTuoi);

        // Tổng lương
        cout << "\nTong luong: " << ds.Tongluong() << endl;

        // Sắp xếp lương tăng
        ds.Sapxepluongtang();
        cout << "\nDanh sach nhan vien luong duoc sap xep tang dan\n";

        for (size_t i = 0; i < ds.getSize(); i++) {
            ds.Xuat(ds.getNV(i));
        }

    } catch (exception &e) {
        cout << "Loi: " << e.what() << endl;
    }

    return 0;
}