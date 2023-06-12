#include <iostream>
using namespace std;

class bidangDatar {
private:
    int x;
public:
    bidangDatar() {
        x = 0;
    }
    virtual void input(){}
    virtual float Luas(int a) { return 0; }
    virtual float Keliling(int a) { return 0; }
    void setX(int a) {
        this->x = a;
    }
    int getX() {
        return x;
    }
};

class Lingkaran : public bidangDatar {
public:
    int jejari;
    Lingkaran() {
        cout << "Lingkaran dibuat \n";
    }
    
    void input(){
        cout << "Masukkan Jejari : ";
        cin >> jejari;
    }
    float Luas() {
        cout << "Luas Lingkaran = " << jejari * jejari * 3.14 << endl;
        return 0;
    }
    float Keliling() {
        cout << "Keliling Lingkaran = " << 2 * 3.14 * jejari << endl;
        return 0;
    }

    ~Lingkaran() {

    }


};

class Bujursangkar :public bidangDatar {
    public:
        int sisi;
        Bujursangkar() {
            cout << "Bujursangkar dibuat \n";
        }

        void input() {
            cout << "Masukkan Sisi : ";
            cin >> sisi;
        }
        float Luas() {
            cout << "Luas Bujursangkar = " << sisi*sisi << endl;
            return 0;
        }
        float Keliling() {
            cout << "Keliling Bujursangkar = " << 4*sisi << endl;
            return 0;
        }

        ~Bujursangkar() {

        }


};

int main()
{
    Lingkaran l;

    l.input();
    l.Luas();
    l.Keliling();

    cout << "\n" << endl;

    Bujursangkar b;

    b.input();
    b.Luas();
    b.Keliling();

}