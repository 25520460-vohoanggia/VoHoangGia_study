//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <iostream>
using namespace std;

class cTime {
    private:
    int giay ;
    public:
    cTime();
    cTime(int );
    cTime& operator++() ;
    cTime& operator--() ;
    cTime operator+(int) const;
    cTime operator-(int) const;
    friend istream& operator >> (istream& in, cTime& x);
    friend ostream& operator << (ostream& out, const cTime& x);
};