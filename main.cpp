#include <iostream>
using namespace std;

// todo variable global untuk data username dan password
string sys_username1[2] = {"rahaditya", "123230095"}; 
string sys_username2[2] = {"alfonsus", "123230100"}; 
string sys_username3[2] = {"safa", "123230081"}; 
string sys_username4[2] = {"alma", "123230101"}; 
string sys_username5[2] = {"akbar", "123230113"}; 

// todo membuat function untuk memberi peringatan bahwa password atau username anda salah
void warning();

// todo membuat function untuk menampilkan profil tergantung siapa yang login
void tampil_profil_user(string username) {
    if (username == sys_username1[0]) {
        cout << "Nama \t: Rahaditya" << endl;
        cout << "No HP \t: 081111111111" << endl;
        cout << "Alamat \t: Jalan Sudirman No Rumah 23, Sleman" << endl;        
    } else if (username == sys_username2[0]) {
        cout << "Nama \t: Alfonsus" << endl;
        cout << "No HP \t: 082222222222" << endl;
        cout << "Alamat \t: Jalan Sudirman No Rumah 15, Sleman" << endl;        
    } else if (username == sys_username3[0]) {
        cout << "Nama \t: Safa" << endl;
        cout << "No HP \t: 083333333333" << endl;
        cout << "Alamat \t: Jalan Sudirman No Rumah 10, Sleman" << endl;                
    } else if (username == sys_username4[0]) {
        cout << "Nama \t: Alma" << endl;
        cout << "No HP \t: 084444444444" << endl;
        cout << "Alamat \t: Jalan Sudirman No Rumah 30, Sleman" << endl;        
    } else {
        cout << "Nama \t: Akbar" << endl;
        cout << "No HP \t: 085555555555" << endl;
        cout << "Alamat \t: Jalan Sudirman No Rumah 35, Sleman" << endl;        
    }     
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
    string password, username;
    int kesempatan_login = 5;
    int pilih ;

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
       cout << "Pilih :"; cin >> pilih;
       if (pilih == 1) {
            tampil_profil_user(username);
       }
    }

    return 0;
}

// * mendefinisikan function void warning
void warning(){
    cout << "Username atau password anda salah !" << endl;
}





