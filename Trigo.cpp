# include <iostream>
float puissance(float c, int a);
int factoriel(int b);
int main()
    {
        std :: cout <<"Nous allons determiner la valeur exacte du cosinus, du sinus, et de la tangente \n";
        float cos=1 , sin=0 , tan ,x ;
        int i,n;
        std :: cout << "Entrer la valeur de langle en degre \n";
        std :: cin >> x ;
        std :: cout << "Entrer la precision \n";
        std :: cin >> n;
        if(x<0 && x>=360) // determine la mesure principale des angles
        {
            while (x>=360)
            {
                x=x-360;
            }
        }else
        if(x>0 && x<=-360)
        {
            while (x<=-360)
            {
                x=x+360;
            }
        }
        
        x = x/57.29577951308 ; //transforme l'angle en radian
         for(i=1;i<=n;i++)
            {
                int s=i-1,t=2*i-1;
                cos = puissance(-1,i)*puissance(x,2*i) / factoriel(2*i) + cos;
                sin = puissance(-1,s)*puissance(x,t)/factoriel(t) + sin;
                tan= sin/cos;
            }
  std :: cout <<"cos= "<< cos<<"\n"<<"sin= " <<sin<<"\n"<<"tan= " <<tan <<"\n";
   
        return 0;
      
}
float puissance(float x, int a)
{
    int i;
    if(x==0 && a==0.0)
    {
        std::cout << "Erreur ";
        return 0 ;
    }else if (a==0)
    {
        float puis=1;
        return puis;
    }else
    {
        float puis = 1;
        for (i=1;i<=a;i++)
        {
            puis= puis*x ;
        }
        return puis ;
    }
}
int factoriel(int b)
{
    int fac = 1;
    int i;
    if (b==0)
    {
        return fac;
    }else
    {
        for(i=1;i<=b;i++)
        {
            fac=fac*i;
        }
        return fac;
    }
}
