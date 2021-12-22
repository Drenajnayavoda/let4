#include "iostream"

struct MobilePhone {
    double weight;
    bool is_broken;
    double price;
};
int main() {
    using namespace std;
    size_t num_phones;
    cin >> num_phones ;
    MobilePhone *bunch_phones = new MobilePhone[num_phones];
    for (int i = 0; i < num_phones; ++i) {
        cin >> bunch_phones[i].weight >> bunch_phones[i].is_broken >> bunch_phones[i].price ;
    }
    cout << "<MobilePhones>" << endl;
    for (int i = 0; i < num_phones; ++i){
        cout << " " << "<MobilePhone id=\"" << i << "\" weight=\"" << bunch_phones[i].weight << "\" is_broken=\"" << boolalpha << bunch_phones[i].is_broken << "\" price=\"" << bunch_phones[i].price << "\"/>" << endl;
    }
    cout << "</MobilePhones>" << endl;
    delete bunch_phones;
    return 0;
}