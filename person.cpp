#include "person.h"
#include <fstream>
#include "string.h"


void Person::Print(){
    cout << "Last Name '" << LastName << "|"
    << "First Name '" << FirstName << "|"
    << "Address '" << Address << "|"
    << "City '" << City << "|"
    << "State '" << State << "|"
    << "Zip Code '" << ZipCode << "|"
    << flush<<endl;
}

Person::Person(){
    LastName[0]=0;
    FirstName[0]=0;
    Address[0]=0;
    City[0]=0;
    State[0]=0;
    ZipCode[0]=0;
}


void Person::leer(){
    char archivo[20];

    cout<<"Nombre del archivo: "<<endl;
    cin>>archivo;
    
	ifstream file;
    file.open(archivo);
	file.seekg(0, ios_base::end);
    int size=file.tellg();
	file.seekg(0, ios_base::beg);


    char buffer[size+1];
	file.read((char*)&buffer, sizeof(buffer));

    int pos=0;
    string temp="";
    for (size_t i = 0; i < size; i++)
    {
        if (buffer[i]=='|')
        {
            for(int i=0;i<temp.size();i++){
                LastName[i]=temp.at(i);
            }
            LastName[temp.size()]='\0';
            temp="";
            pos+=1;
            break;
        }
           temp+=buffer[i];
           pos+=1;
    }
    for (size_t i = pos; i < size; i++)
    {
     if (buffer[i]=='|')
        {
            for(int i=0;i<temp.size();i++){
                FirstName[i]=temp.at(i);
            }
            FirstName[temp.size()]='\0';
            temp="";
            pos+=1;
            break;
        }
           temp+=buffer[i];
           pos+=1;   
    }
    for (size_t i = pos; i < size; i++)
    {
        if (buffer[i]=='|')
        {
            for(int i=0;i<temp.size();i++){
                Address[i]=temp.at(i);
            }
            Address[temp.size()]='\0';
            temp="";
            pos+=1;
            break;
        }
           temp+=buffer[i];
           pos+=1;
    }
    for (size_t i = pos; i < size; i++)
    {
        if (buffer[i]=='|')
        {
            for(int i=0;i<temp.size();i++){
                City[i]=temp.at(i);
            }
            City[temp.size()]='\0';
            temp="";
            pos+=1;
            break;
        }
           temp+=buffer[i];
           pos+=1;
    }
    for (size_t i = pos; i < size; i++)
    {
        if (buffer[i]=='|')
        {
            for(int i=0;i<temp.size();i++){
                State[i]=temp.at(i);
            }
            State[temp.size()]='\0';
            temp="";
            pos+=1;
            break;
        }
           temp+=buffer[i];
           pos+=1;
    }
    for (size_t i = pos; i < size; i++)
    {
        if (buffer[i]=='|')
        {
            for(int i=0;i<temp.size();i++){
                ZipCode[i]=temp.at(i);
            }
            ZipCode[temp.size()]='\0';
            temp="";
            pos+=1;
            break;
        }
           temp+=buffer[i];
           pos+=1;
    }
    
}
