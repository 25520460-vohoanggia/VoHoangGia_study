//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <bits/stdc++.h>
#include "cPoint.h"
using namespace std;

cPoint::cPoint(){
    x=0; y=0;
}
cPoint::cPoint(double xp, double yp){
    x=xp;
    y=yp;
}
void cPoint::Nhap(){
    cout<<"\nNhap hoanh do: ";
    cin>>x;
    cout<<"Nhap tung do: ";
    cin>>y;
}
void cPoint::Xuat(){
    cout<<"("<<x<<";"<<y<<")";
}
void cPoint::setTung( double ym){
    y=ym;
}
void cPoint::setHoanh(double xm){
    x=xm;
}
double cPoint::getTung(){
    return y;
}
double cPoint::getHoanh(){
    return x;
}
void cPoint::Tinhtien( cPoint d){
    x=x+d.x;
    y=y+d.y;
}
cPoint::~cPoint(){};