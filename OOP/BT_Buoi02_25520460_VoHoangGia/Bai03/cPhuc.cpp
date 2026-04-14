//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <bits/stdc++.h>
#include "cPhuc.h"
using namespace std;

    cPhuc::cPhuc(){
        thuc=0;
        ao=0;
    }
    cPhuc::cPhuc( double a , double b){
        thuc = a;
        ao = b;
    }
    void cPhuc::Nhap(){
        cout<<"Nhap phan thuc ";
        cin>>thuc;
        cout<<"Nhap phan ao ";
        cin>>ao;
    }
    void cPhuc::Xuat(){
        cout<<"("<<thuc<<","<<ao<<")";
    }
    cPhuc cPhuc::Cong(cPhuc b){
        cPhuc kq;
        kq.thuc=thuc+b.thuc;
        kq.ao=ao+b.ao;
        return kq;
    }
    cPhuc cPhuc::Tru(cPhuc b){
        cPhuc kq;
        kq.thuc=thuc-b.thuc;
        kq.ao=ao-b.ao;
        return kq;
    }
    cPhuc cPhuc::Nhan(cPhuc b){
        cPhuc kq;
        kq.thuc=thuc*b.thuc-ao*b.ao;
        kq.ao=thuc*b.ao+ao*b.thuc;
        return kq;
    }
    cPhuc cPhuc::Chia(cPhuc b){
        cPhuc kq;
        if(b.thuc ==0 &&b.ao==0) return cPhuc();
        double mau = b.thuc*b.thuc + b.ao*b.ao;
        kq.thuc = (thuc*b.thuc + ao*b.ao)/mau;
        kq.ao   = (b.thuc*ao - thuc*b.ao)/mau;
        return kq;
    }
    cPhuc::~cPhuc(){};
