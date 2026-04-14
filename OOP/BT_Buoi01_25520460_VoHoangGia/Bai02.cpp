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
void Nhap(Phanso &p, int stt){
    cout<<"Nhap tu so cua phan so thu "<<stt<<" : ";
    cin>>p.tu;
    do{
    cout<<"Nhap mau so cua phan so thu "<<stt<<" : ";
    cin>>p.mau;
    }while(p.mau == 0);
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
Phanso sosanh(Phanso p1, Phanso p2){
    int tu1 = p1.tu *p2.mau;
    int tu2 =p2.tu *p1.mau;
    if (tu1>= tu2) return p1;
    else return p2;
};
int main(){
    Phanso p1,p2;
    Nhap(p1,1);
    Nhap(p2,2);
    Xuat(sosanh(p1,p2));
}