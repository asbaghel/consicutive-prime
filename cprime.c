#include<stdio.h>
int checkprime(int n);
int main(void)
{

    int num[10] ,len[10];
     int index;
    /* storing user values */
    int i=0;
    for(i=0; i<10; i++)
     {
    scanf("%d",&num[i]);
    }


   int p,z;
       for(z=0; z<10; z++)

       {
             int length=0;
             i=z;
             p=checkprime(num[z]);
          while(p)
            {
                    length++;
        
                   i++;
                 p=checkprime(num[i]);
            }

                 len[i]=length;
        }
  int  largest=0;
 for(i=0; i<10; i++)
 {
   
     if(len[i]>largest)
     {
         largest=len[i];
         index=i;

     }
  }
 for(i=index; i<largest+index; i++)
 {


 printf("%d",num[i]);   
 }

   return 0;

}



int checkprime(int n)
{ 
    int i;
    int p=0;
   for(i=2; i<24; i++)
   {
    if(n%i){
        p=0;
    }
    else
    {
        p=1;
    }

    return p;
   }

}
