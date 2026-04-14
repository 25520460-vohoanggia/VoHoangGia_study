//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <bits/stdc++.h>
#include "cString.h"
using namespace std;
int main(){

    cString s1,s2,s3;

    cout<<"Nhap chuoi 1: ";
    s1.Nhap();

    cout<<"Nhap chuoi 2: ";
    s2.Nhap();

    cout<<"Do dai: "<<s1.Length()<<endl;

    cout<<"Dao chuoi: ";
    s1.Daochuoi();
    s1.Xuat();
    cout<<endl;

    cout<<"Chuoi hoa: ";
    s1.Hoa();
    s1.Xuat();
    cout<<endl;

    cout<<"Noi chuoi: ";
    s3 = s1.Noi(s2);
    s3.Xuat();
}