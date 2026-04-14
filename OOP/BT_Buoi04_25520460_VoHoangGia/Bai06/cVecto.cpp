//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <iostream>
#include <vector>
using namespace std;

class CVector {
private:
    vector<double> data;

public:
    // Constructor
    CVector(int n = 0) {
        data.resize(n, 0);
    }
    int size() const {
        return data.size();
    }
    // Nhập
    friend istream& operator>>(istream& in, CVector& v) {
        int n;
        cout << "Nhap so chieu: ";
        in >> n;
        v.data.resize(n);
        cout << "Nhap cac phan tu:\n";
        for (int i = 0; i < n; i++) {
            in >> v.data[i];
        }
        return in;
    }
    // Xuất
    friend ostream& operator<<(ostream& out, const CVector& v) {
        for (double x : v.data) {
            out << x << " ";
        }
        return out;
    }
    CVector operator+(const CVector& other) const {
        int n = size();
        CVector res(n);
        for (int i = 0; i < n; i++) {
            res.data[i] = data[i] + other.data[i];
        }
        return res;
    }

    CVector operator-(const CVector& other) const {
        int n = size();
        CVector res(n);
        for (int i = 0; i < n; i++) {
            res.data[i] = data[i] - other.data[i];
        }
        return res;
    }
    // Nhân vô hướng
    double operator*(const CVector& other) const {
        double sum = 0;
        for (int i = 0; i < size(); i++) {
            sum += data[i] * other.data[i];
        }
        return sum;
    }
    double& operator[](int i) {
        return data[i];
    }
    double operator[](int i) const {
        return data[i];
    }
};