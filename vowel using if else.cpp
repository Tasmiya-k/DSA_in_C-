

#include <iostream.h>

using namespace std;

int main()
{
 char c;
 int islowercasevowel , isuppercasevowel;
 cout<<"Enter an alphabet";
 cin>>c;
 
 islowercasevowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
 isuppercasevowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
 
 if(islowercasevowel||isuppercasevowel)
 {
  cout<<"it is a vowel";
 } 
 else{
     cout<<"it is a consonant";
 }    
 
   return 0;
}
