#include<iostream>
using namespace std;

int n, k, a[10];
bool check = false;

//Xuat cau hinh có k phan tu
void in(){
 for (int i = 1; i <= k; i++){
  cout << a[i];
 }
 cout << endl;
}
//Thuat toan sinh
void gen(){
 int i = k;
 while (a[i]==n&&i>0){  // neu a[i] = n và i > 0 thì giam i
  i--;
 }
 if (i == 0) check = true; // neu i = 0 thì dã den cau hình cuoi cùng 
 else
 {
  a[i]++;     // tang a[i] lên 1 don vi
  for (int j = i + 1; j <= k; j++){
   	a[j] = 1;   // dat lai tat ca phan tu sau a[i] bang 1
  }

 }
}
int main(){
 cout << " nhap n = ";
 cin >> n;
 cout << " nhap k = ";
 cin >> k;
 for (int i = 1; i <= k; i++){
  a[i] = 1;
 }
 while (!check){
  in();//Xuat cau hinh hien tai
  gen();//sinh cau hinh ke tiep
 }

}