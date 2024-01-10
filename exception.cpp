#include <stdexcept>
#include <iostream>

using namespace std;

	int AddPositiveIntegers(int a ,int b)
	{
		if(b==0)
			throw std::invalid_argument("B must be different than 0");

		return (a/b);
	}


   int main(){
   
   
   try
   {
     cout<< AddPositiveIntegers(-1,0);
   }
   
   catch(std::invalid_argument& e)
   {
    cout<< e.what() << endl;
   }
   
   return -1;
   }
