//---------------------------------------------------------------------------


#pragma hdrstop

#include "ASCI.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)



void ascii(int n)
{
        if(n>=0 && n<256)
        {
                cout<<"\nSimvol sootv ASCII codu "<<n<<" - "<<char(n);
         }
        else
                cout<<"\nError";
 }

void main()
{
        int n=0;
        cout<<"Vvedite n\n";
        cin>>n;
        ascii(n);
        getch();
}
