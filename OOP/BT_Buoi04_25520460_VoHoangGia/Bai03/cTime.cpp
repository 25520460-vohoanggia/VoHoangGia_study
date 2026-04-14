//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include "cTime.h"
using namespace std;


    cTime::cTime(){
        giay =0;
    }
    cTime::cTime(int n){
        giay = n;
    }

    cTime& cTime::operator++() {
    giay += 1;
    return *this;
    }
    cTime& cTime::operator--() {
    giay -= 1;
    return *this;
    }
    cTime cTime::operator+(int k) const {
    cTime kq;
    kq.giay = giay + k;

    if (kq.giay < 0) kq.giay = 0;
    else kq.giay = kq.giay % (24 * 3600);

    return kq;
}

cTime cTime::operator-(int k) const {
    cTime kq;
    kq.giay = giay - k;

    if (kq.giay < 0) kq.giay = 0;
    else kq.giay = kq.giay % (24 * 3600);

    return kq;
}
    istream&  operator >> (istream& in, cTime& x){
        in>>x.giay;
        return in;
    }
    ostream& operator << (ostream& out, const cTime& x) {
        out<<x.giay/3600<<":"<<(x.giay%3600) /60 <<":"<< x.giay%60;
        return out;
    }  