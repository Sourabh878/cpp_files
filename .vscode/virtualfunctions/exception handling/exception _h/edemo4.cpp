#include <iostream>
using namespace std;

class base {};
class derived : public base {};

int main()
{
    derived d;

    try
    {
        throw d;
    }
    catch (exception& e)
    {
        cout << "Error\n";
    }
    catch (derived d)
    {
        cout << "caught derived exception\n";
    }
    catch (base& b)
    {
        cout << "caught base exception\n";
    }
    return 0;
}
