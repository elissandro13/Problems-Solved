#include<conio.h>
#include<stdio.h>
 
int main(){
    int x,z=1,y,yy;
     int c[101][101];
    while(true)
    {
   
    scanf("%d",&x);
        for(int i=1;i<=x;i++)
        for(int j=1;j<=x;j++)
        {y=i-1;yy=j-1;
        c[i][j]=z;
        
            if(x>2){
                         
            
            if(i==j && i<x)
            {
			  c[i][j]  ==  z++;
             z=1;}
            else       
            c[i][j]  ==  z;
 
        }
        
           
        }
       
       
       
        if(x==0)break;
    }
   
}