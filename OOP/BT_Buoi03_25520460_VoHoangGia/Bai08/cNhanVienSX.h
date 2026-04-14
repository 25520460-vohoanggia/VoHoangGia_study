//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include <iostream>
#include "cDate.h"
using namespace std;
typedef unsigned int ui;

class cNhanVienSX{
    private:
    string ma;
    string hoten;
    cDate ngay;
    int sanpham;
    static double gia;
    public:
    cNhanVienSX();
    cNhanVienSX(string , string , ui , ui ,ui ,int );
    void setMa(string );
    void setSP( int ) ;
    static void setGia(double);
    static double getGia();
    string getMa() const;
    string getTen() const;
    cDate getNS() const;
    string getN()const;
    double getLuong() const;
    void Nhap();
    void Xuat();
};