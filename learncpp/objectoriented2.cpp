#include<iostream>
using namespace std;
class Book{
    public:
        string title;
        string author;
        int pages;
        Book(string at,string aa,int ap){
            title=at;author=aa;pages=ap;
        }
        string bigbook(){
            int __init__ =pages;
            if(__init__ >= 100){
                return "YES";
            }else{
                return "NO";
            }
        }
};
int main(){
    Book book("hello,world in cpp","hasan saleh",920);
    cout << book.title <<endl;
    cout << book.author << endl;
    cout << book.pages << endl;
    cout << book.bigbook() << endl;
  return 0;
}
