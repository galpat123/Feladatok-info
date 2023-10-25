#include <iostream>

using namespace std;

int main()
{
   int szam1,szam2,szam3,szam4,szam5,szam6,S1=0,S2=0;
   cout<<"szam1";
   cin>>szam1;
    cout<<"szam2";
   cin>>szam2;
    cout<<"szam3";
   cin>>szam3;
    cout<<"szam4";
   cin>>szam4;
    cout<<"szam5";
   cin>>szam5;
    cout<<"szam6";
   cin>>szam6;
   if (szam1%2==0)  {
       S1+=szam1;
   }else{
       S2+=+S2;
   }
   if (szam2%2==0)  {
       S1+=szam2;
   }else{
       S2+=szam2;
   }
   if (szam3%2==0)  {
       S1+=szam3;
   }else{
       S2+=S2;
   }
   if (szam4%2==0)  {
       S1+=szam4;
   }else{
       S2+=szam4;
   }
   if (szam5%2==0)  {
       S1+=szam5;
   }else{
       S2+=szam5;
   }
   if (szam6%2==0)  {
       S1+=szam6;
   }else{
       S2+=szam6;
   }
    cout << "Parosak" << endl;
     cout << "Paratlanok" << endl;
    return 0;
}
