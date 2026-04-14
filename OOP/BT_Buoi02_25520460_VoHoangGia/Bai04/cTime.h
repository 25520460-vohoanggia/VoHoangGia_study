//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <bits/stdc++.h>
using namespace std;
typedef unsigned int  ui;

class cTime {
    private:
    ui h ,m, s;
    public:
    cTime();
    cTime(ui gio, ui phut = 0, ui giay = 0);
    void Nhap();
    void Xuat();
    ui getH();
    ui getM();
    ui getS();
    void setH(ui );
    void setM(ui);
    void setS(ui);
    void TangS(ui);
    void GiamS(ui);
    void TangM(ui);
    void GiamM(ui);
    void TangH(ui);
    void GiamH(ui);
    ~cTime();
};