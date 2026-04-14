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
    cPhuc(double );
    cPhuc( double , double );
    void Nhap();
    void Xuat();
    cPhuc operator+(cPhuc) const ;
    cPhuc operator-(cPhuc) const ;
    cPhuc operator*(cPhuc) const ;
    cPhuc operator/(cPhuc) const;
    bool operator== (cPhuc) const ;
    bool operator!= (cPhuc) const ;
    friend istream& operator>>(istream& in, cPhuc& x);
    friend ostream& operator<<(ostream& out, const cPhuc& x);
    ~cPhuc();
};