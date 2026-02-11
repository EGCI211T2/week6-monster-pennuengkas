#ifndef monster_h
#define monster_h

class monster{
private:
	string name;
	int hp,potion;
public:
	void Attack(monster &);
    void heal();
	void display();
	monster(string, int,int);
	~monster();
};

monster::monster(string n="anonymous", int h=1, int p=1){
	name=n;
	hp=h;
	potion=p;
	cout<<"A wild "<<name<<" appears!"<<endl;
}

void monster::display()
{
	cout<<"Name: "<<name<<endl;
	cout<<"HP: "<<hp<<endl;
	cout<<"Potion: "<<potion<<endl;
}

monster::~monster(){
	cout<< name <<" is deleted."<<endl;
}

#endif
