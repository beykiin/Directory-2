// Rehber 2.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <string>
#include <vector>



using namespace std;

struct Contact
{
    string name;
    string phoneNumber;

};

void addContact(vector<Contact>& contacts) {

    Contact newContact;
    cout << "Name:";
    getline(cin, newContact.name);
    cout << "Phone Number:";
    getline(cin, newContact.phoneNumber);
    contacts.push_back(newContact);
    cout << "added to person." << endl;

}

void displayContacts(const vector<Contact>& contacts) {

    if (contacts.empty()) {
        cout << "Directory is empty!" << endl;
        return;
    }

    cout << "Contacts in the directory:" << endl;
    for (const auto& contact : contacts)
    {
        cout << "Name:" << contact.name << endl;
        cout << "phoneNumber" << contact.phoneNumber << endl;
        cout << ".............." << endl;

    }
    

}

int main()
{
    vector<Contact> contacts;
    char choice;
    do {
        cout << "Enter 'E' to add a contact to the directory or 'G' to view the directory ('Q' for Exit):";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch(choice) {

            case 'E':
            case 'e':
                addContact(contacts);
                break;

            case 'G':
            case 'g':
                displayContacts(contacts);
                break;

            case 'Q':
            case 'q':
                cout << "Exiting the program..." << endl;
                break;
            default:
                cout << "Invalid option. Try again." << endl;


        }


    } while (choice != 'Q' && choice != 'q');
    return 0;
}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
