// * calculation order in c++ 
// *higher data types me
// cout<<'c'+1  // 100

// ================================
// *operator precedence 
// ========================
// *overflow  -- imp
// -10^9<int<10^9
// -10^12<long int<10^12
// 10^18<long long int <10^18
// ============================
// *3 decimal point tak store karega
// cout<<fixed<<setprecision(3)<<endl; 
// ===================================

// *precision error in double and float
// ================================
// *give overflow error
// int l,b;
// cin>>l>>b;
// cout<<l*b;
// =================================
// *correct method 1
// int l,b;
// cin>>l>>b;
// cout<<l*1LL*b;
// *method 2
// long long int l,b;
// cin>>l>>b;
// cout<<l*b;
