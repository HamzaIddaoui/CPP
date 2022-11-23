#include <iostream>
#include "Forme.h"
using namespace std;


//double Forme::Perimetre() {};
double Forme::Surface() {};




/**       POINT       **/
Point::Point(Point const &obj)
{ 
    this->x = obj.x;
    this->y = obj.y;
    cout << "Constructeur de recopie Point.. " << endl; 
}
double Point::getattributex() 
{ 
    return this->x;
}

double Point::getattributey()
{ 
    return this->y;
}

void Point::setattributex(double newx)
{ 
    this->x = newx;
}

void Point::setattributey(double newy)
{ 
    this->y = newy;
}

/**     FIN POINT        **/

/**     F2D    **/

F2D::F2D(float lg,float larg)
{ 
    this->longueur = lg;
    this->largeur = larg;
}


/**     CARRE **/

Carre::Carre(float lg,float larg):F2D(lg,larg)
{ 
   this->largeur = this->longueur; // Carre longueur = largeur
   cout << "Carre () " << endl;

}

double Carre::Surface()
{ 
    return this->largeur*this->longueur;
}



/**  CERCLE **/

Cercle::Cercle(float lg,float larg,float ry) : F2D(lg,larg)
{ 
    this->rayon = this->largeur/2;
    cout << "Cercle () " << endl;
}


double Cercle::Surface()
{ 
    return this->rayon*this->rayon*3.14;
}


int main()
{

}