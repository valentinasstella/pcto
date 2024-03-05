#include <stdio.h>

int main()
{ 
    int n=6%4;
    printf ("Inserisci un numero ");
    scanf ("%d",&n);
    if(n%2==0)
    {
        printf ("il numero e'pari");
    }
    else 
    { 
        printf ("il numero e'dispari");
    }
    
}