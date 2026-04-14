//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <bits/stdc++.h>
using namespace std;

class cPhuc{
    private:
    double thuc, ao;
    public:
    cPhuc();
    cPhuc( double , double );
    void Nhap();
    void Xuat();
    cPhuc Cong(cPhuc);
    cPhuc Tru(cPhuc);
    cPhuc Nhan(cPhuc);
    cPhuc Chia(cPhuc);
    ~cPhuc();
};