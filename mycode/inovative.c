 #include<stdio.h>
  #include<string.h>
 
 void kmp_search(char[] ,char[]);
 void Compute(char[], int ,int[]);
 int main()
 {
      char str[]="abcxabcdabxabcdabcdabcy"; 
      char pat[]="bcdabcy";
      kmp_search(str,pat);
      return 0;
 }
 void kmp_search(char* str, char* pat)
 {
      int M=strlen(str);
      int N=strlen(pat);                                  // -------------------:Pattern search by KMP (Knuth Morris Pratt) Method:------------------------
      int lps[N];
      Compute(pat,N,lps);
      int i=0,j=0;
      while ( i < M ) 
      {
          /* code */
          if(pat[j]==str[i])
          {
              j++;
              i++;
          }
          if (j==N)
          {
              printf("Pattern Found at index %d\n",(i-j));
              j = lps[j-1];
          }
          else if(i<M && pat[j]!=str[i])
          {
              if(j!=0)
                 j= lps[j-1];
              else
                 i=i+1;
          }
      }
 }
 void Compute(char* pat, int N, int* lps)
 {
     int i=1,j=0;
     lps[0]=0;
     while(i<N)
     {
         if(pat[i]==pat[j])
         {
             lps[i]=++j;
             i++;
         }
         else
         {
             if(j!=0)
                j= lps[j-1];
             else
             {
                 lps[i]=0;
                 i++;
             }            
         }
    }
 }