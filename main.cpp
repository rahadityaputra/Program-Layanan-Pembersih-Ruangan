#include <iostream>
using namespace std;

// todo membuat function untuk memberi peringatan bahwa password atau username anda salah
void warning(string salah);



int main() {
    string password, username;
    int kesempatan_login = 5;

    cout << "PROGRAM LAYANAN PEMBERSIH RUANGAN" << endl;
    // TODO membuat perulangan untuk sesi login dengan kesempatan login sebanyak 5 kali.
    do {
        if (kesempatan_login != 5) {
            if (username != "adit" && password == "1")
                warning("username");      
            else if (password != "1" && username == "adit") 
                warning("password");
            else if (password != "1" && username != "adit") 
                warning("username dan password");             
        }
        
        cout << "Silahkan Login terlebih dahulu !" << endl;
        cout << "username : "; cin >> username;
        cout << "password : "; cin >> password;
        kesempatan_login--;
        if (kesempatan_login == 0)
            cout << "Anda terlalu banyak mencoba untuk login, coba lagi nanti !" << endl;
    } while ((username != "adit" || password != "1") && kesempatan_login > 0); 
    return 0;
}

void warning(string salah){
    cout << salah << " anda salah !" << endl;
}





