#include<iostream>
using namespace std;
class myclass
{
    public:
    int bottom = 0;
    int array[10];
    int add_elemnts(int a)
    {
     while (1)
    {
     int x;
     cout<<"enter a number";
     cin>>x;
     array[bottom] = x;
     bottom +=1;
     if (bottom == 9)
     {
        array[20];
     }
     int i;
     cin>>i;
     if (i == 1)
     {
         continue;
     }
     else
        break;
        return x;
     }
};
int main()
{
 myclass arr;
 int a = arr.add_elemnts(10);
 cout<<a;
 return 0;
}
