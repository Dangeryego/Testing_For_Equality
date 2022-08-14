#include <iostream>

using namespace std;

int main()
{
    bool equalResult {};
    bool notEqualResult{};
    int num1, num2;
    cout << boolalpha;
    cout << "Enter two numbers separated by space" << endl;
    cin >> num1 >> num2;
    equalResult = {num1 == num2};
    notEqualResult = {num1 != num2};
    cout << "Comparison Result (Equal): " << equalResult <<endl;
    cout << noboolalpha;
    cout << "Comparison Result (Not Equal): " << notEqualResult <<endl;

    return 0;
}
