//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include "cNhanvienVP.h"
using namespace std;

cNhanvienVP::cNhanvienVP(){
    ma =" ";
    hoten =" ";
    luong  =0;
}
cNhanvienVP::cNhanvienVP(string id, string name, ui day, ui month,ui year,double wage)
:ma(id) ,hoten(name),ngay(day,month, year), luong(wage)
{}
void cNhanvienVP::setMa(string id){
    ma = id;
}
void cNhanvienVP::setLuong(int wage){
    luong = wage ;
}
string cNhanvienVP::getMa() const{
    return ma;
}
string cNhanvienVP::getTen() const{
    return hoten;
}
cDate cNhanvienVP::getNS() const {
   return ngay;
}
string cNhanvienVP::getN() const{
    stringstream ss;
    ss << setw(2) << setfill('0') << ngay.getD() << "/"
       << setw(2) << setfill('0') << ngay.getM() << "/"
       << ngay.getY();
    return ss.str();
}
double cNhanvienVP::getLuong() const{
    return luong;
}

void cNhanvienVP::Nhap(){
    cout<<"Nhap ma nhan vien: ";
    getline(cin>>ws, ma);
    cout<<"Nhap ho va ten nhan vien: ";
    getline (cin>>ws, hoten);
    cout<<"Nhap ngay thang nam sinh: ";
    ngay.Nhap();
    cout<<"Nhap luong cua nhan vien: ";
    cin>>luong;
}
void cNhanvienVP::Xuat(){

}