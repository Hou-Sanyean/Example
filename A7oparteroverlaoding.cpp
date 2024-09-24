#include<iostream>
#include<math.h>
using namespace std;
class Rectangle{
	private :
		double widtH,lengtH;
		public:
			Rectangle(double width,double length){
				widtH=width;				lengtH=length;
			}
			void Show(){
				cout<<" Width :  "<<widtH<<endl
				    <<" Length:  "<<lengtH
				    <<endl;
			}
			Rectangle operator + (Rectangle r2){
	
		Rectangle r3(0.0,0.0);
        r3.widtH = widtH + r2.widtH;
        r3.lengtH= lengtH + r2.lengtH;
        return r3;
     
}
	//plush operator campareation give operator equal =	
	bool operator = (Rectangle r2){
		if(widtH + lengtH == r2.widtH +r2.lengtH)
		return true; 
		else 
		return false;
	}
	bool operator > (Rectangle r1){
		if(widtH + lengtH > r1.widtH +r1.lengtH)
		return true; 
		else 
		return false;	
	}
	void operator ++(){
	 widtH ++;
	 lengtH ++;
	}
    void friend operator >> (istream &  keyboard, Rectangle & r){
	        //& impersent referrent pointer and use friend for use width of rectangle
    	cout<<"Rectangle width :    ";keyboard>>r.widtH;
		cout<<"Rectangle LengtH:    ";	keyboard>>r.lengtH;
	}
};

int main(){
 Rectangle r1(11.22,34.44),r2(23.3,10.28),r3=r1+r2;   
// if(r1=r2)
// cout<<"rectangle r1 is equal to rectangle r2.\n";
// else 
// cout <<"rectangle r1 is not equal to rectangle r2.\n";
//
// if(r1>r2){
// 	cout<< "r1 greater than r2\n";	
// }
// else {
// 	cout<< " r1 not greater than r2\n";
// }
 cin>>r3;
 r3.Show();
//  ++r1;
//  r1.Show();
//  cout<<"r1 plush\n";
//  ++r2;
//  r2.Show();
//  cout<<"r2 phush\n";
//  r3.Show();

// plush input r3 width and height; bigger *2;
	
	
	
	return 0;
}