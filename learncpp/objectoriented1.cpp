#include<iostream>
using namespace std;
class Book{
    public:
        string title;
        string author;
        int pages;
};
int main(){
    Book book;
    book.title="The Magic of C++";
    book.author="Hasan Saleh";
    book.pages=920;
    cout << book.title <<endl;
    cout << book.author << endl;
    cout << book.pages << endl;
  return 0;
}
