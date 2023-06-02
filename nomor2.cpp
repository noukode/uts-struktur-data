#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

struct Menu {
    string name;
    int harga;
};
int main()
{
    int total_menu = 5;
    string pesanan;
    string delimiter = " ";
    //Array Of Struct
    Menu menus[total_menu] = {
        {
            "Soto",
            15000
        },
        {
            "Rawon",
            20000
        },
        {
            "Pecel",
            10000
        },
        {
            "Bakso",
            12500
        },
        {
            "Siomay",
            25000
        }
    };
    
    //Kalimat Pembuka
    cout << "Selamat Datang di Kantin Unsia" << endl << "Berikut menu yang tersedia " << endl;
    //Cetak Menu
    for (int i = 0; i < total_menu; i++){
        cout << menus[i].name << " : Rp." << menus[i].harga << endl;
    }
    //Input Pesanan
    cout << "Isikan Makanan yang dipesan : ";
    std::getline(std::cin >> std::ws, pesanan);
    
    std::vector<std::string> orders;
    std::string satuan = "";
    
    //Split Pesanan
    for (int i = 0; i < pesanan.length(); i++) {
        if (pesanan[i] == ' ') {
            if (satuan != "") {
                orders.push_back(satuan);
                satuan = "";
            }
        } else {
            satuan += pesanan[i];
        }
    }
    
    orders.push_back(satuan);
    
    //Cetak Detail Pesanan
    cout << "Total Harga :" << endl;
    int total = 0;
    for (int i = 0; i < orders.size(); i = i + 2) {
        for (int j = 0; j < total_menu; j++){
            if(orders[i] == menus[j].name){
                int sub_total = menus[j].harga * stoi(orders[i+1]);
                std::cout << "\t ✓ " << orders[i] << " @" << menus[j].harga << " * " << orders[i+1] << " = " << sub_total << std::endl;
                total += sub_total;
            }
        }
    }
    
    cout << "Total : " << total;

    return 0;
}

