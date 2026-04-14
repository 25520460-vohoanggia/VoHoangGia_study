//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include "cDagiac.h"
#include <vector>
#include <cmath>
using namespace std;

void cDagiac::Nhap(){
    int n;
    cout<<" So dinh cu da giac: ";
    cin>>n;
    dgiac.resize(n);
    for (int i=0; i<n; i++){
        dgiac[i].Nhap();
    }
}
void cDagiac::Xuat(){
    for(int i=0; i<dgiac.size(); i++ ){
        dgiac[i].Xuat();
    }
}
double cDagiac::TinhCV(){
    double cv=0;
    int n = dgiac.size();
    for (int i=0; i<n ;i++){
        int j =(i +1 )%n;
        cv +=sqrt(pow(dgiac[j].getX()-dgiac[i].getY(),2)) + pow(dgiac[j].getY()-dgiac[i].getX(),2);
    }
    return cv;
}
double cDagiac::TinhDT(){
    double dt =0;
    int n = dgiac.size();
    for (int i=0; i<n ; i++){
        int j =(i+1)%n;
        dt += dgiac[i].getX() * dgiac[j].getY();
        dt-= dgiac[j].getX() * dgiac[i].getY();
    }
    return abs(dt)/2;
}
void cDagiac::Tinhtien(int x, int y){
    for (int i =0 ; i< dgiac.size(); i++){
        dgiac[i].TinhTien(x,y);
    }
}
void cDagiac::Phongto(int k){
    for (int i =0 ; i< dgiac.size(); i++){
        dgiac[i].Phongto(k);
    }
}
void cDagiac::Thunho(int k){
    for (int i =0 ; i< dgiac.size(); i++){
        dgiac[i].Thunho(k);
    }
}
cDagiac::~cDagiac(){}