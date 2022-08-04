#include <iostream>
 
using namespace std;
 
int main() {
    string line1, line2, line3;
    getline(cin, line1);
    getline(cin, line2);
    getline(cin, line3);
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    char vowels[] = {'a','e','i','o','u'};
    for(int i = 0; i < line1.size(); i++){
        for(int j = 0; j < 6; j++){
            if(line1[i] == vowels[j]){
                cnt1++;
            }
        }
    }
    for(int m = 0; m < line2.size(); m++){
        for(int n = 0; n < 6; n++){
            if(line2[m] == vowels[n]){
                cnt2++;
            }
        }
    }
    for(int i = 0; i < line3.size(); i++){
        for(int j = 0; j < 6; j++){
            if(line3[i] == vowels[j]){
                cnt3++;
            }
        }
    }
        if(cnt1 == 5 && cnt2 == 7 && cnt3 == 5){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        //cout<<cnt1<<"\n"<<cnt2<<"\n"<<cnt3<<"\n";
}
 