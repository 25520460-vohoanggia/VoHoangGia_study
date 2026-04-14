//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <bits/stdc++.h>
using namespace std;

struct Phanso {
    int iTuso;
    int iMauso;
};
void Nhap (Phanso &p, int k){
    cout<< "Nhap tu so cua phan so thu "<<k<<" : ";
    cin>>p.iTuso;
    do{
    cout<<"Nhap mau so cua phan so thu "<<k<<" : ";
    cin>>p.iMauso;
    }while(p.iMauso == 0);
}
void Xuat (Phanso kq){
    cout << kq.iTuso << "/"<<kq.iMauso;
}
Phanso Cong (Phanso p1, Phanso p2){
    Phanso kq;
    kq.iTuso = p1.iTuso*p2.iMauso+p2.iTuso*p1.iMauso;
    kq.iMauso = p1.iMauso*p2.iMauso;
    return kq; 
}
Phanso Tru (Phanso p1, Phanso p2){
    Phanso kq;
    kq.iTuso = p1.iTuso*p2.iMauso-p2.iTuso*p1.iMauso;
    kq.iMauso = p1.iMauso*p2.iMauso;
    return kq; 
}
Phanso Nhan (Phanso p1, Phanso p2){
    Phanso kq;
    kq.iTuso = p1.iTuso*p2.iTuso;
    kq.iMauso = p1.iMauso*p2.iMauso;
    return kq; 
}
Phanso Chia (Phanso p1, Phanso p2){
    Phanso kq;
    kq.iTuso = p1.iTuso*p2.iMauso;
    kq.iMauso = p1.iMauso*p2.iTuso;
    return kq; 
}
int main (){
    Phanso p1, p2;
    Nhap (p1,1);
    Nhap (p2,2);
    cout<<"Tong 2 phan so la: "; Xuat(Cong(p1,p2));
    cout<<endl;
    cout<<"Hieu 2 phan so la: "; Xuat(Tru(p1,p2));
    cout<<endl;
    cout<<"Tich 2 phan so la: "; Xuat(Nhan(p1,p2));
    cout<<endl;
    cout<<"Thuong 2 phan so la: "; Xuat(Chia(p1,p2));
}
