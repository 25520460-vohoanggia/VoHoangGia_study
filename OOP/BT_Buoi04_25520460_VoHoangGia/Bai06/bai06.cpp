//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include "cMatrix.cpp"
#include <vector>
using namespace std;
int main() {
    CMatrix A, B;
    CVector v;

    cout << "Nhap ma tran A:\n";
    cin >> A;

    cout << "Nhap ma tran B:\n";
    cin >> B;

    cout << "Nhap vector v:\n";
    cin >> v;

    cout << "\nA * v = \n";
    cout << A * v << endl;

    cout << "\nA * B = \n";
    cout << A * B << endl;

    return 0;
}