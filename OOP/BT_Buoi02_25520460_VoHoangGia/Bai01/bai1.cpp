//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include "cPhanso.h"
#include <iostream>
using namespace std;

int main()
{
	cPhanso p1,p2,kq;
    p1.Nhap();
    p2.Nhap();
    cout<<"Tong hai phan so: ";
    p1.Cong(p2).Xuat();
    cout<<endl<<"Hieu hai phan so: ";
    p1.Tru(p2).Xuat();
    cout<<endl<<"Tich hai phan so: ";
    p1.Nhan(p2).Xuat();
    cout<<endl<<"Thuong hai phan so: ";
    p1.Chia(p2).Xuat();
    return 0;
}

