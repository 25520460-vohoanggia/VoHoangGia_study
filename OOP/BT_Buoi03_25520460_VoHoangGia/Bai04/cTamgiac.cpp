//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include "cTamgiac.h"
#include <cmath>
using namespace std;

cTamgiac::cTamgiac(){
    A = B = C =0;
}
cTamgiac::cTamgiac(cPoint a,cPoint b,cPoint c){
    A = a;
    B = b;
    C = c;
}
void cTamgiac::Nhap(){
    A.Nhap();
    B.Nhap();
    C.Nhap();
}
void cTamgiac::Xuat(){
    A.Xuat();
    cout<<"\n";  B.Xuat();
    cout<<"\n"; C.Xuat();
}
double cTamgiac::TinhAB(){
    return sqrt(pow(B.getX() - A.getX(), 2) 
              + pow(B.getY() - A.getY(), 2));
}
double cTamgiac::TinhAC(){
    return sqrt(pow(C.getX() - A.getX(), 2) 
              + pow(C.getY() - A.getY(), 2));
}
double cTamgiac::TinhBC(){
    return sqrt(pow(C.getX() - B.getX(), 2) 
              + pow(C.getY() - B.getY(), 2));
}
int cTamgiac::KtraTG(){
    const double eps = 1e-6;

    double AB = TinhAB();
    double AC = TinhAC();
    double BC = TinhBC();

    if (abs(AB - AC) < eps || abs(AB - BC) < eps || abs(BC - AC) < eps){
        if (abs(AB - AC) < eps && abs(AB - BC) < eps){
            return 3; // đều
        }
        else if (abs(AB*AB + AC*AC - BC*BC) < eps ||
                 abs(AB*AB + BC*BC - AC*AC) < eps ||
                 abs(AC*AC + BC*BC - AB*AB) < eps){
            return 4; // vuông cân
        }
        else return 2; // cân
    }

    if (abs(AB*AB + AC*AC - BC*BC) < eps ||
        abs(AB*AB + BC*BC - AC*AC) < eps ||
        abs(AC*AC + BC*BC - AB*AB) < eps){
        return 1; // vuông
    }

    return 0; // thường
}
double cTamgiac::TinhCV(){
    return (TinhAB()+TinhAC()+TinhBC());
}
double cTamgiac::TinhDT(){
    float s = 0.5 * abs(A.getX() * (B.getY() - C.getY()) + 
                        B.getX() * (C.getY() - A.getY()) + 
                        C.getX() * (A.getY() - B.getY()));
    return s;
}
void cTamgiac::Tinhtien(int x, int y){
    A.TinhTien(x, y);
    B.TinhTien(x, y);
    C.TinhTien(x, y);
}
void cTamgiac::Phongto( int k){
    A.Phongto(k);
    B.Phongto(k);
    C.Phongto(k);
};
void cTamgiac::Thunho(int k){
    A.Thunho(k);
    B.Thunho(k);
    C.Thunho(k);
}
cTamgiac::~cTamgiac(){};