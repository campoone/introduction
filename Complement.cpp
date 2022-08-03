#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main() {
   int first[] = {3, 6, 10, 12, 15};
   int second[] = {1, 3, 5, 10, 16};
   int n = sizeof(first) / sizeof(first[0]);
   vector<int> temp(5);
   vector<int>::iterator it, ls;
   sort(first, first + 5);
   sort(second, second + 5);
   cout << "First array :";
   for (int i = 0; i < n; i++)
      cout << " " << first[i];
   cout << endl;
   cout << "Second array :";
   for (int i = 0; i < n; i++)
      cout << " " << second[i];
   cout << endl;
   ls = set_difference(first, first + 5, second, second + 5, temp.begin());
   cout << "The result of relative complement ";
   for (it = temp.begin(); it < ls; ++it)
      cout << " " << *it;
   cout << endl;
}
