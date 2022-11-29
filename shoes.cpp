#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

class ShoeSize
{
private:
    float cm;
    float eu;
    float uk;
    float us;
    void set_eu() { eu = (cm + 2 * 0.667f) / 0.667f; }
    void set_uk() { uk = (cm + 2 * 0.847f) / 0.847f - 25; }
    void set_us() { us = (cm + 2 * 0.847f) / 0.847f - 24; }

public:
    ShoeSize(int cm) : cm(cm)
    {
        set_eu();
        set_uk();
        set_us();
    }
    float get_cm() { return cm; }
    float get_eu() { return eu; }
    float get_uk() { return uk; }
    float get_us() { return us; }
};

void show_results(ShoeSize &shoe)
{
    cout << setw(20) << left << "cm";
    cout << setw(10) << fixed << setprecision(1) << right << shoe.get_cm() << endl;
    cout << setw(20) << left << "eu";
    cout << setw(10) << fixed << setprecision(1) << right << shoe.get_eu() << endl;
    cout << setw(20) << left << "uk";
    cout << setw(10) << fixed << setprecision(1) << right << shoe.get_uk() << endl;
    cout << setw(20) << left << "us";
    cout << setw(10) << fixed << setprecision(1) << right << shoe.get_us() << endl;
}

int main(int arg_count, char **args)
{
    if (arg_count < 2)
    {
        cerr << "we need at least 1 int argument";
        return 1 ;
    }
    else if (arg_count > 2){
        cerr << "one argument is enough...";
        return 1 ;
    }
    else if (arg_count == 2)
    {
        float size;
        stringstream(string(args[1])) >> size;
        ShoeSize *shoe = new ShoeSize(size);
        show_results(*shoe);
    }
    return 0;
}