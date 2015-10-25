class Person {
private:
static const LIMIT = 25;
string lname; // Person’s last name
char fname[LIMIT]; // Person’s first name
public:
Person() {lname = ""; fname[0] = ‘\0’; } // #1
Person(const string & ln, const char * fn =
"Heyyou")
{ lname=ln;
  for(int i=0, i<25, i++)
  { fname[i]=fn[i];
  };
}
// the following methods display lname and fname
void Show() 
{ cout<<fname[LIMIT]<<lname;
};// firstname lastname format
void FormalShow() const
{ 
  cout<<lname<<fname[LIMIT];
  }
};
