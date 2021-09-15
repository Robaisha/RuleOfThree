#include<iostream>
using namespace std;
class Numbers{
	int size;
	int *fp;
	public:
		Numbers(){
			size=0;
			fp=new int;
		}
		void func(int s,int v){
			*fp=v;
			size=s;
		}
		Numbers(const Numbers &obj){
			size=obj.size;
			fp=new int;
			*fp=*(obj.fp);
		}
		void display(){
			cout<<"SIZE "<<size<<endl;
			cout<<"VALUE AT WHICH FP POINTS "<<*fp<<endl;
		}
		~Numbers(){
			cout<<"DESTRUCTOR IS CALLED\n";
			delete fp;
		}
};
int main(){
	Numbers obj1;
	int s,v;
	s=44;
	v=3;
	obj1.func(s,v);
	obj1.display();
	Numbers obj2(obj1);
	obj2.display();
}
