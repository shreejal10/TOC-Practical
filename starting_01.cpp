// Program to accept the string starting with 01
#include<iostream>
#define max 100
using namespace std;

int main(){
    char str[max], state= 'A', ch;
    cout<<"\t\t\t\t\tProgram to accept the string which starts with 01, Alpbahet(0,1)\t\t\t\t"<<endl;
    do{
        cout<<"Enter the string to be checked: ";
        cin>>str;
        for (int i = 0; str[i] != '\0'; i++){
            switch (state){
                case 'A':
                    if(str[i] == '0'){
                        state ='B';
                    } 
                    else if(str[i] == '1'){
                        state = 'D';
                    }
                    break;

                case 'B':
                    if(str[i] == '1'){
                        state ='C';
                    }
                    else if(str[i] == '0'){
                        state = 'D';
                    }
                    break;

                case 'C':
                    if(str[i] == '0'){
                        state = 'C';
                    }
                    else if(str[i] == '1'){
                        state = 'C';
                    }
                    break;

                case 'D':
                    if(str[i] == '0'){
                        state = 'D';
                    }
                    else if(str[i] == '1'){
                        state = 'D';
                    }
                    break;
                
                default:
                    break;
            }
        }
        if (state == 'C'){
            cout<<"Given string "<<str<<" is accepted."<<endl;
        }
        else{
            cout<<"Given string "<<str<<" is not accepted."<<endl;
        }
        cout<<"\nDo you want to check another string(y/n)?: ";
        cin>>ch;
        cout<<endl;
        if(ch=='y'){
            state='A';
        }
    } while (ch=='y');
    return 0;
}