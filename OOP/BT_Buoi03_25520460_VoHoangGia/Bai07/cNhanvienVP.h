//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include <iostream>
#include "cDate.h"
using namespace std;
typedef unsigned int ui;
class cNhanvienVP{
    private:
    string ma;
    string hoten;
    cDate ngay;
    double luong;
    public:
    cNhanvienVP();
    cNhanvienVP(string , string , ui , ui ,ui ,double );
    void setMa(string );
    void setLuong( int );
    string getMa() const;
    string getTen() const;
    cDate getNS()const;
    string getN() const;
    double getLuong() const;
    void Nhap();
    void Xuat();
};