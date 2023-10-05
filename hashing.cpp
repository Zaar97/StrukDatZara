#include <iostream>
#include <map>

using namespace std;

map<string, string> dataAkun;

string hashFunction(const string& password) {
    return password;
}

bool isPasswordValid(const string& username, const string& password) {
    auto it = dataAkun.find(username);
    if (it != dataAkun.end() && it->second == hashFunction(password)) {
        return true;
    }
    return false;
}

void registerAkun() {
    string username, password;
    cout << "Input Username: ";
    cin >> username;
    cout << "Input Password: ";
    cin >> password;

    dataAkun[username] = hashFunction(password);
    cout << "Akun berhasil diregistrasi. :)" << endl;
    cout << endl;
}

void printAkun() {
    cout << "=== Daftar Akun ===" << endl;
    for (const auto& entry : dataAkun) {
        cout << "Username: " << entry.first << endl;
        cout << "Password: " << entry.second << endl;
        cout << endl;
    }
}

int main() {
    while (true) {
        int input_user;

        cout << "=== MENU ===" << endl;
        cout << "1. Register" << endl;
        cout << "2. Login" << endl;
        cout << "3. Data Akun" << endl;
        cout << "4. Exit" << endl;
        cout << "Pilih Menu: ";
        cin >> input_user;
        cout << endl;

        if (input_user == 1) {
            registerAkun();
        } else if (input_user == 2) {
            string username, password;
            cout << "Username: ";
            cin >> username;
            cout << "Password: ";
            cin >> password;

            if (isPasswordValid(username, password)) {
                cout << "Login berhasil. Selamat datang, " << username << "! >o<" << endl;
                cout << endl;
            } else {
                cout << "Login gagal. Username atau kata sandi tidak valid TT." << endl;
                cout << endl;
            }
        } else if (input_user == 3) {
            printAkun();
        } else if (input_user == 4) {
            cout << "Program telah selesai >_<." << endl;
            break;
        } else {
            cout << "Pilihan tidak valid. Silakan coba lagi. :(" << endl;
        }
    }

    return 0;
}
