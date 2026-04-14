//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include "cCandidate.h"
using namespace std;

class cListCandidate{
    private:
    vector <cCandidate> dsTS;
    public:
    void Nhap();
    void Xuattren15();
    void Xuat(cCandidate);
    cCandidate TimTScaonhat();
    void Sapxepgiamdiem();
    int getSize();
    cCandidate getCandidate(int );
    ~cListCandidate();
};