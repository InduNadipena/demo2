#include<stdio.h>
#include<stdlib.h>
void main()
{
   int i,j,k;
   char a ='A';
  /*for (i=0;i<5;i++)
  {
      for(j=i+1;j<5;j++)
      {
          printf(" ");
          
      }
      for(j=0;j<i+1;j++)
      {
          printf("*");
          
      }
      for(j=0;j<i;j++)
      {
          printf("*");
          
      }
      printf("\n");
   }*/
   /*for (i=0;i<5;i++)
   {
       for (j=0;j<i;j++)
       {
           printf(" ");
       }
       for(j=i;j<5;j++)
       {
          printf("*");
          
       }
       for (k=i+1;k<5;k++)
       {
           printf("*");
       }
       printf("\n");
   }*/
  /* for (i=0;i<5;i++)
   {
      if(i%2==0)
      {
          for (j=0;j<=i;j++)
          {
              if(j%2==0)
              {
                 printf("1");
              }
              else 
                 printf("0");
                 
          }
      }
      else{
          for (j=0;j<=i;j++)
          {
              if(j%2==0)
              {
                 printf("0");
              }
              else 
                 printf("1");
                 
          }
      
      }
      printf("\n");
   }*/
   
   /*for (i=0;i<5;i++)
   {
       for(j=0;j<i+1;j++)
       {
           printf("%c",a);
           a++;
       }
       printf("\n");
   }*/
   /*int min(int i,int j)
   {
      if(i<j)
         return i;
      else
        return j;
   }
   int left,right,top,down;
   for( i=0;i<2*5-1;i++)
   {
       for(j=0;j<2*5-1;j++)
       {
           top=i;
           down=(2*5-2)-i;
           left= j;
           right=(2*5-2)-j;
           k=5-min(min(left,right),min(top,down));
           printf("%d",k);
           
       }
       printf("\n");
   }
   */
   // lcm
   int A=2;
   int B=3;
   int lcm;
   if(A<B)
       k=A;
   else
       k=B;
    lcm=k;
  /* while(lcm!=0)
   {
       if(lcm%A==0 && lcm%B==0)
       {
           printf("%d",lcm);
           break;
       }
       else
       {
           lcm=lcm+k;
       }
   } 
   printf("not printed");
   
   }*/
  /* int gcd;
   for(i=k;i>0;i--)
   {
       if(A%i==0 && B%i==0)
       {
            printf("%d",i);
            break;\
        }
   }*/
   int N=4;
   int f(int k)
   {
       int s=0;
       for(i=1;i<=k;i++)
        {
            if(k%i==0)
            {  
                s=s+i;
            }
            
        }
          return s;
   }
  int  s(int d)
   {
       if(d==1)
       {
           return 1;
       }
       else
       {
          return(f(d)+s(d-1));
       }
   }
   printf("%d",s(N));
   }
