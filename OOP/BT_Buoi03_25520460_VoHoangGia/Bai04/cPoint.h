//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include <iostream>
using namespace std;

class cPoint {
    private:
    double hoanh, tung;
    public:
    cPoint();
    cPoint(int);
    cPoint(int , int   );
    void setX(int );
    void setY(int );
    int getX();
    int getY();
    void Nhap();
    void Xuat();
    void TinhTien(int dx, int dy);
    void Phongto(int );
    void Thunho(int );
};