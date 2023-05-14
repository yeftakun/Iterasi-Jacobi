#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Input matriks augmented
    double a11, a12, a13, b1;
    double a21, a22, a23, b2;
    double a31, a32, a33, b3;
    cout << "Nama	: Yefta Yosia Asyel"<<endl<<"NIM	: 220211060372"<<endl<<"Kelas	: TIK1052H"<<endl;
    cout<< "Program Metode Iterasi Jacobi"<<endl;
    cout<< "==============================="<<endl<<endl;
    cout << "Masukkan matriks augmented:" << endl;
    cout << "a11: ";
    cin >> a11;
    cout << "a12: ";
    cin >> a12;
    cout << "a13: ";
    cin >> a13;
    cout << "b1: ";
    cin >> b1;
    cout << "a21: ";
    cin >> a21;
    cout << "a22: ";
    cin >> a22;
    cout << "a23: ";
    cin >> a23;
    cout << "b2: ";
    cin >> b2;
    cout << "a31: ";
    cin >> a31;
    cout << "a32: ";
    cin >> a32;
    cout << "a33: ";
    cin >> a33;
    cout << "b3: ";
    cin >> b3;

    // Input nilai awal
    double x1, x2, x3;
    cout << "Masukkan nilai awal:" << endl;
    cout << "x1(0): ";
    cin >> x1;
    cout << "x2(0): ";
    cin >> x2;
    cout << "x3(0): ";
    cin >> x3;

    // Input batas toleransi (epsilon)
    double epsilon;
    cout << "Masukkan batas toleransi (epsilon): ";
    cin >> epsilon;

    // Hitung solusi SPL menggunakan metode Jacobi
    double x1_new, x2_new, x3_new;
    double error = 1.0; // inisialisasi error
    int iter = 0; // inisialisasi iterasi
    while (error > epsilon) {
        x1_new = (b1 - a12*x2 - a13*x3) / a11;
        x2_new = (b2 - a21*x1 - a23*x3) / a22;
        x3_new = (b3 - a31*x1 - a32*x2) / a33;
        error = max(abs(x1_new - x1), max(abs(x2_new - x2), abs(x3_new - x3))); // hitung error
        x1 = x1_new;
        x2 = x2_new;
        x3 = x3_new;
        iter++;
    }

    // Tampilkan solusi SPL
    cout << "______________"<<endl;
    cout << "Solusi SPL:" << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    cout << "x3 = " << x3 << endl;
    cout << "Jumlah iterasi: " << iter << endl;

    return 0;
}

