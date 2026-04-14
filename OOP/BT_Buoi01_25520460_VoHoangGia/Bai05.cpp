//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <bits/stdc++.h>
using namespace std;

struct hsinh {
    string hovaten;
    float toan , van ;
};

void Nhap( hsinh &s1){
    cout<<"Nhap ten hoc sinh: ";
    getline( cin, s1.hovaten );
    cout<<"Nhap diem toan: ";
    cin>>s1.toan;
    cout<<"Nhap diem van: ";
    cin>>s1.van;
}

float tbinh( hsinh s1){
     return(s1.toan +s1.van)/2;
}

void Xuat( hsinh s1){
    cout<<"Diem trung binh: "<< tbinh(s1);
}


int main(){
    hsinh s1;
    Nhap (s1);
    Xuat (s1);
}