#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Musaka {
    public:
        Musaka(){}
        Musaka(int meat, bool cinnamon) {
            this->meat = meat;
            this->cinnamon 
            = cinnamon;
        }

        void eat() {
            cout << "Мусака с " << meat << "г месо";
            if(cinnamon) {
                cout << " и канела" << endl;
            } 
            else {
                cout << " без канела" << endl;
                cout << "Mmm..." << endl;
            }
        }

    private:
        int meat;
        bool cinnamon;
};

int main() {
    int n = 0;
    cin >> n;

    Musaka* musaki = new Musaka[n];

    for(int i = 0; i < n; i++) {
        int meat = 0;
        bool cinnamon = false;
        cin >> meat >> cinnamon;
        musaki[i] = Musaka(meat, cinnamon);
    }

    for(int i = 0; i < n; i++) {
        musaki[i].eat();
    }

    delete[] musaki;    
    musaki = nullptr;

    return 0;
}