//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     int a=s.length();
     int b=x.length();
     
     int i=0,j=0;
     while(i<a and j<b){
         if(x[j]==s[i]){
             i++;
             j++;
         }
         //last character in x
         if(j==b) return i-j;
         if(x[j]!=s[i]){
             i++;
             j=0;
         }
     }
     return -1;
}
