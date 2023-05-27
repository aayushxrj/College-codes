#include<iostream>
using namespace std;


string reverse(string str) {
  int n = str.length();
  string rev = "";
  for (int i = n - 1; i >= 0; i--) {
    rev += str[i];
  }
  return rev;
}


int findPos(string s1, string s2) {

  string revS1 = reverse(s1);
  string revS2 = reverse(s2);

 
  int index = revS1.find(revS2);


  if (index == -1) {
    return -1;
  }


  return index;
}


int findPos(string s1, string s2, int pos) {

  string revS1 = reverse(s1);
  string revS2 = reverse(s2);


  if (pos > revS1.length()) {
    return -1;
  }


  int index = revS1.find(revS2, pos);


  if (index == -1) {
    return -1;
  }


  return index + pos;
}

int main() {

  string s1, s2;
  cin >> s1 >> s2;

  int pos = findPos(s1, s2);


  cout << pos << endl;


  int pos2;
  cin >> pos2;


  int pos3 = findPos(s1, s2, pos2);

  cout << pos3 << endl;

  return 0;
}