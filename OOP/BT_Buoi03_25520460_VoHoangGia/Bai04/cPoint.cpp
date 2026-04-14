//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include "cPoint.h"
using namespace std;

cPoint::cPoint(){
    tung =0;
    hoanh=0;
}
cPoint::cPoint(int x){
    hoanh =x;
    tung =0;
};
cPoint::cPoint(int x , int  y ){
    hoanh =x;
    tung =y;
}
void cPoint::setX(int x){
    hoanh =x;
}
void cPoint::setY(int y){
    tung =y;
}
int cPoint::getX(){
    return hoanh;
}
int cPoint::getY(){
    return tung;
}
void cPoint::Nhap(){
    cout<<"Nhap hoanh do , tung do cua diem: ";
    cin>>hoanh>>tung;
}
void cPoint::Xuat(){
    cout<<"("<<hoanh<<","<<tung<<") ";
}void cPoint::TinhTien(int dx, int dy) {
    hoanh += dx;
    tung += dy;
}
void cPoint::Phongto(int k){
    hoanh *=k;
    tung *= k;
}
void cPoint::Thunho(int k ){
    hoanh /=k;
    tung /=k;
}
