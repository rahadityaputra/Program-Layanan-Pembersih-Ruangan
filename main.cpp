#include <iostream>
using namespace std;

// todo membuat function untuk memberi peringatan bahwa password atau username anda salah
void warning(string salah);

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



int main() {
    string sys_username = "a";
    string sys_password = "1";
    string password, username;
    int kesempatan_login = 5;

    cout << "PROGRAM LAYANAN PEMBERSIH RUANGAN" << endl;
    // TODO membuat perulangan untuk sesi login dengan kesempatan login sebanyak 5 kali.
    do {
        if (kesempatan_login != 5) {
            if (username != sys_username && password == sys_password)
                warning("username");      
            else if (password != sys_password && username == sys_username) 
                warning("password");
            else if (password != sys_password && username != sys_username) 
                warning("username dan password");             
        }
        
        cout << "Silahkan Login terlebih dahulu !" << endl;
        cout << "username : "; cin >> username;
        cout << "password : "; cin >> password;
        kesempatan_login--;
        if (kesempatan_login == 0)
            cout << "Anda terlalu banyak mencoba untuk login, coba lagi nanti !" << endl;
    } while ((username != sys_username || password != sys_password) && kesempatan_login > 0); 
    return 0;
}

// mendefinisikan function void warning
void warning(string salah){
    cout << salah << " anda salah !" << endl;
}





