#include <iostream>
#include<string>
using namespace std;
template <class T>
class StatBuffer
{
    T baseStat;
    T buffAmount;

public:
    StatBuffer(T base, T buff)
    {
        baseStat = base;
        buffAmount = buff;
    }
    T getBoostedStat()
    {
        return baseStat + buffAmount;
    }
};
int main()
{
    StatBuffer<int> health(50000, 1500);
    int a = health.getBoostedStat();
    cout << "Total Health :- " << a << endl;
    StatBuffer<float> attack(1.5, 0.7);
    float b = attack.getBoostedStat();
    cout << "Total Attack Damage :- " << b << endl;
    StatBuffer<string> title("Super ", "Saiyan");
    string c = title.getBoostedStat();
    cout << "Title Name :- " << c << endl;

    return 0;
}