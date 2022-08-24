#include<iostream>
using namespace std;
class calculator{
    
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //                                                                                                                                                   //
    //              CPP code Simple Calculator                                                                                                           //
    //              Author name:- Bhushan Bajirao Atole                                                                                                         //
    //              Date:- 24/08/2022                                                                                                                    //
    //                                                                                                                                                   //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int a;
    int b;
    int INFINITY;
    public:
    void get(){
        cout<<"enter the two numbers";
        cin>>a>>b;
        cout<<"entered numbers are "<<a<<"  &  "<<b<<endl;

    }
    
    //Addition
    int add(){

        Cout<<"the addition of two numbers is :"<<endl;

        return a+b;

    }
    //Substraction
    int sub(){
        cout<<"the substraction of two numbers is :"<<endl;

        return a-b;
    }
    
    //Division 
    int div(){
        cout<<"the division of two numbers is :"<<endl;
        if(b==0){
            return INFINITY;
        }
        else{
        return a/b;
        }
    }
    
    //    Multiplication
    int mul(){
        return a*b;
    }
};
int main(){

    int choice;

    calculator();  
    calculator c;
    c.get();
    //cout<<c.add();
    cout<<"__________________________________________________________________________________________________________________"<<endl;
    cout<<"\n  1. enter 1 to add 2 numbers";
    cout<< "\n 2. enter 2 to substract 2 numbers";
    cout<< "\n 3. enter 3 to divide 2 numbers";
    cout<<" \n 4. enter 4 to multiply 2 numbers";
    cout<<" \n 5. enter 0 to exit ";
    do{
        cout<<"enter your choice"<<endl;
        cin>>choice;
        cout<<"     "<<endl;
  
        switch(choice){
            case 0:
            exit;
            break;
            
            case 1:
            cout<<"result :"<<c.add()<<endl;
            break;

            case 2:
            cout<<"result :"<<c.sub()<<endl;
            break;

            case 3:
            cout<<"result :"<<c.div()<<endl;
            break;

            case 4:
            cout<<"result :"<<c.mul()<<endl;
            break;


            default:
            cout<<"you entered the invalid choice"<<endl;
            break;

        }
    }while(choice>=1 && choice<=4);
    return 0;
              
}
