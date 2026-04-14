//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include "cDonthuc.h"
#include <vector>
using namespace std;

class cDathuc{
    private:
        vector<cDonthuc> ds;
    public:
    cDathuc();
    void Nhap();
    void Xuat();
    int TinhgtX(int x);
    void setDS( cDonthuc );
    cDathuc operator+ (cDathuc ) const;
    cDathuc operator- (cDathuc ) const;
    cDathuc Cong(const cDathuc&);
    cDathuc Tru(cDathuc);
    cDathuc operator+(const cDathuc& );
    cDathuc operator-(const cDathuc& );
    ~cDathuc();
};

