#include <iostream>
using namespace std;
int main(){
	int n; 
	cin >> n;
	int total =0;
	int pet,vas,ton;
	while(n--){
		cin >> pet >> vas >> ton;
		if (pet+vas+ton >=2){
			total+=1;
		}

	}
	cout << total << endl;
	return 0;

	
}
