//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <bits/stdc++.h>
#include "cVehicle.h"
typedef unsigned int ui;
using namespace std;

cVehicle::cVehicle(){
    chuxe = "";
    loai = "";
    gia = 0;
    dungtich = 0;
}
cVehicle::cVehicle( string name, string type, ui cost, ui thetich){
    chuxe = name;
    loai = type;
    gia = cost ;
    dungtich = thetich;
}
void cVehicle::Nhap(){
    cout<<"Ten chu xe: ";
    getline(cin>>ws,chuxe);
    cout<<"Loai xe: ";
    getline(cin>>ws,loai);
    do{
        cout<<"Gia xe: ";
        cin>>gia;
    }while(gia==0);

    do{
        cout<<"Dung tich xylanh: ";
        cin>>dungtich;
    }while(dungtich==0);
}
    void cVehicle::Xuat(){
    cout<<left<<setw(40)<<chuxe
        <<setw(15)<<loai
        <<setw(15)<<gia
        <<setw(15)<<dungtich
        <<setw(15)<<thue()<<endl;
    }
ui cVehicle::thue(){
    ui kq;
    if (dungtich <100){
        kq = gia /100;
    }
    else if( dungtich>=100 && dungtich<=200){
        kq=(gia*3)/100;
    }
    else {
        kq=(gia*5)/100;
    }
    return kq;
}
cVehicle::~cVehicle(){};