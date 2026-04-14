//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include <iostream>
#include <iomanip>
#include "cListNhanvien.h"
using namespace std;

int main(){
        double g;
        cout << "Nhap gia san pham: ";
        cin >> g;
        cNhanVienSX::setGia(g);

        // 📥 Nhập danh sách nhân viên
        cListNhanvien ds;
        ds.Nhap();

        // 📋 In danh sách
        cout << "\nDANH SACH NHAN VIEN\n";
        cout << left
             << setw(7)  << "Ma"
             << setw(25) << "Ten"
             << setw(15) << "Ngay sinh"
             << setw(12) << "Luong"
             << endl;
        cout << string(60, '-') << endl;

        for (int i = 0; i < ds.getSize(); i++){
            ds.Xuat(ds.getNV(i));
        }
        // Tổng lương
        cout << "\nTong luong: " << ds.Tongluong() << endl;
        //  Nhân viên lương thấp nhất
        cout << "\NHAN VIEN LUONG THAP NHAT\n";
        cNhanVienSX minNV = ds.TimNVluongthapnhat();
        ds.Xuat(minNV);

        // Nhân viên lớn tuổi nhất
        cout << "\nNHAN VIEN LON TUOI NHAT\n";
        cNhanVienSX maxTuoi = ds.TimNVlontuoinhat();
        ds.Xuat(maxTuoi);

        // Sắp xếp tăng dần theo lương
        ds.Sapxepluongtang();
        cout << "\nSAU KHI SAP XEP LUONG TANG\n";
        for (int i = 0; i < ds.getSize(); i++){
            ds.Xuat(ds.getNV(i));
        }
    return 0;
}