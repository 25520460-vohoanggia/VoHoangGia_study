//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include "cCandidate.h"
using namespace std;
typedef unsigned int ui;
cCandidate::cCandidate(){
    ma = "";
    ten = "";
    Toan = 0;
    Van = 0;
    Anh = 0;
}
cCandidate::cCandidate(string id, string name, ui day, ui month, ui year, double T, double V, double A)
    : ma(id), ten(name), ngay(day, month, year), Toan(T), Van(V), Anh(A)
{}
void cCandidate::Nhap(){
    cout<<"Nhap ma thi sinh: ";
    getline(cin>>ws,ma);
    cout<<"\nNhap ho va ten thi sinh: ";
    getline(cin>>ws,ten);
    cout<<"\nNhap ngay thang nam sinh thi sinh: ";
    ngay.Nhap();
    cout<<"\nNhap diem Toan: ";
    cin>>Toan;
    cout<<"\nNhap diem Van: ";
    cin>>Van;
    cout<<"\nNhap diem Anh: ";
    cin>>Anh;
}
string cCandidate::getMa(){
    return ma;
}
string cCandidate::getTen(){
    return ten;
}
string cCandidate::getNS() const {
    stringstream ss;
    ss << setw(2) << setfill('0') << ngay.getD() << "/"
       << setw(2) << setfill('0') << ngay.getM() << "/"
       << ngay.getY();
    return ss.str();
}
double cCandidate::getToan(){
    return Toan;
}
double cCandidate::getVan(){
    return Van;
}
double cCandidate::getAnh(){
    return Anh;
}
double cCandidate::TinhTong(){
    double kq;
    kq = Toan + Van + Anh;
    return kq;
}
