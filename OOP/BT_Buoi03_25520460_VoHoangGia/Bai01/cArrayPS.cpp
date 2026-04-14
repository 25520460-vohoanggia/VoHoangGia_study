//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include "cArrayPS.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void cArrayPS::Nhap(){
    int n;
    cout<<"Nhap so luong phan so can quan ly: ";
    cin>>n;
    for (int i=0; i<n; i++){
        cPhanso p;
        p.Nhap();
        dsPS.push_back(p);
    }
}
void cArrayPS::Xuat(){
    for (int i=0; i < dsPS.size();i++){
        dsPS[i].Xuat();
    }
}
cPhanso cArrayPS::TongPS(){
    cPhanso kq(0,1) ;
    for (int i=0;  i < dsPS.size();i++){
        kq = kq.Cong(dsPS[i]);
    }
    return kq;
}
cPhanso cArrayPS::TimPSTuSNTLN(){  
    cPhanso kq(0,1);
    int tumax=0;
    for (int i=0 ; i<dsPS.size(); i++){
        if (dsPS[i].KtraSNT(dsPS[i].getTu()))
            if (tumax <dsPS[i].getTu()){
                tumax =dsPS[i].getTu();
                kq = dsPS[i];
            }
            
    }
    return kq;
}
    

cPhanso cArrayPS::TimPSLonNhat(){
    if (dsPS.empty()) return cPhanso();
    cPhanso max = dsPS[0];
    for (int i=1; i<dsPS.size();i++){
        if (dsPS[i].sosanh(dsPS[i], max)){
            max= dsPS[i];
        }
    }
    return max;
}
cPhanso cArrayPS::TimPSNhoNhat(){
    if (dsPS.empty()) return cPhanso();
    cPhanso min = dsPS[0];
    for (int i=1; i<dsPS.size();i++){
        if (dsPS[i].sosanh(min, dsPS[i])){
            min= dsPS[i];
        }
    }
    return min;
}
void cArrayPS::SapXepTang(){
    for (int i=0; i<dsPS.size();i++){
        for (int j=i+1; j<dsPS.size();j++){
            if (dsPS[i].sosanh(dsPS[i], dsPS[j])){
                swap(dsPS[i],dsPS[j]);
            }
        }
    }
}
void cArrayPS::SapXepGiam(){
    for (int i=0; i<dsPS.size();i++){
        for (int j=i+1; j<dsPS.size();j++){
            if (dsPS[j].sosanh(dsPS[j], dsPS[i])){
                swap(dsPS[i],dsPS[j]);
            }
        }
    }
}