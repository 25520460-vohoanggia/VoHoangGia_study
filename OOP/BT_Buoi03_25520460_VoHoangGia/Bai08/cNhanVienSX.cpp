//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include "cNhanVienSX.h"
using namespace std;

double cNhanVienSX::gia = 0;
cNhanVienSX::cNhanVienSX(){
    ma =" ";
    hoten =" ";
    sanpham  =0;
}
cNhanVienSX::cNhanVienSX(string id, string name, ui day, ui month,ui year,int item )
:ma(id) ,hoten(name),ngay(day,month, year), sanpham(item)
{}
void cNhanVienSX::setMa(string id){
    ma = id;
}
void cNhanVienSX::setSP(int item){
    sanpham =item;
}
void cNhanVienSX::setGia(double cost){
    gia = cost ;
}
string cNhanVienSX::getMa() const{
    return ma;
}
string cNhanVienSX::getTen() const{
    return hoten;
}
double cNhanVienSX::getGia(){
    return gia;
}
cDate cNhanVienSX::getNS() const {
   return ngay;
}
string cNhanVienSX::getN() const {
    stringstream ss;
    ss << setw(2) << setfill('0') << ngay.getD() << "/"
       << setw(2) << setfill('0') << ngay.getM() << "/"
       << ngay.getY();
    return ss.str();
}
double cNhanVienSX::getLuong() const{
    return (gia * sanpham);
}

void cNhanVienSX::Nhap(){
    cout<<"Nhap ma nhan vien: ";
    getline(cin>>ws, ma);
    cout<<"Nhap ho va ten nhan vien: ";
    getline (cin>>ws, hoten);
    cout<<"Nhap ngay thang nam sinh: ";
    ngay.Nhap();
    cout<<"Nhap so san pham nhan vien da lam: ";
    cin>>sanpham;
}
void cNhanVienSX::Xuat(){}

