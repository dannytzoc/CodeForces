#include<iostream>
using namespace std;
int main(){
	int n;
	int k;
	int a;
	int counter = 0;
	int mas[1000];
	cin >> n >> k;
	for(int i = 1; i <=n;  i++){
		cin >>a;
		mas[i]=a;
	}
	for (int j = 1; j<=n; j++){
		if(mas[j]>=mas[k] && mas[j] > 0){
			counter++;
		}
	}
	cout << counter << endl;
	return 0;


}

