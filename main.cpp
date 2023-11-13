#include <iostream>
using namespace std;

// todo variable global untuk data username dan password
string sys_username1[2] = {"rahaditya", "123230095"}; 
string sys_username2[2] = {"alfonsus", "123230095"}; 
string sys_username3[2] = {"safa", "123230095"}; 
string sys_username4[2] = {"alma", "123230095"}; 
string sys_username5[2] = {"akbar", "123230095"}; 

// todo membuat function untuk memberi peringatan bahwa password atau username anda salah
void warning();

// todo membuat function untuk menampilkan profil tergantung siapa yang login
void tampil_profil_user(string username, string nomer_handphone, string alamat) {
    cout << "Nama \t: " << username << endl;
    cout << "No HP \t: " << nomer_handphone << endl;
    cout << "Alamat \t: " << alamat << endl;
}

// todo membuat function untuk menampilkan 3 menu utama
// menu profil, pesan jasa, exit
void pilihan_menu() {
    cout << "Selamat dataang di program Jasa Pembersih Ruangan" << endl;
    cout << "Silahkan pilih menu : " << endl;
    cout << "1. Profil" << endl;
    cout << "2. Pesan Jasa" << endl;
    cout << "3. keluar " << endl;
}

// todo membuat function untuk login

bool input_login(string username, string password){
    if (username == sys_username1[0] && password == sys_username1[1] || username == sys_username2[0] && password == sys_username2[1] || username == sys_username3[0] && password == sys_username3[1] || username == sys_username4[0] && password == sys_username4[1] || username == sys_username5[0] && password == sys_username5[1] ) 
        return true;
    else 
        return false;
}

int main() {
    // string sys_username = "a";
    // string sys_password = "1";
    string password, username;
    int kesempatan_login = 5;

    cout << "PROGRAM LAYANAN PEMBERSIH RUANGAN" << endl;
    // TODO membuat perulangan untuk sesi login dengan kesempatan login sebanyak 5 kali.
    do {
        // TODO membuat sebuah peringatan saat user salah memasukkan username atau password.
        if (kesempatan_login != 5)
                warning();
        
        cout << "Silahkan Login terlebih dahulu !" << endl;
        cout << "username : "; cin >> username;
        cout << "password : "; cin >> password;
        kesempatan_login--;
        if (kesempatan_login == 0)
            cout << "Anda terlalu banyak mencoba untuk login, coba lagi nanti !" << endl;
    } while (!input_login(username, password) && kesempatan_login > 0); 


    // * masuk ke dalam program utamanya
    if (input_login(username, password)) {
       pilihan_menu();
    }

    return 0;
}

// * mendefinisikan function void warning
void warning(){
    cout << "Username atau password anda salah !" << endl;
}





