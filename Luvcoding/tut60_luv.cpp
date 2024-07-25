// ************** 6 Amazing BIT Manipulation Ticks ********************

#include <bits/stdc++.h>
using namespace std;

void print_binary(int num)
{
    for (int i = 31; i >= 0; i--)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        print_binary(i);
        // *fast operation in comparison to modulo and division operator
        if (i & 1) // if(i&1== true(1))
        {
            cout << "Odd" << endl;
        }
        else
        {
            cout << "Even" << endl;
        }
    }
    cout << endl;
    // ===============================================================
    //** integer divison and multiplication by 2
    cout << (n << 1) << endl; // n*2
    cout << (n >> 1) << endl; // n/2
    // *** in binary search we can use  (hi+lo>>2)  because it is fast operation
    // same as (hi +lo)/2
    cout << endl;

    // ==============================================================
    for (char c = 'A'; c <= 'E'; c++)
    {
        cout << c << endl;
        print_binary(int(c));
    }
    cout << endl;
    for (char c = 'a'; c <= 'e'; c++)
    {
        cout << c << endl;
        print_binary(int(c));
    }
    cout << endl;
    // ===========================================================
    // **convert capital letters to small letters and small letters to capital letters
    // **capital to small -- 5 th bit ko set karna hai
    char s1 = ('A' | (1 << 5));
    cout << s1 << endl;
    cout << ('A' | (1 << 5)) << endl;

    // **small to capital   -- 5 th bit ko unset karna hai
    // char s2 = ('a' & (~(1 << 5)));
    // cout << s2 << endl;
    cout << char('a' & (~(1 << 5))) << endl;
    cout << ('a' & (~(1 << 5))) << endl;
    cout << endl;

    //============================================================
    // **32 = 2^5 space(char) ki ascii value hai which is equal to 1<<5
    print_binary(' ');
    cout << (1 << 5);     // 32
    cout << char(1 << 5); // space
    cout << "hello";
    cout << endl;
    // ******other method to convert capital to small
    cout << "Capital to Small Letter using space char : " << char('C' | ' ') << endl;
    // -------------------------------------------------
    // **char of ~(1 << 5) nhi nikal sakte ascii value kavel 0 -256 hoti hai kavel iski value bhut jayada hai
    // cout << char(~(1 << 5));
    // cout << (~(1 << 5));
    // ----------------------------------------------
    // **small to capital   another method
    print_binary('_');
    cout << "Small to Capital Letter using underscore : " << char('c' & '_') << endl;
    // ***********************************
    cout << endl;
    cout << "Complete Summary " << endl;
    cout << char('B' | (' ')) << endl; // Capital to Small
    cout << ('B' | (' ')) << endl;
    cout << char('b' & ('_')) << endl; // Small to Capital
    cout << ('b' & ('_')) << endl;
    cout << endl;

    //============================================================
    int a = 59;
    print_binary(a);
    int m = 2;
    // ***** Clear LSB ******
    //** m th bit tak sab LSB unset karna hai 
    int num1 = (a & (~((1 << (m + 1)) - 1))); //************
    print_binary(num1);
    // ***** Clear MSB ******
    //** m th bit tak sab MSB unset karna hai 
    int num2 = (a & ((1 << (m + 1)) - 1)); //************
    print_binary(num2);
    cout << endl;

    //============================================================
    // ** check power of 2 
    int number = 15; 
    print_binary(number);
    if(number & (number-1)){ // 
        cout<<"Not Power of 2"<<endl;
    }
    else{
        cout<<"Power of 2"<<endl;
    }
    //============================================================
    return 0;
}