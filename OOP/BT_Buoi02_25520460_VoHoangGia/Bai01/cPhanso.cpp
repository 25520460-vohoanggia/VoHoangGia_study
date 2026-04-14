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
cPhanso cPhanso::rutgon(cPhanso p){
    int k= uc(p.getTu(), p.getMau());
    p.iTuso /= k;
    p.iMauso /=k;
    if(p.iMauso < 0){
        p.iTuso = -p.iTuso;
        p.iMauso = -p.iMauso;
    }
    return p;
}
cPhanso cPhanso::Cong(cPhanso p){
    cPhanso kq;
    kq.iTuso = iTuso * p.iMauso + p.iTuso * iMauso;
    kq.iMauso = iMauso * p.iMauso;
    return rutgon(kq);
}
cPhanso cPhanso::Tru(cPhanso p){
    cPhanso kq;
    kq.iTuso = iTuso * p.iMauso - p.iTuso * iMauso;
    kq.iMauso = iMauso * p.iMauso;
    return rutgon(kq);
}
cPhanso cPhanso::Nhan(cPhanso p){
    cPhanso kq;
    kq.iTuso = iTuso * p.iTuso;
    kq.iMauso = iMauso * p.iMauso;
    return rutgon(kq);
}
cPhanso cPhanso::Chia(cPhanso p){
    cPhanso kq;
    if (p.iTuso !=0){
    kq.iTuso = iTuso * p.iMauso;
    kq.iMauso = iMauso * p.iTuso;
    }
    else cout<<" Khong the chia";
    return rutgon(kq);
}
cPhanso::~cPhanso(){};