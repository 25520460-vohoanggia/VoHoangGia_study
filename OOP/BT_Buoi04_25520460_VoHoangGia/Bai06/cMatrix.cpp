//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include "cVecto.cpp"
#include <vector>
using namespace std;
class CMatrix {
private:
    vector<vector<double>> a;
    int rows, cols;

public:
    CMatrix(int r = 0, int c = 0) {
        rows = r;
        cols = c;
        a.assign(r, vector<double>(c, 0));
    }
    friend istream& operator>>(istream& in, CMatrix& m) {
        cout << "Nhap so dong va cot: ";
        in >> m.rows >> m.cols;
        m.a.assign(m.rows, vector<double>(m.cols));

        cout << "Nhap ma tran:\n";
        for (int i = 0; i < m.rows; i++) {
            for (int j = 0; j < m.cols; j++) {
                in >> m.a[i][j];
            }
        }
        return in;
    }
    friend ostream& operator<<(ostream& out, const CMatrix& m) {
        for (int i = 0; i < m.rows; i++) {
            for (int j = 0; j < m.cols; j++) {
                out << m.a[i][j] << " ";
            }
            out << endl;
        }
        return out;
    }
    // Nhân ma trận với vector
    CVector operator*(const CVector& v) const {
        CVector res(rows);

        for (int i = 0; i < rows; i++) {
            res[i] = 0;
            for (int j = 0; j < cols; j++) {
                res[i] += a[i][j] * v[j];
            }
        }
        return res;
    }
    // Nhân ma trận với ma trận
    CMatrix operator*(const CMatrix& other) const {
        CMatrix res(rows, other.cols);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < other.cols; j++) {
                res.a[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    res.a[i][j] += a[i][k] * other.a[k][j];
                }
            }
        }
        return res;
    }
};