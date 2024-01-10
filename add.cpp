#include <iostream>
#include <stdexcept>

int AddNum(int a,int b) {
	if(b==0)
	throw std::invalid_argument(" B cannot be zero.");
	return(a/b);
}


int main(){
 try{
 	std::cout<< AddNum(-9,0)<< std::endl;
 
 }

  catch(const std::invalid_argument& e){
	  std::cerr <<"error"<< e.what() << std::endl;
  
  	return -1;
  }


return 0;


}
