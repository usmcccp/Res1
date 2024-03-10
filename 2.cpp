
#include <iostream>

using namespace std;

class rightt 
{
    float a_m;
    float b_m;
public:
    rightt(float a, float b)
    {
        cout << "C" << endl;
        a_m = a;
        b_m = b;
    }
};

void set(float a, float b)
{
    if (a < 0)
    {
        cout << "Negative lenth" << endl;
        return;
    }
    a_m = a;

    if (b < 0)
    {
        cout << "Negative width" << endl;
        return;
    }
    b_m = b;
}


int main()
{
    std::cout << "Hello World!\n";

    rightt f(2, 3);
    f.set(2, 3);

}

