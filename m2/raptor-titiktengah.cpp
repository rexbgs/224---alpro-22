#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   int y1,p,q,x2,y2,x1;

   raptor_prompt_variable_zzyz ="Nilai x1 : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> x1;
   raptor_prompt_variable_zzyz ="Nilai y1 : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> y1;
   raptor_prompt_variable_zzyz ="Nilai x2 : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> x2;
   raptor_prompt_variable_zzyz ="Nilai y2 : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> y2;
   p =(x1+y1)/2;
   q =(x2+y2)/2;
   cout << "Titik Tengah A(x1,y1) = "<< p << endl;   
   cout << "Titik Tengah B(x2,y2) = "<< q << endl;
   return 0;
}
