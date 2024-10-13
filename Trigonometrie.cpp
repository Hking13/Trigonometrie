# include <iostream>
int factoriel(int n);
int factoriel(int n)
{
    int fact = 1;
    int i;
    if (n==0)
    {
        return fact;
    }else
    {
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        return fact;
    }
}
float puissance(float v, int d);
float puissance(float v, int d)
{
    int i;
    if(v==0 && d==0.0)
    {
        std::cout << "Erreur ";
        return 0 ;
    }else if (d==0)
    {
        float ps=1;
        return ps;
    }else
    {
        float ps = 1;
        for (i=1;i<=d;i++)
        {
            ps= ps*v ;
        }
        return ps ;
    }
}
int main()
    {
        std :: cout <<"Determinons la valeur exacte du cosinus du sinus, de la tangente \n";
        float cos, sin, tan, a;
        int i,p;
        cos=1;
        sin=0;
        std :: cout << "Entrer la valeur l angle (valeur en degre) \n";
        std :: cin >> a;
        std :: cout << "Entrer la precision \n";
        std :: cin >> p;
        a = a/57.2958 ;
        for(i=1;i<=p;i++)
            {
                int m=i-1;
                int h=2*i-1;
                cos = puissance(-1,i)*puissance(a,2*i) / factoriel(2*i) + cos;
                sin = puissance(-1,m)*puissance(a,h)/factoriel(h) + sin;
                tan = sin/cos;
            }
  std :: cout <<"cos(x)= "<< cos<<"\n"<<"sin(x)= " <<sin<<"\n"<<"tan(x)= " <<tan <<"\n";
  
        return 0;     
}
