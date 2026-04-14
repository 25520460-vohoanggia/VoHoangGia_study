//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include "cPhanso.h"
#include <iostream>
using namespace std;

int main()
{
	cPhanso p1,p2,kq;
    cout<<"Nhap tu so va mau so cho phan so thu nhat: ";
    cin>>p1;
    cout<<"\nNhap tu so va mau so cho phan so thu hai: ";
    cin>>p2;
    cout<<"\nTong hai phan so: "<<p1+p2;
    cout<<"\nHieu hai phan so: "<<p1-p2;
    cout<<"\nTich hai phan so: "<<p1*p2;
    cout<<"\nThuong hai phan so: "<<p1/p2;
    cout<<"\nHai phan so nay: ";
    if (p1 == p2 ) cout<<"Bang nhau";
    else if (p1 > p2)  cout<<"Phan so thu nhat lon hon ("<<p1<<")";
    else cout<<"Phan so thu hai lon hon ("<<p2<<")";
}

