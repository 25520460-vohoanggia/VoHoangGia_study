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
    cout<<ngay<<"/"<<thang<<"/"<<nam<<"        ";
    }
void cDate::setY(ui y) {
    nam = y;
}
void cDate::setM(ui m){
    thang = m;
}
void cDate::setD(ui d){
    ngay = d;
}
ui cDate::getY () const{
    return nam;
}
ui cDate::getM ()const{
    return thang;
}
ui cDate::getD ()const{
    return ngay;
}

bool cDate::operator<(const cDate &other) const {
    if (nam != other.nam) return nam < other.nam;
    if (thang != other.thang) return thang < other.thang;
    return ngay < other.ngay;
}

ostream& operator<<(ostream& os, const cDate& d) {
    os << d.ngay << "/" << d.thang << "/" << d.nam;
    return os;
}
