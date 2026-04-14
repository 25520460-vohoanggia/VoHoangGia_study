//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <bits/stdc++.h>
#include "cVehicle.h"
typedef unsigned int ui;
using namespace std;

int main(){
    cVehicle xe1 ("Nguyen Van A", "Agela", 20000000,50);
    cVehicle xe2  ("Vo Hoang Gia", " AB ",50000000,150) ;
    cVehicle xe3;
    xe3.Nhap();
     cout<<"\nBang ke khai xe:\n";
    cout<<left<<setw(20)<<"Chu xe"
        <<setw(15)<<"Loai xe"
        <<setw(15)<<"Gia xe"
        <<setw(15)<<"Dung tich"
        <<setw(15)<<"Thue"<<endl;
    xe1.Xuat();
    xe2.Xuat();
    xe3.Xuat();

    return 0;
    
}