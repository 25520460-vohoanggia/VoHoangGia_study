//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include <iostream>
#include "cDate.h"
typedef unsigned int ui;
using namespace std;

class cCandidate{
    private:
    string ma;
    string ten;
    cDate ngay;
    double Toan , Van, Anh;
    public:
    cCandidate();
    cCandidate(string , string , ui , ui ,ui , double , double , double);
    void Nhap();
    string getMa();
    string getTen();
    string getNS() const;
    double getToan();
    double getVan();
    double getAnh();
    double TinhTong();
};