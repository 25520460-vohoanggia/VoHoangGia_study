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

cDate cDate::operator+(ui k) const{
    cDate kq;
    kq.ngay = ngay + k;
    while (kq.ngay > kq.NgayTrongThang()){
        kq.ngay -= kq.NgayTrongThang();
        kq.thang++;
        if (kq.thang > 12){
            kq.thang = 1;
           kq.nam++;
        }
    }
    return kq; 
}
cDate cDate::operator-(ui k) const {
    cDate kq = *this; // copy đối tượng hiện tại
    kq.ngay -= k;
    while (kq.ngay <= 0) {
        kq.thang--;

        if (kq.thang < 1) {
            kq.thang = 12;
            kq.nam--;
        }
        kq.ngay += kq.NgayTrongThang(); 
    }

    return kq;
}
cDate cDate::operator++() {
    ngay+=1;
    while (ngay > NgayTrongThang()){
        ngay -= NgayTrongThang();
        thang++;
        if (thang > 12){
            thang = 1;
            nam++;
        }
    }
    return *this;
}
cDate cDate::operator--() {
    ngay-=1;
    while (ngay <= 0) {
        thang--;

        if (thang < 1) {
            thang = 12;
            nam--;
        }
        ngay += NgayTrongThang(); 
    }
    return *this;
}
int cDate::ToDays() const {
        int y = nam - 1;
        int days = y * 365 + y/4 - y/100 + y/400;

        for (int i = 1; i < thang; i++) {
            cDate tmp(1, i, nam);
            days += tmp.NgayTrongThang();
        }

        days += ngay;
        return days;
    }

    // khoảng cách giữa 2 ngày
    int cDate::operator-(const cDate& other) const {
        return this->ToDays() - other.ToDays();
    }

    // nhập
    istream& operator>>(istream& in, cDate& d) {
        in >> d.ngay >> d.thang >> d.nam;
        return in;
    }

    // xuất
    ostream& operator<<(ostream& out, const cDate& d) {
        out << d.ngay << "/" << d.thang << "/" << d.nam;
        return out;
    }

cDate::~cDate(){};