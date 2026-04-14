//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include "cDathuc.h"
#include <iostream>
using namespace std;

int main(){
    cDathuc dt1, dt2;

    cout << "Nhap da thuc 1:\n";
    dt1.Nhap();

    cout << "Nhap da thuc 2:\n";
    dt2.Nhap();

    cout << "\nDa thuc 1: ";
    dt1.Xuat();

    cout << "\nDa thuc 2: ";
    dt2.Xuat();

    cDathuc tong = dt1 + dt2;
    cout << "\nTong: ";
    tong.Xuat();

    cDathuc hieu = dt1 - dt2;
    cout << "\nHieu: ";
    hieu.Xuat();

    return 0;
}