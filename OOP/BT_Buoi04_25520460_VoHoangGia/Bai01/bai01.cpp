//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <bits/stdc++.h>
#include "cPhuc.h"
using namespace std;

int main(){
    cPhuc A , B;
    cout<<"Nhap phan thuc va ao cua so phuc thu nhat: ";
    cin>>A;
    cout<<"Nhap phan thuc va ao cua so phuc thu hai: ";
    cin>>B;
    cout<<"Tong 2 so phuc: " << A +B;
    cout<<"\nHieu 2 so phuc: " <<A-B;
    cout<<"\nTich 2 so phuc: " << A * B;
    cout<<"\nThuong 2 so phuc: " <<A /B ;
    cout<<"\nHai so phuc nay: ";
    if (A == B)  cout<<"Bang nhau";
    if (A != B) cout<<"Khac nhau";
}