#include <iostream>
 
using namespace std;
 
int main() {
   string word;
   cin>>word;
   int cnt = 0, cnt2 = 0;
   for(int i = 0; i < word.size(); i++){
    if(isupper(word[i])){
        cnt++;
    }else{
        cnt2++;
    }
   }
   if(cnt > cnt2){
        for(int i = 0; i < word.size(); i++){
            word[i] = toupper(word[i]);
        }
        }else{
            for(int i = 0; i < word.size(); i++)
                word[i] = tolower(word[i]);
        }
         cout<<word<<endl;
 
   }
 