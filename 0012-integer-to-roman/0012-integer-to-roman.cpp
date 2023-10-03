class Solution {
public:
    string intToRoman(int num) {
        int x = num ;
        string s = "" ;
        while(x>0)
        {
            if(x>=1000)
            {
                x -= 1000 ;
                s.push_back('M');
            }
            else if(x>=900)
            {
                x-=900;
                s+= "CM";
            }
            else if(x>=500)
            {
                x-=500;
                s+= "D";
            }
            else if(x>=400)
            {
                x-=400;
                s += "CD" ;
            }
            else if(x>=100)
            {
                x-=100;
                s+= "C" ;
            }
            else if(x>=90)
            {
                x-=90;
                s += "XC" ;
            }
            else if(x>=50)
            {
                x-=50;
                s+= "L" ;
            }
            else if(x>=40)
            {
                x-=40;
                s+= "XL" ;
            }
            else if(x>=10)
            {
                x-=10;
                s += "X" ;
            }
            else if(x>=9)
            {
                x-=9;
                s+= "IX" ;
            }
            else if(x>=5)
            {
                x-=5;
                s+= "V" ;
            }
            else if(x>=4)
            {
                x-=4;
                s+= "IV" ;
            }
            else if(x>=1)
            {
                x-=1;
                s+= "I" ;
            }
        }
        return s;
    }
};