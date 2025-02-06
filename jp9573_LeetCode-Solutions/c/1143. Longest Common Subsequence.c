
int longestCommonSubsequence(char* ar1,char* ar2)
{
    int l1,l2,i,j,check=0;
    
    l1=strlen(ar1);
    l2=strlen(ar2);

    //CREATING DP TABLE
    int **arr=(int **)malloc((l1+1)*sizeof(int *));
    for(i=0;i<=l1;i++)
        arr[i]=(int *)malloc((l2+1)*sizeof(int *));

    //PREPROCESSING DP TABLE
    for(i=0;i<=l1;i++)
        arr[i][0]=0;
    for(i=0;i<=l2;i++)
        arr[0][i]=0;

    //DP ITERATION STARTS
    for(i=1;i<=l1;i++)
    {
        for(j=1;j<=l2;j++)
        {
            if(ar1[i-1]==ar2[j-1])
                arr[i][j]=arr[i-1][j-1]+1;
            else
            {
                if(arr[i-1][j]>arr[i][j-1])
                    arr[i][j]=arr[i-1][j];
                else
                    arr[i][j]=arr[i][j-1];
            }
        }
    }

    
    i=l1;
    j=l2;
    
    return arr[l1][l2];
}

