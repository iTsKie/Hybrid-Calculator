//
//  main.cpp
//  Hybrid Calculator
//
//  Created by Shobhit Singh on 22/07/21.
//


//                                          Hybrid Calculator


#include "iostream"
#include "cmath"
using namespace std;

class SimpleCalculator
{
    
protected:
    
    float A;
    float B;
  
public:
    
    void Set_value_Simple()
    {
        
        cout<<"Enter the value of A"<<endl;
        cin>>A;
        
        cout<<"Enter the value of B"<<endl;
        cin>>B;
        
    }
    
    void Get_value_Simple()
    {
        cout<<"The Value of "<<A<<" + "<<B<<" is "<<A+B<<endl;
        cout<<"The Value of "<<A<<" - "<<B<<" is "<<A-B<<endl;
        cout<<"The Value of "<<A<<" * "<<B<<" is "<<A*B<<endl;
        cout<<"The Value of "<<A<<" / "<<B<<" is "<<A/B<<endl;
    }
};


class ScientificCalculator
{
    
protected:
    
    float A;
    float B;
  
public:
    
    void Set_value_Sci()
    {
        
        cout<<"Enter the value of A"<<endl;
        cin>>A;
        
        cout<<"Enter the value of B"<<endl;
        cin>>B;
        
    }
    
    void Get_value_Sci()
    {
        
        cout<<"For A"<<endl;
        
        cout<<"The Value of cos(A)"<<cos(A)<<endl;
        cout<<endl;
        cout<<"The Value of sin(A)"<<sin(A)<<endl;
        cout<<endl;
        cout<<"The Value of tan(A)"<<tan(A)<<endl;
        cout<<endl;
        cout<<"The Value of exp(A)"<<exp(A)<<endl;
        cout<<endl;

        
        cout<<"For B"<<endl;
        
        cout<<"The Value of cos(B)"<<cos(B)<<endl;
        cout<<endl;
        cout<<"The Value of sin(B)"<<sin(B)<<endl;
        cout<<endl;
        cout<<"The Value of tan(B)"<<tan(B)<<endl;
        cout<<endl;
        cout<<"The Value of exp(B)"<<exp(B)<<endl;
        cout<<endl;
        
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
    
};


int main()
{
    
    HybridCalculator Result;
    Result.Set_value_Simple();
    Result.Get_value_Simple();
    Result.Set_value_Sci();
    Result.Get_value_Sci();
    
    
    
    return 0;
    
}

