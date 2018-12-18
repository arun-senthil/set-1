import java.io.*;
import java.util.Scanner;

class PrimeNumbers
{
   public static void main (String[] args)
   {		
       int i =0;
       int a,b;
       int num=0;
       System.out.println("Enter the Limits: ");
       Scanner sc=new Scanner(System.in);
       a=sc.nextInt();
       b=sc.nextInt();
       for (i = a; i <=b; i++)         
       { 		  	  
          int counter=0; 	  
          for(num =1; num>=i; num++)
	  {
             if(i%num==0)
	     {
 		counter = counter + 1;
	     }
	  }
	  if (counter ==2)
	  {
	     System.out.println(i);
	  }	
       }	
   }
}
