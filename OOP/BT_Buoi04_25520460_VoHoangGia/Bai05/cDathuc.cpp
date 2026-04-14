//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include "cDathuc.h"
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

cDathuc::cDathuc(){}
void cDathuc::Nhap(){
    int n;
    cout<<"Nhap so luong don thuc cua da thuc ";
    cin>>n;
    ds.resize(n);
    for (int i=0; i<n; i++){
        cDonthuc p;
        p.Nhap();
        ds.push_back(p);
    }
}
void cDathuc::Xuat(){
    for (int i=0; i<ds.size(); i++){
        ds[i].Xuat();
    }
}
int cDathuc::TinhgtX(int x){
    int tong = 0;
    for (int i=0; i<ds.size(); i++){
        tong += ds[i].getHe()* pow(x,ds[i].getmu());
    }
    return tong;
}
void cDathuc::setDS(cDonthuc p){  
    ds.push_back(p);
}
cDathuc cDathuc::operator+(const cDathuc& k){
    cDathuc kq;
    int n = max(ds.size(), k.ds.size());

    for (int i = 0; i < n; i++){
        int he = 0;

        if (i < ds.size()) he += ds[i].getHe();
        if (i < k.ds.size()) he += k.ds[i].getHe();

        cDonthuc temp;
        temp.setHe(he);
        temp.setMu(i);

        kq.setDS(temp);
    }

    return kq;
}
cDathuc cDathuc::Tru(cDathuc k){
    cDathuc kq;
    int n = max(ds.size(), k.ds.size());

    for(int i = 0; i < n; i++){
        int he = 0;

        if(i < ds.size()) he += ds[i].getHe();
        if(i < k.ds.size()) he -= k.ds[i].getHe();

        cDonthuc temp;
        temp.setHe(he);
        temp.setMu(i);

        kq.setDS(temp);
    }
    return kq;
}
cDathuc cDathuc::operator-(const cDathuc& k){
   cDathuc kq;
    int n = max(ds.size(), k.ds.size());

    for(int i = 0; i < n; i++){
        int he = 0;

        if(i < ds.size()) he += ds[i].getHe();
        if(i < k.ds.size()) he -= k.ds[i].getHe();

        cDonthuc temp;
        temp.setHe(he);
        temp.setMu(i);

        kq.setDS(temp);
    }
    return kq;
}
cDathuc::~cDathuc(){};