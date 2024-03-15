#include <stdio.h>

main()
{
	int n;
  	char tog[n];
  	
  	printf("\n Please Enter any String: ");
  	scanf("%s",&tog);
  	
  	int i;
  	for (i=0;i<n;i++)
  	{
  	    if(tog[i] >= 65 && tog[i] <= 90) 
              tog[i]+=32; 
                    
        else if(tog[i] >= 97 && tog[i] <= 122)
            tog[i]-=32;	
  	}

  	printf("\n Toggle case string: %s", tog);
}
