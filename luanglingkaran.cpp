//library
#include <iostream>
using namespace std;

//deklarasi variabel global
int r;

//implementasi fungsi dan prosedur
void input(){
    cout << "masukan jari-jari =";
    cin >> r;
}
float luaslingkaran(float a){
    return 3.1419 * a * a;
}

void output(){
    cout << "hasilnya : " << luaslingkaran(r);
}
int main(){
    input();
    output();
}//selesai