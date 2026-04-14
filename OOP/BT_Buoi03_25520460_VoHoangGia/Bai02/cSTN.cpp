//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include "cSTN.h"
#include <cmath>
using namespace std;

void cSTN::Nhap(){
    cin>>stn;
}
void cSTN::setVal(int x){
    stn = x;
}
int cSTN::getVal() const{
    return stn;
}
bool cSTN::operator <(const cSTN &p) const{
    return getVal() <  p.getVal();
}
bool cSTN::Ktrale(){
   return stn % 2 != 0;
}
bool cSTN::KtraSNT(){
    if (stn<2) return false;
    for (int i=2; i<=sqrt(stn);i++){
        if (stn%i==0) return false;
    }
    return true;
}