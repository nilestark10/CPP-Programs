#include <iostream>
using namespace std;

class complex
{
  int real, imaginary;
  public:
  complex() 								//default constructor
  {	
    real = imaginary = 0;
  }

  complex(int r, int i) 						//parametrized constructor
  {	
    real = r;
    imaginary = i;
  }

  complex(complex &x) 						//copy constructor
  {				
    real = x.real;
    imaginary = x.imaginary;
  }

  ~complex() 									//destructor
  {				
    cout<<"Destructor message:  It is invoked\n";
  }

  void display () 							//displaying value
  {
    cout<<real<<'+'<<imaginary<<'i'<<endl;
     
  }
};

int main ()
{
  complex object1;
  complex object2 (3,7);
  complex object3 (object2);

  object1.display ();
  object2.display ();
  object3.display ();

  return 0;
}