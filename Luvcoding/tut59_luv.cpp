#include <iostream>
#include <string>
using namespace std;

void printbn(int num)
{
    for (int i = 31; i >= 0; i--)
    {
        int bit = (num >> i) & 1;
        cout << bit;
    }
    cout << endl;
}

string printBinary(int num)
{
    string binaryStr = "";
    for (int i = 31; i >= 0; i--)
    {
        int bit = (num >> i) & 1;
        binaryStr += to_string(bit);
    }
    return binaryStr;
}

int main()
{
    int decimalNum;
    // cout << "Enter an integer number: ";
    cin >> decimalNum;
    //===================================================================
    printbn(decimalNum);
    // ===================================================================
    if (decimalNum < 0)
    {
        cout << "Please enter a non-negative integer." << endl;
    }
    else
    {
        string binaryRepresentation = printBinary(decimalNum);
        // cout << "Binary representation: " << binaryRepresentation << endl;
        cout << binaryRepresentation << endl;
    }
    cout << endl;
    // ================================================================
    // i-th bit set or not
    int i = 3;
    if ((decimalNum & (1 << i)) != 0)
    {
        cout << i << "th bit is set bit" << endl;
    }
    else
    {
        cout << i << "th bit is Not set bit" << endl;
    }
    cout << endl;
    // ===================================================================
    // how to set ith bit

    printbn(decimalNum | (1 << i));
    cout << endl;
    // ===================================================================
    // how to unset ith bit
    printbn(~decimalNum); // inverted number
    // unset particular bit and remaing bits are preserved
    printbn(decimalNum & (~(1 << i)));
    cout << endl;

    // ===================================================================
    // toggle 0 -> 1 & 1 ->0
    cout<<"toggle"<<endl;
    printbn(decimalNum ^ (1 << i));
    cout << endl;

    // ===================================================================
    // *bit count ... How many bits are set
    int ct = 0;
    for (int i = 31; i >= 0; i--)
    {
        if ((decimalNum & (1 << i)) != 0)
        {
            ct++;
        }
    }
    cout << "Bit counts " << ct << endl;
    // *** inbuilt function * work only for integers
    cout << "Bit counts " << __builtin_popcount(decimalNum) << endl;
    // ***for long lont integers
    // cout<< "Bit counts "<<__builtin_popcount(1LL<<35)<<endl; // warning (Wrong answer)
    cout << "Bit counts " << __builtin_popcountll(1LL << 35) << endl;
    // ******2^i ke just phle vale num me sare bits 1 hote hai 
    cout << "Bit counts " << __builtin_popcountll((1LL << 35) - 1) << endl;

    // ===================================================================

    return 0;
}
