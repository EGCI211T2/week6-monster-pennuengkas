#include <iostream>
using namespace std;

#include "monster.h"

int main(int argc, char* argv[]) {

  monster A("Siri", 100, 3);
  monster B("Daisuke");

  monster x[5]={{"James"},{"John",150}, {"Robert",200,5} , {"Michael",120,2}, {"William"} };
  monster c;
  monster*p;
  p=&c;
  p->display();
  p=new monster("Sarina", 180, 5);
  p->display();
  delete p;

  p=new monster[3];
  delete []p;
  cout<<"------------------"<<endl;
  /*
 
 monster *p,x;
  p=&x;
  p=new monster;
 delete p;

 p=new monster[3];
 delete []p;

*/

}
