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
    cPhuc::cPhuc(double a){
        thuc = a;
        ao =0;
    }
    cPhuc::cPhuc( double a , double b){
        thuc = a;
        ao = b;
    }
    cPhuc cPhuc::operator+(cPhuc b ) const {
        cPhuc kq;
        kq.thuc=thuc+b.thuc;
        kq.ao=ao+b.ao;
        return kq;
    }
    cPhuc cPhuc::operator-(cPhuc b) const {
        cPhuc kq;
        kq.thuc=thuc-b.thuc;
        kq.ao=ao-b.ao;
        return kq;
    }
    cPhuc cPhuc::operator*(cPhuc b) const {
        cPhuc kq;
        kq.thuc=thuc*b.thuc-ao*b.ao;
        kq.ao=thuc*b.ao+ao*b.thuc;
        return kq;
    }
    cPhuc cPhuc::operator/(cPhuc b) const{
        cPhuc kq;
        if(b.thuc ==0 &&b.ao==0) return cPhuc();
        double mau = b.thuc*b.thuc + b.ao*b.ao;
        kq.thuc = (thuc*b.thuc + ao*b.ao)/mau;
        kq.ao   = (b.thuc*ao - thuc*b.ao)/mau;
        return kq;
    }
    bool cPhuc::operator== (cPhuc b) const {
        if ( thuc == b.thuc && ao ==b.ao) return true;
        else return false;
    }
    bool cPhuc::operator!= (cPhuc b) const {
        if ( thuc != b.thuc || ao != b.ao ) return true;
        else return false;
    }
    istream& operator>>(istream& in, cPhuc& x){
        in >> x.thuc >> x.ao;
        return in;
    }
    ostream& operator<<(ostream& out, const cPhuc& x){
        out << x.thuc;
    if (x.ao >= 0)
        out << "+" << x.ao << "i";
    else
        out << x.ao << "i";
    return out;
    }
    cPhuc::~cPhuc(){};
