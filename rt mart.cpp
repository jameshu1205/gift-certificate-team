#include<iostream>
using namespace std;
//product商品數量、p陣價格、total有幾種排列組合 、rank陣排列方法 
int main(){
	cout << "你要在RT-mart買幾樣產品啊??(9樣以內)";
	int product;
	cin >> product;
	int p[product];
	for(int t = 0 ; t < product ; t++){
		cout << "請輸入第" << t + 1 << "產品的金額:";
		cin >> p[t]; 
	}
	int total = 1;
	for(int t = 1, p = 2 ; t < product ; t ++){
		total += p;
		p = p*2;
	}
	int rank;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	system("Pause");
	return 0;
}
