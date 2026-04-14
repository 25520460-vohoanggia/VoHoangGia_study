//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <bits/stdc++.h>
#include "cString.h"
using namespace std;

cString::cString(){}
void cString::Nhap(){
    string temp;
    getline(cin>>ws,temp);
    chuoi.assign(temp.begin(),temp.end());
}
void cString::Xuat(){
    for(char c : chuoi)
        cout<<c;
}
int cString::Length(){
    return chuoi.size();
}
cString cString::Noi(cString s){
    cString kq = *this;
    for(char c : s.chuoi)
        kq.chuoi.push_back(c);
    return kq;
}
void cString::Daochuoi(){
    reverse(chuoi.begin(),chuoi.end());
}
void cString::Hoa(){
    for(char &c : chuoi)
        c = toupper(c);
}
void cString::Thuong(){
    for(char &c : chuoi)
        c = tolower(c);
}
cString::~cString(){};