//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <iostream>
#include "cPhanso.h"
using namespace std;


void cPhanso::Nhap( ){
    cout<<"Nhap tu so: ";
    cin>>iTuso;
    do{
    cout<<"Nhap mau so: ";
    cin>>iMauso;
    }while(iMauso == 0);
}
cPhanso::cPhanso(int t, int m) {
    iTuso = t;
    if(m == 0){
        cout << "Mau so khong hop le, gan = 1\n";
        iMauso = 1;
    }
    else
        iMauso = m;
}
cPhanso::cPhanso(int n){
    iTuso = n;
    iMauso =1;
}
cPhanso::cPhanso(){
    iTuso = 0;
    iMauso = 1;
}
void cPhanso::Xuat(){
    cout<<iTuso<<"/"<<iMauso;
}
int cPhanso::getTu(){
    return iTuso;
}
int cPhanso::getMau(){
    return iMauso;
}
int cPhanso::uc(int tu , int mau){
    tu = abs(tu);
    mau = abs(mau);
    while (mau != 0) {
        int r = tu % mau;
        tu = mau;
        mau = r;
    }
    return tu;
}
cPhanso cPhanso::rutgon() {
        int k = uc(iTuso, iMauso);
        iTuso /= k;
        iMauso /= k;

        if (iMauso < 0) {
            iTuso = -iTuso;
            iMauso = -iMauso;
        }
        return *this;
}
    istream& operator>>(istream& in, cPhanso& x){
    do{
        in >> x.iTuso >> x.iMauso;
        if (x.iMauso == 0) {
            cout << "Mau so phai khac 0. Nhap lai!\n";
        }
    }while (x.iMauso == 0);
    return in;
}
    ostream& operator<<(ostream& out, const cPhanso& x){
        out << x.iTuso ;
        if (x.iMauso == 1) return out;
        else {
        cout<<"/"<<x.iMauso;
        return out;
        }
    }
    bool cPhanso::operator> (cPhanso p) const {
        if (iTuso * p.iMauso > p.iTuso *iMauso) return true;
        else return false;
    }
    bool cPhanso::operator< (cPhanso p) const {
        if (iTuso * p.iMauso < p.iTuso *iMauso) return true;
        else return false;
    }
    bool cPhanso::operator==(cPhanso p) const {
        if (iTuso * p.iMauso == iMauso * p.iTuso) return true;
        else return false;
    }
    cPhanso cPhanso::operator+(cPhanso p) const {
        cPhanso kq;
        kq.iTuso = iTuso * p.iMauso + p.iTuso * iMauso;
        kq.iMauso = iMauso * p.iMauso;
        return kq.rutgon();
    }
    cPhanso cPhanso::operator- (cPhanso p) const{
        cPhanso kq;
        kq.iTuso = iTuso * p.iMauso - p.iTuso * iMauso;
        kq.iMauso = iMauso * p.iMauso;
        return kq.rutgon();
    }
    cPhanso cPhanso::operator* (cPhanso p) const{
        cPhanso kq;
        kq.iTuso = iTuso * p.iTuso;
        kq.iMauso = iMauso * p.iMauso;
        return kq.rutgon();
    }
    cPhanso cPhanso::operator/ (cPhanso p) const{
        cPhanso kq;
        if (p.iTuso !=0){
        kq.iTuso = iTuso * p.iMauso;
        kq.iMauso = iMauso * p.iTuso;
        }
        else cout<<" Khong the chia";
        return kq.rutgon();
    }
cPhanso::~cPhanso(){};