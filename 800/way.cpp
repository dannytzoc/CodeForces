#include<iostream>
#include <string>
using namespace std;
int main(){
        int n;
        cin >> n;
        string answer;
       for(int i = 0; i < n; i++){
               cin >> answer;
               if (answer.size() > 10){
                       cout << answer.at(0)<<answer.size()-2<<answer.at(answer.size()-1)<<endl;

               }else{
               cout << answer<< endl;
               }

       }
       return 0;
}
