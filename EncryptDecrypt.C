#include<stdio.h>

//This Application demonstrate the concept of Encryption and Decription 
//by changing the ASCII value of each letter in string.
int main()
{
    char str[100];
    int iCnt=0;
    int Choice=0;
    int whLoop=0;
    
    while (whLoop==0)
    {
        printf("Enter 1 To Encrypt Your message.\n");
        printf("Enter 2 To Decrypt Your message.\n");
        printf("Enter 3 To Exit.\n");
        
        scanf("%d",&Choice);

        switch (Choice)
        {
            case 1:       //Encryption Logic
                printf("Enter the Message without Spaces:\n");
                scanf("%s",&str);

                for(iCnt=0; iCnt<100 && str[iCnt] != '\0';iCnt++ )
                {
                    str[iCnt] = str[iCnt] + 3;
                }

                printf("\n Encrypted msg : %s\n",str);        
            
            break;
            
            case 2:        //Decryption Logic
                printf("Enter the Encryped Code:\n");
                scanf("%s",&str);
        
                for(iCnt=0; iCnt<100 && str[iCnt] != '\0';iCnt++ )
                {
                    str[iCnt] = str[iCnt] - 3;
                }

                printf("\n Decrypted msg : %s\n",str);
            break;
    
            case 3:
                whLoop++;   //For Breaking the while loop.
    
            break;    
        }       
    }
    return 0;
}