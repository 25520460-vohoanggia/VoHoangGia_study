//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <bits/stdc++.h>
#include "cDate.h"
using namespace std;
typedef unsigned int ui;


cDate::cDate(){
    ngay=1;
    thang=1;
    nam=1;
}
cDate::cDate (ui ng, ui th, ui na){
    ngay=ng;
    thang=th;
    nam=na;
}
void cDate::Nhap(){
    int maxday;
    bool nhuan;
    do{
        cout<< "Nhap ngay thang nam ";
        cin >> ngay >> thang >> nam;
        nhuan = (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
        switch(thang){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                maxday = 31;
                break;
            case 4: case 6: case 9: case 11:
                maxday = 30;
                break;
            case 2:
                if(nhuan) maxday = 29;
                else maxday = 28;
                break;
            default:
                maxday = 0;
        }
    }while(thang < 1 || thang > 12 || ngay < 1 || ngay > maxday);
}
void cDate::Xuat(){
        cout<<ngay<<"/"<<thang<<"/"<<nam;
    }
void cDate::setY(ui y){
    nam = y;
}
void cDate::setM(ui m){
    thang = m;
}
void cDate::setD(ui d){
    ngay = d;
}
ui cDate::getY (){
    return nam;
}
ui cDate::getM (){
    return thang;
}
ui cDate::getD (){
    return ngay;
}
bool cDate::Ktra(){
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}
int cDate::week(){
    int d = ngay;
    int m = thang;
    int y = nam;
    if (m == 1 || m == 2){
        m += 12;
        y--;
    }
    int h = (d + (13*(m+1))/5 + y + y/4 - y/100 + y/400) % 7;
    switch(h){
        case 0: return 7;
        case 1: return 8;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
    }
    return 0;
}
int cDate::NgayTrongThang(){
    switch(thang){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return Ktra() ? 29 : 28;
    }
    return 30;
}
void cDate::TangNgay(ui p){
    ngay += p;
    while (ngay > NgayTrongThang()){
        ngay -= NgayTrongThang();
        thang++;
        if (thang > 12){
            thang = 1;
            nam++;
        }
    }
}
void cDate::GiamNgay(ui p){
    int temp=ngay-p;
    if (temp>0 ) {
        ngay= temp;
    }
    while (temp <= 0){
        thang--;
        if (thang < 1){
            thang = 12;
            nam--;
        }
        temp += NgayTrongThang();
    }
    ngay=temp;
}
void cDate::TangThang(ui p){
    thang+=p;
    while (true){
        if (thang>=1 && thang<=12) break;
        thang-=12;
        nam++;
    }
    if (ngay >NgayTrongThang()) 
            ngay =NgayTrongThang();
}
void cDate::GiamThang(ui p){
    int temp = thang - p;
    while (true){
        if (temp>=1 && temp<=12) break;
        temp+=12;
        nam--;
    }
    thang=temp;
    if (ngay >NgayTrongThang()) 
        ngay =NgayTrongThang();
    
}
void cDate::TangNam(ui p){
    nam+=p;
    if (thang == 2 && ngay > NgayTrongThang())
        ngay = NgayTrongThang();
}
void cDate::GiamNam(ui p ){
    nam-=p;
    if (thang == 2 && ngay > NgayTrongThang())
        ngay = NgayTrongThang();
}
cDate::~cDate(){};