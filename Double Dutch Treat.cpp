// Emmanuel Isidahomen
//3/8/2018
// CSDP 222
// UMES
// Double Dutch Treat


#include <iostream>
#include <string>
using namespace std;
int main()
{
int a, b, c, u1, v1, w1, x1, y1, z1, num, sum, total;
string g, h, i, j, k, l, m, n, o;
cout << " Enter the number " << endl;
cin >> a;
cout << "Enter another number" << endl;
cin >> b;
cout << " Enter another number" << endl;
cin >> c;
num = a + b + c;
// integer string
g = to_string(a);
h = to_string(b);
i = to_string(c);
j = g + h;
k = g + i;
l = h + g;
m = h + i;
n = i + g;
o = i + h;u1 = stoi(j);
v1 = stoi(k);
w1 = stoi(l);
x1 = stoi(m);
y1 = stoi(n);
z1 = stoi(o);
sum = u1, v1, w1, x1, y1, z1;
total = sum / num;
cout << " " << stoi(j) << endl;
cout << stoi(k) << endl;
cout << stoi(l) << endl;
cout << stoi(m) << endl;
cout << stoi(n) << endl;
cout << stoi(o) << " " << endl;
cout << " The answer is :: " << total << " " << endl;
system("pause");
return 0;
  
}
