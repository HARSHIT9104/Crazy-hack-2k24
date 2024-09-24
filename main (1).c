#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define note "please enter correct value"
void addition();
void subtraction();
void multiplication ();
void division ();
void modulus ();
void factorial ();
void square ();
void cube();
void power();
void squareroot ();

int main (){
    printf("\t\twelcome to the calculator\n\n");
    
    int choice ;
    printf("\n***** press 0 to quite the program ****\n");
    printf("Enter 1 for addition\n ");
    printf("Enter 2 for subtraction\n");
    printf("Enter 3 for multiplication \n ");
    printf("Enter 4 for division\n");
    printf("Enter 5 for modulus\n ");
    printf("Enter 6 for factorial\n");
    printf("Enter 7 for square\n ");
    printf("Enter 8  for cube\n ");
    printf("Enter 9 for power\n");
    printf("Enter 10 for squareroot\n");
    while(1){
        printf("\n\nEnter the operation you want to perform\n\n");
        int choice;
        scanf("%d",&choice);
        switch(choice){
            
            case 1:
                addition ();
                break;
                
            case 2: 
                subtraction ();
                break;
                
            case 3:
                multiplication ();
                break;
                
            case 4: 
                division ();
                break;
            
            case 5:
                modulus();
                break;
            
            case 6:
                factorial ();
                break;
                
            case 7 :
                square();
                break;
            
            case 8:
                cube();
                break;
            
            case 9:
                power();
                break;
                
            case 10:
                squareroot();
                break;
                
            case 0:
                exit(0);
                
            default:
                printf("\n*******%s******\n",note);
            
            
            }
    }
}
    void addition (){
        printf("Enter the numbers you want to add :");
        int a,b ;
        scanf("%d %d",&a,&b);
        printf("sum of a and b is %d",a+b);
}
    void subtraction (){
        printf("Enter the numbers you want to subtract :");
        int a,b ;
        scanf("%d %d",&a,&b);
        printf("difference of a and b is %d",a-b);
}
    void multiplication (){
        printf("Enter the numbers you want to multiply :");
        int a,b ;
        scanf("%d %d",&a,&b);
        printf("product of a and b is %d",a*b);
}
    void division (){
        printf("Enter the numbers you want to divide :");
        int a,b ;
        scanf("%d %d",&a,&b);
        printf("division of a and b is %f",(float)a/(float)b);
}
    void modulus (){
        printf("Enter the numbers you want to get remainder:");
        int a,b ;
        scanf("%d %d",&a,&b);
        printf("remainder of a and b is %d",a%b);
}
    void factorial(){
        int  n,factorial;
        printf("Enter the numbers you want to get the factorial  :");
        scanf("%d ",&n);
        factorial=1;
        for(int i=1;i<=n;i++){
        factorial= n*i;// factorial*=i;
    }
        printf("\nfactorial of %d is  %d",n,factorial);
}

    void square(){
    
        double b;
        printf("Enter the no to get the square :");
        scanf("%lf ",&b);
        double p=pow(b,2);
        printf("square of %lf is  %lf",b,p);
}
    void cube (){
  
        double b;
        printf("Enter the number to get the cube  :");

        scanf("%lf",&b);
        double p=pow(b,3);
        printf("cube  of %lf is %lf",b,p);
  }    
    void power (){
    
        double b;
        double p;
        printf("Enter the base and the  power :");

        scanf("%lf %lf",&b,&p);
        double e=pow(b,p);
        printf("b to the power p  is %lf",e);

}
    void squareroot (){
    
        double b;
    
        printf("Enter the number to get square root  :");

        scanf("%lf",&b);
        double s=sqrt(b);
        printf("root is  %lf",s);
}


    
    

    
    