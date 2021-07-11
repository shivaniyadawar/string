#include<math.h>
#include"calc.h"
int compute(char* str){
    if(str[1]=='+')
    {
        return(str[0]-48) + (str[2]-48);
    }
    else if(str[1]=='-')
    {
         return(str[0]-48) - (str[2]-48);
    }
    else if(str[1]=='*')
    {
         return(str[0]-48) * (str[2]-48);
    }
    else{
        if(str[2]=='0')
        return 0;
        else {
            int n1 = str[0];
            int n2 = str[2];
            n1 = n1 - 48;
            n2 = n2 - 48;
            float val;
            val = (float)n1 / n2;
            double res = ceil(val);
            return res;

        }
    }
}