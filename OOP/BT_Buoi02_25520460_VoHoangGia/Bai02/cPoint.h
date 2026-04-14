//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <bits/stdc++.h>
using namespace std;

class cPoint{
    private:
    double x,y ;
    public:
    cPoint();
    cPoint(double , double);
    void Nhap();
    void Xuat();
    void setTung(double);
    void setHoanh(double );
    double getTung();
    double getHoanh();
    void Tinhtien( cPoint);
    ~cPoint();
};