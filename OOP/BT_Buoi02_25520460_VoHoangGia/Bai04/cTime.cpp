//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <bits/stdc++.h>
#include "cTime.h"
using namespace std;
typedef unsigned int  ui;


cTime::cTime(){
    h = m = s = 0;
}
cTime::cTime(ui gio, ui phut=0 ,ui giay=0){
    h=gio;
    m=phut;
    s=giay;
}
void cTime::Nhap(){
    do{
    cin>>h>>m>>s;
    }while ( h>23 || m>59 ||s>59);
}
void cTime::Xuat(){
    cout << setw(2) << setfill('0') << h << ":"
     << setw(2) << m << ":"
     << setw(2) << s;
}
ui cTime::getH(){
    return h;
}
ui cTime::getM(){
    return m;
}
ui cTime::getS(){
    return s;
}
void cTime::setH(ui  gio){
    h=gio;
}
void cTime::setM(ui phut){
    m=phut;
}
void cTime::setS(ui giay){
    s=giay;
}
void cTime::TangS(ui p){
    ui tong = h*3600 + m*60 + s;
    tong = (tong + p ) % 86400;
    h = tong / 3600;
    m = (tong % 3600) / 60;
    s = tong % 60;
}
void cTime::GiamS(ui p){
    ui tong = h*3600 + m*60 + s;
    tong = (tong + 86400 - p % 86400) % 86400;
    h = tong / 3600;
    m = (tong % 3600) / 60;
    s = tong % 60;
}
void cTime::TangM(ui p){
    ui tong =h*60 +m;
    tong = (tong + p )%1440;
    h= tong/60;
    m=tong%60; 
}
void cTime::GiamM(ui p){
    ui tong = h*60 + m;
    tong = (tong + 1440 - p % 1440) % 1440;
    h = tong / 60;
    m = tong % 60 ;
}
void cTime::TangH(ui p){
    h=( h +p )%24;
}
void cTime::GiamH(ui p){
    h = (h + 24 -p%24) %24;
}
cTime::~cTime(){};