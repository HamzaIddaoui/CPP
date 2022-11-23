class Forme { 
   protected: 
   virtual double Surface()=0; 
   //double Perimetre();
};


class Point { 
    private : 
    double x,y;

    public : 
    Point(Point const &obj);
    ~Point();
    Point operator = (Point const &obj);
    double getattributex();
    double getattributey();
    void setattributex(double newx);
    void setattributey(double newy);
};



class F2D : public Forme { 

    protected : 
    float longueur,largeur;

    public : 
    F2D(float,float);
};



class Cercle : public F2D { 
    float rayon;
    public : 
    Cercle(float,float,float);
    double Surface() override;
    friend ostream& operator<<(ostream & out , const Cercle& c ){
        out<<"Rayon: "<<c.rayon<<endl;
        return out;
    }
};

class Carre : public F2D { 

    public : 
    Carre(float,float);
    double Surface() override;
    friend ostream& operator<<(ostream & out , const Carre& c ){
        out<<"cote: "<<c.largeur/2<<endl;
        return out;
    }
};