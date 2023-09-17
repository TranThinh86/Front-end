#include <iostream>
using namespace std;
 
void dichuyen(int n,char A,char B,char C)
 {
      if(n==1){
        cout<<A<<" ==> "<<C<<"\n";//  n = 1 thì dịch chuyển từ A -> C
      }
      else {        
        //// Nếu n > 1 
        dichuyen(n - 1, A, C, B);       //  Dịch chuyển n-1 đĩa từ A -> B
        cout<<A<<" ==> "<<C<<"\n"; // Dịch chuyển đĩa thứ n từ A -> C
        dichuyen(n - 1, B, A, C);     //  Dịch chuyển n-1 đĩa từ B -> C
      }
 }
 
int main() {
  int n;
  cout<<endl<<"nhap vao so dia ban can: ";
  cin>>n;
  cout<<"thu tu di chuyen: \n";
  dichuyen(n, 'A', 'B', 'C');
}