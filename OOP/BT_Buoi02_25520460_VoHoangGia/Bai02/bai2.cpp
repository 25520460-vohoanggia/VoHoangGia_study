//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <bits/stdc++.h>
#include "cPoint.h"
using namespace std;

int main(){
    cPoint A , t;
    cout<<"Nhap diem A";
    A.Nhap();
    cout<<"Toa do cua diem: ";
    A.Xuat();
    cout<<"\nHoanh do: "<<A.getHoanh();
    cout<<"\nTung do: "<<A.getTung();
    cout<<"\nDiem tinh tien"; t.Nhap();
    A.Tinhtien(t);
    cout<<"Sau khi tinh tien: ";
    A.Xuat();

}