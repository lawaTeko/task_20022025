#include <iostream>
using namespace std;


bool pin_user(int pin) { // Indonesia
    int input_pin;
    cout << "Masukan PIN ATM Anda : ";
    cin >> input_pin;
    
    if (input_pin == pin) {
        cout << "PIN Benar. Akses diberikan.\n";
        return true;
        
    } else {
        cout << "PIN Salah. Akses ditolak.\n";
        return false;
    }
    
}

bool pin_user1(int pin) { // English
    int input_pin;
    cout << "Enter your ATM PIN: "; // Masukan PIN ATM Anda
    cin >> input_pin;
    
    if (input_pin == pin) {
        cout << "PIN Correct. Access granted.\n"; // PIN Benar. Akses diberikan.
        return true;
    } else {
        cout << "PIN Incorrect. Access denied.\n"; // PIN Salah. Akses ditolak.
        return false;
    }
}

// untuk tampilan menu dalam bahasa indonesia
void tampilanMenuBahasaIndonesia() {
    cout << "\n----- MENU -----" << endl;
    cout << "1. Cek Saldo " << endl;
    cout << "2. Tarik Saldo" << endl;
    cout << "3. Keluar " << endl;
    cout << "----------------" << endl;
}

// untuk tampilan menu dalam bahasa inggris
void tampilanMenuBahasaInggris(){
    cout << "\n----- MENU -----" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Withdraw Cash" << endl;
    cout << "3. Exit" << endl;
    cout << "----------------" << endl;
}

int main() {
	
    // VARIABEL
    int pilihan, opsi, bahasa;
    int saldo = 1000000;
    int pin = 123;
    int jumlah = 0;
    
    // MENU PILIHAN BAHASA - INDONESIA ATAU INGGRIS
    cout << "|--------------------------------|" << endl;
    cout << "|1. Bahasa Indonesia/Indonesian  |" << endl;
    cout << "|2. Bahasa Inggris/English       |"<< endl;
    cout << "|--------------------------------|" << endl;
    cout << "Pilih Bahasa / Choose Language : ";
    cin >> bahasa;
	
	if (bahasa == 1){ // Bagian Yang Menggunakan Bahasa Indonesia
		
    	if (!pin_user(pin)) { // Verifikasi PIN
        	return 0;
    	}

    	while (true) {
        	tampilanMenuBahasaIndonesia();
        	cout << "Pilih Menu : ";
        	cin >> pilihan;

        	if (pilihan == 1) { // 1. Bagian Cek Saldo
            	cout << "\nSaldo Anda : Rp. " << saldo << endl;

        	} else if (pilihan == 2) { // 2. Bagian Tarik Saldo
            	cout << "\n--- Tarik Tunai ---" << endl;
            	cout << "1. Rp. 50.000" << endl;
            	cout << "2. Rp. 100.000" << endl;
            	cout << "3. Rp. 150.000" << endl;
            	cout << "4. Rp. 200.000" << endl;
            	cout << "5. Rp. 250.000" << endl;
            	cout << "6. Jumlah Lainnya"<< endl;
            	cout << "--------------------" << endl;
            	cout << "Pilih : ";
            	cin >> opsi; 

            	if (opsi == 1) {
                	jumlah = 50000;
            	} else if (opsi == 2) {
                	jumlah = 100000;
            	} else if (opsi == 3) {
                	jumlah = 150000;
            	} else if (opsi == 4) {
                	jumlah = 200000;
            	} else if (opsi == 5) {
                	jumlah = 250000;
            	} else if (opsi == 6) {
                	cout << "Masukkan jumlah yang ingin ditarik: ";
                	cin >> jumlah;
            	} else {
                	cout << "Pilihan tidak valid.\n";
                	continue;
            }

            	if (jumlah > saldo) {
                	cout << "Saldo tidak mencukupi.\n";
            	} else {
                	saldo -= jumlah;
                	cout << "Penarikan berhasil. Saldo Anda sekarang: Rp. " << saldo << endl;
            	}	
        	} else if (pilihan == 3) { // 3. Bagian Keluar/Exit
            	cout << "Terima kasih telah menggunakan layanan kami.\n";
            	break;
        	} else {
            	cout << "Pilihan tidak valid.\n";
        	}
    	}	

	}else if (bahasa == 2) { // Bagian Yang Menggunakan Bahasa Inggris

    if (!pin_user1(pin)) { // Bagian verifikasi PIN ATM
        return 0;
    }
    while (true) {

        tampilanMenuBahasaInggris();
        cout << "Choose Menu : ";
        cin >> pilihan;

        if (pilihan == 1) { // 1. Bagian Check Balance 
            cout << "\nYour Balance : Rp. " << saldo << endl;

        } else if (pilihan == 2) { // 2. Bagian Withdraw
            cout << "\n--- Cash Withdrawal ---" << endl;
            cout << "1. Rp. 50.000" << endl;
            cout << "2. Rp. 100.000" << endl;
            cout << "3. Rp. 150.000" << endl;
            cout << "4. Rp. 200.000" << endl;
            cout << "5. Rp. 250.000" << endl;
            cout << "6. Other Amount" << endl;
            cout << "----------------------" << endl;
            cout << "Choose : ";
            cin >> opsi;

            if (opsi == 1) {
                jumlah = 50000;
            } else if (opsi == 2) {
                jumlah = 100000;
            } else if (opsi == 3) {
                jumlah = 150000;
            } else if (opsi == 4) {
                jumlah = 200000;
            } else if (opsi == 5) {
                jumlah = 250000;
            } else if (opsi == 6) {
                cout << "Enter the amount you want to withdraw: ";
                cin >> jumlah;
            } else {
                cout << "Invalid choice.\n";
                continue;
            }

            if (jumlah > saldo) {
                cout << "Insufficient balance.\n";
            } else {
                saldo -= jumlah;
                cout << "Withdrawal successful. Your current balance: Rp. " << saldo << endl;
            }
        } else if (pilihan == 3) { // 3. Bagian Exit/Keluar
            cout << "Thank you for using our service.\n";
            break;
        } else {
            cout << "Invalid choice.\n";
        }
    }
}

    return 0;
}
