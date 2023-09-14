#include <iostream>
#include <string>

using namespace std;

struct mahasiswa{
	
	string nama;
	string nrp;
	int umur;
	bool jenis_kelamin;
};


int main(){
	
//	struct Mahasiswa mhs[MAX_MHS]
//	Mahasiswa *mhs = new Mahasiswa[MAX_MHS]
	struct mahasiswa mhs[10];
	int input_user;
	int n = 1;
    int jumlah = 0;
    
    while (n == 1) {
	
	cout << "Menu : " << endl;
	cout << "1. Menampilkan data" << endl;
	cout << "2. Menambah data baru" << endl;
	cout << "3. Menghapus data" << endl;
	cout << "4. Mengubah data" << endl;
	cout << "5. Keluar" << endl;
	cout << "Pilih Nomor: ";
    
	cin >> input_user;
	cout << endl;
	
	switch(input_user) {
		case 1:
           	cout << "---- Daftar Mahasiswa ----" << endl;
            
            		for (int i = 0; i < jumlah; i++) {
        		cout << "Data ke-" << i + 1 << ":" << endl;
        		cout << "Nama: " << mhs[i].nama << endl;
                	cout << "NRP : " << mhs[i].nrp << endl;
                	cout << "Umur : " << mhs[i].umur << endl;
                	cout << "Jenis Kelamin : " << (mhs[i].jenis_kelamin ? "Laki-laki" : "Perempuan") << endl;
            }
            	cout << endl;
            	break;			
			
		case 2:
			cout << "Nama mahasiswa ke-" << jumlah + 1 << " : ";
            		cin.ignore(); 
            		getline(cin, mhs[jumlah].nama); 
            		cout << "NRP : ";
            		cin >> mhs[jumlah].nrp;
            		cout << "Umur : ";
            		cin >> mhs[jumlah].umur;
            		cout << "Jenis Kelamin (0 = Perempuan / 1 = Laki-laki): ";
            		cin >> mhs[jumlah].jenis_kelamin;
            		cout << endl;
            		jumlah++;
            		cout << "Data berhasil ditambahkan! >_<" << endl;
            	cout << endl;
            	break;


		case 3:
           	int index;
            	cout << "Masukkan index mahasiswa yang ingin dihapus: ";
            	cin >> index;
        
            		if (index >= 1 && index <= jumlah) {
                	for (int i = index - 1; i < jumlah - 1; i++) {
                   	mhs[i] = mhs[i + 1];
                }
                	jumlah--;
                
            		cout << "Indeks berhasil dihapus :)" << endl;
            
            		} else {
                	cout << "Indeks tidak valid." << endl;
           		}
            	cout << endl;
            	break;	
            
		case 4:
		int ubah;
			
            	cout << "Masukkan indeks mahasiswa yang ingin diubah: ";
            	cin >> ubah;
        
            		if (ubah >= 1 && ubah <= jumlah) {
                	cout << "Nama mahasiswa ke-" << ubah << " : ";    
                	cin >> mhs[ubah - 1].nama;
                	cout << "NRP : ";
                	cin >> mhs[ubah - 1].nrp;
                	cout << "Umur : ";
                	cin >> mhs[ubah - 1].umur;
                	cout << "Jenis Kelamin (0 = Perempuan / 1 = Laki-laki): ";
                	cin >> mhs[ubah - 1].jenis_kelamin;
                	cout << endl;
                	cout << "Data berhasil diubah >o<" << endl;
            	} else {
                cout << "Indeks tidak valid." << endl;
            	}
            	cout << endl;
            	break;
            
       		case 5:
        	n = 0;
        	
            	cout << "Terima kasih telah menggunakan program ini >_<" << endl;
            	break;
            
        	default:
            	cout << "Input tidak valid. Silahkan coba lagi. " << endl;
            
		}
	}	
return 0;
}

