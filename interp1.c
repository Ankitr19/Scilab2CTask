//Created by:
//Ankit Raj
//B.Tech ECE 2nd year,NIT Agartala
//E-mail:- rajankit510@gmail.com

//The method and extrapolation is not used , since I have used Direct method for interpolation

//Direct method of Interpolation:
//Given n+1 data points the direct method assumes the following polynomial:
//y=f(x)=(a0)+(a1*x)+(a2*x*x)+(a3*x*x*x)+.......+(an*x*x*...n-times)
//With n+1 values for x and the n+1 corresponding values for y we can solve for a0,a1,a2,a3....an by solving the n+1 simultaneous liner equations, which is known as the direct method.
//For example two data points (x0,x1) and (y0,y1) is given , we can use a linear function y=f(x)=a0+a1*x two pass through the points
//y0= a0+a1*x0
//y1= a0+a1*x1
//From this we can solve for a0 and a1(the coefficients of f(x)) we can use the function as the basis for interpolation-estimating the missing data points in between

#include<stdio.h>
#include<conio.h>
#define MAX 100000

//interpolation function using direct method
float interp1_directMethod(float x1,float x2,float xp, float y1,float y2)
{
    float a0,a1;
    a1=(y2-y1)/(x2-x1);         //calculating coefficient a1
    a0=y1-a1*x1;                //calculating coefficient a0
    return (a1*xp+a0);
}
void main()
{
    int m,n,i,j,k,l,r;
    float x[MAX],y[MAX],xp[MAX],yp[MAX];
    printf("Enter the number of elements to be stored in x and y:\n");
    scanf("%d",&n);
    printf("\n\nEnter the elements of x:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
    }
    printf("\n\nEnter the elements of y:\n");
    for(j=0;j<n;j++)
    {
        scanf("%f",&y[j]);
    }
    printf("\nEnter the number elements in xp:\n");
    scanf("%d",&m);
    printf("\nEnter the elements of xp:\n");
    for(k=0;k<m;k++)
    {
        scanf("%f",&xp[k]);
    }
    if(m==1)
    {
        yp[0]=interp1_directMethod(x[0],x[n-1],xp[0],y[0],y[n-1]);      //calling the interpolation function
        printf("\n\nResult");
        printf("\nyp = \n%f",yp[0]);
    }
    else
    {
        for(l=0;l<m-1;l++)
        {
            yp[l]=interp1_directMethod(x[i],x[i+1],xp[i],y[i],y[i+1]);   //calling the interpolation function
        }
        yp[m-1]=interp1_directMethod(x[n-1],x[n],xp[m-1],y[n-1],y[n]);   //calling the interpolation function
        printf("\n\nResult\nyp = \n");
        for(r=0;r<m;r++)
        {
            printf("\t%f",yp[r]);                                        //printing the desired output
        }

    }

}
