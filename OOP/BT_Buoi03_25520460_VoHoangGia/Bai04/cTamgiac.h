//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include "cPoint.h"
#include <cmath>
using namespace std;

class cTamgiac{
    private:
    cPoint A ,B, C;
    public:
    cTamgiac();
    cTamgiac(cPoint ,cPoint ,cPoint);
    void Nhap();
    void Xuat();
    int KtraTG();
    double TinhAB();
    double TinhAC();
    double TinhBC();
    double TinhCV();
    double TinhDT();
    void Tinhtien(int , int);
    void Phongto(int );
    void Thunho( int );
    ~cTamgiac();
};