#include <iostream>
using namespace std;
int main()
{
float n1 , n2 , n3 ;
cout << " enter three numbers " ;
cin >> n1 >> n2 >> n3;
if (n1 > n2 & n1 > n3)
{
cout <<" In three numbers " << n1 << " The maximum number ";
}
else if (n2 > n3 & n2 > n1)
{
cout << " In three numbers " << n2 << " The maximum number ";
}
else  
{
cout << " In three numbers " << n3 << " The maximum number ";
}
 return 0 ;
}
