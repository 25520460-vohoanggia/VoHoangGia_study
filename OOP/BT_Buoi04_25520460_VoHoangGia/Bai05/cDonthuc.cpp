//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include "cDonthuc.h"
using namespace std;

cDonthuc::cDonthuc(){
    heso=0;
    mu=0;
}
cDonthuc::cDonthuc(int h ,int m ){
    heso = h;
    mu = m;
}
void cDonthuc::Nhap(){
    cout<<"Nhap he so va mu so: ";
    cin>> heso >>mu;
}
void cDonthuc::Xuat(){
    cout<<"("<<heso<<","<<mu<<")"<<" ";
}
int cDonthuc::getHe() const{
    return heso;
}
int cDonthuc::getmu() const {
    return mu;
}
void cDonthuc::setHe(int he){
    heso =he ;
}
void cDonthuc::setMu(int muso){
    mu = muso;
}
cDonthuc cDonthuc::operator+(cDonthuc k) const{
    return  cDonthuc(heso + k.getHe(),mu);
}
cDonthuc cDonthuc::operator - (cDonthuc  k) const {
    return cDonthuc(heso - k.getHe(),mu);
}