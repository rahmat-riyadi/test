#include <iostream>
using namespace std;

int main(){

    string username = "adminn";
    string pass = "123";

    string namaPanjangSekali;
    string nama_panjang_sekali;

    if(username != "admin"){
        cout << "username salah" << endl;
        return 0;
    }

    if(pass != "123"){
        cout << "pass salah" << endl;
        return 0;
    }

    cout << "login success";

    return 0;
}