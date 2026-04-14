//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include "cArray.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void cArray::Nhap(){
    int n; 
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    for (int i=0; i<n; i++){
        cSTN stn;
        stn.Nhap();
        ds.push_back(stn);
    }
}
void cArray::Xuat(){
    for (int i=0; i< ds.size();i++ ){
        cout<<ds[i].getVal()<<" ";
    }
}

int cArray::DemX(int x){
    int count =0;
    for (int i=0; i< ds.size();i++ ){
        if (ds[i].getVal()==x){
            count++;
        }
    }
    return count;
}
bool cArray::KtraTang(){
    for (int i=1 ; i< ds.size(); i++){
        if (ds[i-1].getVal() > ds[i].getVal()) return false;
    }
    return true;
}
int cArray::TimleNN(){
    cSTN min;
    min.setVal(0);
    bool flag = false;
    for (int i=0; i < ds.size(); i++){
        if (ds[i].Ktrale()){
            if (!flag){
                min= ds[i];
                flag = true;
            }
            else {
                if ( ds[i]<min){
                    min=ds[i];
                }
            }
        }
    }
    if (min.getVal() == 0) return 0;
    return min.getVal();
}
int cArray::TimSNTLN(){
    bool flag = false;
    int snt;
    for(int i=0; i<ds.size(); i++){
        if (ds[i].KtraSNT()){
            if (!flag){
                snt = ds[i].getVal();
                flag = true; 
            }
            else {
                if (snt <ds[i].getVal()){
                    snt = ds[i].getVal();
                }
            }
        }
    }
    return snt;
}
void cArray::SapxepTang(){
    for (int i=0; i<ds.size(); i++){
        for (int j = i +1 ; j < ds.size(); j++){
            if (ds[j] < ds[i]){
                swap(ds[j],ds[i]);
            }
        }
    }
}
void cArray::SapxepGiam(){
    for (int i=0; i<ds.size(); i++){
        for (int j = i +1 ; j < ds.size(); j++){
            if (ds[i] < ds[j]){
                swap(ds[i],ds[j]);
            }
        }
    }
}