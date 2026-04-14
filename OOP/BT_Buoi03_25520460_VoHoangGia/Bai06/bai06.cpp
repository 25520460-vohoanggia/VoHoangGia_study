//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include <iostream>
#include "cListCandidate.h"
using namespace std;

int main() {
    cListCandidate ds;

    // Nhập danh sách
    ds.Nhap();

    cout << "\nDanh sach thi sinh co tong diem >= 15:\n";
    cout << setw(7) << "Ma"
     << setw(20) << "Ten"
     << setw(15) << "Ngay sinh"
     << setw(8) << "Toan"
     << setw(8) << "Van"
     << setw(8) << "Anh"
     << setw(10) << "Tong" << endl;
    ds.Xuattren15();

    // Tìm thí sinh cao điểm nhất
    cCandidate max = ds.TimTScaonhat();
    cout << "\n\nThi sinh co tong diem cao nhat:\n";
    cout << setw(7) << "Ma"
     << setw(20) << "Ten"
     << setw(15) << "Ngay sinh"
     << setw(8) << "Toan"
     << setw(8) << "Van"
     << setw(8) << "Anh"
     << setw(10) << "Tong" << endl;
    ds.Xuat(max);

    // Sắp xếp giảm dần theo điểm
    ds.Sapxepgiamdiem();
    cout << "\n\nDanh sach sau khi sap xep giam dan theo tong diem:\n";

    // In lại toàn bộ danh sách sau khi sắp xếp
    cout << setw(7) << "Ma"
     << setw(20) << "Ten"
     << setw(15) << "Ngay sinh"
     << setw(8) << "Toan"
     << setw(8) << "Van"
     << setw(8) << "Anh"
     << setw(10) << "Tong" << endl;
    for (int i = 0; i < ds.getSize(); i++) {
        ds.Xuat(ds.getCandidate(i));
        cout << endl;
    }

    return 0;
}