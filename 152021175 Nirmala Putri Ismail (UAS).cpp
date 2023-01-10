#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
  cout << "==================================" << endl;
  cout << "       UAS PEMROGRAMAN DASAR      " << endl;
  cout << "  152021175 Nirmala Putri Ismail  " << endl;
  cout << "==================================" << endl;

  float banyak, x[100], y[100], xy, x2, y2, sigmax, sigmay, x1, y1, atas, bawah,
      bawah1, bawah2;
  string hubkor, hub;
  int repeat;

  cout << "Masukan Banyaknya Nilai : ";
  cin >> banyak;
  cout << endl;

  for (int i = 1; i <= banyak; i++) {
    cout << "Masukan nilai x ke-" << i << " : ";
    cin >> x[i];
    cout << "Masukan nilai y ke-" << i << ": ";
    cin >> y[i];
    cout << endl;
  }

  sigmax = 0;
  for (int i = 1; i <= banyak; i++) {
    sigmax = sigmax + x[i];
  }

  sigmay = 0;
  for (int i = 1; i <= banyak; i++) {
    sigmay = sigmay + y[i];
  }

  xy = 0;
  for (int i = 1; i <= banyak; i++) {
    xy = xy + x[i] * y[i];
  }

  x2 = 0;
  for (int i = 1; i <= banyak; i++) {
    x2 = x2 + x[i] * x[i];
  }

  y2 = 0;
  for (int i = 1; i <= banyak; i++) {
    y2 = y2 + y[i] * y[i];
  }

  x1 = sigmax * sigmax;
  y1 = sigmay * sigmay;
  atas = banyak * xy - sigmax * sigmay;
  bawah1 = banyak * x2 - x1;
  bawah2 = banyak * y2 - y1;
  bawah = sqrt(bawah1) * sqrt(bawah2);

  float korelasi = atas / bawah;
  float koefisiensi = (korelasi * korelasi) * 1;

  cout << "Hasil Sigma X      = " << sigmax << endl;
  cout << "Hasil Sigma Y      = " << sigmay << endl;
  cout << "Hasil X dikali Y   = " << xy << endl;
  cout << "Hasil X kuadrat    = " << x2 << endl;
  cout << "Hasil Y kuadrat    = " << y2 << endl;
  cout << "Nilai Korelasi (r) = " << korelasi << endl;
  cout << "Nilai Koefisiensi Determinasi (kd) = " << koefisiensi;
  cout << endl;

  if (korelasi > 0.70) {
    hubkor = "Hubungan korelasinya sangat kuat";
  } else if (korelasi >= 0.50) {
    hubkor = "Hubungan korelasinya sedang";
  }

  else if (korelasi >= 0.30) {
    hubkor = "Hubungan korelasinya moderat";
  } else if (korelasi >= 0.10) {
    hubkor = "Hubungan korelasinya rendah";
  } else if (korelasi < 0.10) {
    hubkor = "Hubungan korelasinya diabaikan";
  }
  cout << hubkor << endl;
  if (korelasi > 0) {
    hub = "Hubungan antara variabel x dan y adalah   positif, dimana jika "
          "nilai x bertambah, maka nilai y bertambah, dan juga sebaliknya";
  } else if (korelasi < 0) {
    hub = "Hubungan antara variabel x dan y adalah  negatif, dimana jika nilai "
          "x bertambah, maka nilai y mengecil, dan juga sebaliknya";
  } else if (korelasi = 0) {
    hub = "Tidak ada hubungan antara variabel x dan y";
  }
  cout << hub << endl;
}
