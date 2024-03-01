#include <iostream>
#include <vector>
using namespace std;

class Vecteur3D {
	private:
	
	double x;
	
	double y;
	
	double z;
	
	double getx() const {
		return x;
	}
		
	double gety() const {
		return y;
	}
		
	double getz() const {
		return z;
	}
			
	public:
	
	Vecteur3D(double x = 0.0, double y = 0.0, double z = 0.0)
	:x(x),y(y),z(z)
	{}

	void affiche() const {cout << x <<" " << y << " " << z << endl;}
	
	void set_coord(double newx, double newy, double newz) {
		x = newx;
		y = newy;
		z = newz;
	}
    //test commit
   
    bool compare(Vecteur3D v2) const {
		if((x == v2.getx()) and (y == v2.gety()) and (z == v2.getz())){
			return true;
		}
		return false;
	}

	Vecteur3D addition(Vecteur3D v2) const {
		Vecteur3D v;
		double a,b,c;
		a = x + v2.getx();
		b = y + v2.gety();
		c = z + v2.getz();
		v.set_coord(a,b,c);
		return v;
		}
};

