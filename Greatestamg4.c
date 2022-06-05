#include<stdio.h>
void main()
{
    int a,b,c,d;

        printf("A = ");
        scanf("%d",&a);
        printf("B = ");
        scanf("%d",&b);
        printf("C = ");
        scanf("%d",&c);
        printf("D = ");
        scanf("%d",&d);

    //check if
    if(a==b && c==d)
    {
        printf("A = B & C = D ");
    }
        else if(a==c && b==d)
    {
        printf("A = C & B = D");
    }
            else if(a==d && b==c)
    {
        printf("A = D & B = C");
    }
    //check if all four digits are equal
                else if(a==b && b==c && c==d && d==a)
            {
            printf("A = B = C = D\n");
            }

     //check if 3 numbers are equal
                    else if(a==b && a==c )
            {
            printf("A = B = C\n");
            }

                        else if(a==b && a==d)
                        {
                        printf("A = B = D\n");
                        }


                            else if(b==c && b==d)
                        {
                        printf("B = C = D\n");
                        }

   //check if 2 numbers are equal
                                 else if(a==b)
                        {
                        printf("A = B \n");
                        printf ("A and B both are equal and greatest numbers\n");
                        }
                                    else if(a==c)
                        {
                        printf("A = C\n");
                        }
                                        else if(a==d)
                        {
                        printf("A = D\n");
                        }

                                            else if(b==c)
                        {
                        printf("B = C\n");
                        }

                                                else if(b==d )
                        {
                        printf("B = D\n");
                        }

                                                    else if(c==d)
                        {
                        printf("C = D\n");
                        }

            if(a>b && a>c)
                    {
                    printf("A(%d) is Greatest Among All Four Numbers  \n",a);
                    }
                else if(b>c && b>d)
                    {
                    printf("B(%d) is Greatest Among All Four Numbers  \n",b);
                    }
                    else if(c>d)
                    {
                    printf("C(%d)is Greatest Among All Four Numbers  \n",c);
                    }
                        else if(d>a)
                    {
                    printf("D(%d)is Greatest Among All Four Numbers  \n",d);
                    }

}
