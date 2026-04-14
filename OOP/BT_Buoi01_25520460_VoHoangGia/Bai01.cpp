//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <iostream>
using namespace std;

struct Phanso {
    int tu;
    int mau;
};
void Nhap(Phanso &p){
    cout<<"Nhap tu so: ";
    cin>>p.tu;
    cout<<"Nhap mau so: ";
    cin>>p.mau;
}
void Xuat (Phanso kq){
    cout<<"Phan so can tim: ";
    cout<<kq.tu<<"/"<<kq.mau;
}
int uc( int tu, int mau){
     while (mau != 0) {
        int r = tu % mau;
        tu = mau;
        mau = r;
    }
    return tu;
}
void rutgon(Phanso &p){
    int k=uc(p.tu,p.mau) ;
    p.tu =p.tu /k ;
    p.mau= p.mau / k;
};

int main(){
    Phanso p;
    Nhap(p);
    rutgon(p);
    Xuat(p);
}