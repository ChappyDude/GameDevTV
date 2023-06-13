#include <iostream>
#include <vector>

using namespace std;

vector<int> numbers = {12,25,31,47,58};

int main(void){
   auto ptr = numbers.begin();

   while (ptr != numbers.end())
   {
        cout << *ptr << " ";
        ptr = next(ptr, 1);
   }
   cout << endl;

   int i = 0;
   do
   {
        cout << numbers[i] << " ";
        i++;
   } while (i < numbers.size());
   
   
    return 0;
}