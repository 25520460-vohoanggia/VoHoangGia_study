//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <bits/stdc++.h>
typedef unsigned int ui;
using namespace std;


class cVehicle{
    private:
    string chuxe;
    string loai;
    ui gia;
    ui dungtich;
    public:
    cVehicle();
    cVehicle( string , string , ui , ui );
    void Nhap();
    void Xuat();
    ui thue();
    ~cVehicle();
};