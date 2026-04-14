//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <bits/stdc++.h>
#include "cPhuc.h"
using namespace std;

int main(){
    cPhuc A , B, kq;
    A.Nhap();
    B.Nhap();
    kq=A.Cong(B);
    cout<<"Tong 2 so phuc: " ; kq.Xuat();
    kq=A.Tru(B);
    cout<<"\nHieu 2 so phuc: " ; kq.Xuat();
    kq=A.Nhan(B);
    cout<<"\nTich 2 so phuc: " ; kq.Xuat();
    kq=A.Chia(B);
    cout<<"\nThuong 2 so phuc: " ; kq.Xuat();
}