#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);
using namespace std;

string alpha[40][9];
void loop(int end)
{
	for(int i=0;i<=end;i++)
	{
		
	}
	
}
void funcA()
{
	alpha[0][0]="         *          ";
	alpha[0][1]="        * *         ";
	alpha[0][2]="       *   *        ";
	alpha[0][3]="      *     *       ";
	alpha[0][4]="     * * * * *      ";
	alpha[0][5]="    *         *     ";
	alpha[0][6]="   *           *    ";
	alpha[0][7]="  *             *   ";
	alpha[0][8]=" *               *  ";
}
void funcB()
{
	alpha[1][0]="* * * * * * *     ";
	alpha[1][1]="*             *   ";
	alpha[1][2]="*              *  ";
	alpha[1][3]="*              *  ";
	alpha[1][4]="* * * * * * * *   ";
	alpha[1][5]="*              *  ";
	alpha[1][6]="*              *  ";
	alpha[1][7]="*             *   ";
	alpha[1][8]="* * * * * * *     ";
}
void funcP()
{
	alpha[15][0]="* * * * * * *     ";
	alpha[15][1]="*             *   ";
	alpha[15][2]="*              *  ";
	alpha[15][3]="*             *   ";
	alpha[15][4]="* * * * * * *     ";
	alpha[15][5]="*                 ";
	alpha[15][6]="*                 ";
	alpha[15][7]="*                 ";
	alpha[15][8]="*                 ";
}
void funcY()
{
	alpha[24][0]="*                 *  ";
	alpha[24][1]="  *             *    ";
	alpha[24][2]="    *         *      ";
	alpha[24][3]="      *     *        ";
	alpha[24][4]="        * *          ";
	alpha[24][5]="         *           ";
	alpha[24][6]="         *           ";
	alpha[24][7]="         *           ";
	alpha[24][8]="         *           ";
}
void funcN()
{
	alpha[13][0]="*               * ";
	alpha[13][1]="* *             * ";
	alpha[13][2]="*   *           * ";
	alpha[13][3]="*     *         * ";
	alpha[13][4]="*       *       * ";
	alpha[13][5]="*         *     * ";
	alpha[13][6]="*           *   * ";
	alpha[13][7]="*             * * ";
	alpha[13][8]="*               * ";
}
void funcH()
{
	alpha[7][0]="*             *  ";
	alpha[7][1]="*             *  ";
	alpha[7][2]="*             *  ";
	alpha[7][3]="*             *  ";
	alpha[7][4]="* * * * * * * *  ";
	alpha[7][5]="*             *  ";
	alpha[7][6]="*             *  ";
	alpha[7][7]="*             *  ";
	alpha[7][8]="*             *  ";
}
void funcE()
{
	alpha[4][0]="* * * * * * * *  ";
	alpha[4][1]="*                ";
	alpha[4][2]="*                ";
	alpha[4][3]="*                ";
	alpha[4][4]="* * * * * * * *  ";
	alpha[4][5]="*                ";
	alpha[4][6]="*                ";
	alpha[4][7]="*                ";
	alpha[4][8]="* * * * * * * *  ";
}
void funcW()
{
	alpha[22][0]="*               *  ";
	alpha[22][1]="*               *  ";
	alpha[22][2]="*               *  ";
	alpha[22][3]="*               *  ";
	alpha[22][4]="*       *       *  ";
	alpha[22][5]="*     *   *     *  ";
	alpha[22][6]="*   *       *   *  ";
	alpha[22][7]="* *           * *  ";
	alpha[22][8]="*               *  ";
}
void funcR()
{
	alpha[17][0]="* * * * * * *     ";
	alpha[17][1]="*             *   ";
	alpha[17][2]="*              *  ";
	alpha[17][3]="*             *   ";
	alpha[17][4]="* * * * * * *     ";
	alpha[17][5]="*           *     ";
	alpha[17][6]="*            *    ";
	alpha[17][7]="*             *   ";
	alpha[17][8]="*              *  ";
}
void funcT()
{
	alpha[19][0]="* * * * * * *   ";
	alpha[19][1]="      *         ";
	alpha[19][2]="      *         ";
	alpha[19][3]="      *         ";
	alpha[19][4]="      *         ";
	alpha[19][5]="      *         ";
	alpha[19][6]="      *         ";
	alpha[19][7]="      *         ";
	alpha[19][8]="      *         ";
}
void funcD()
{
	alpha[3][0]="* * * * *       ";
	alpha[3][1]="*         *     ";
	alpha[3][2]="*           *   ";
	alpha[3][3]="*            *  ";
	alpha[3][4]="*            *  ";
	alpha[3][5]="*            *  ";
	alpha[3][6]="*           *   ";
	alpha[3][7]="*         *     ";
	alpha[3][8]="* * * * *       ";
}
void funcI()
{
	alpha[8][0]="* * * * *  ";
	alpha[8][1]="    *      ";
	alpha[8][2]="    *      ";
	alpha[8][3]="    *      ";
	alpha[8][4]="    *      ";
	alpha[8][5]="    *      ";
	alpha[8][6]="    *      ";
	alpha[8][7]="    *      ";
	alpha[8][8]="* * * * *  ";
}
void funcC()
{
	alpha[2][0]="* * * * * * *   ";
	alpha[2][1]="*           *   ";
	alpha[2][2]="*           *   ";
	alpha[2][3]="*               ";
	alpha[2][4]="*               ";
	alpha[2][5]="*               ";
	alpha[2][6]="*           *   ";
	alpha[2][7]="*           *   ";
	alpha[2][8]="* * * * * * *   ";
}
void funcO()
{
	alpha[14][0]="  * * * * * *    ";
	alpha[14][1]=" *           *   ";
	alpha[14][2]="*             *  ";
	alpha[14][3]="*             *  ";
	alpha[14][4]="*             *  ";
	alpha[14][5]="*             *  ";
	alpha[14][6]="*             *  ";
	alpha[14][7]=" *           *   ";
	alpha[14][8]="  * * * * * *    ";
}
void funcS()
{
	alpha[18][0]="* * * * * * * *  ";
	alpha[18][1]="*                ";
	alpha[18][2]="*                ";
	alpha[18][3]="*                ";
	alpha[18][4]="* * * * * * * *  ";
	alpha[18][5]="              *  ";
	alpha[18][6]="              *  ";
	alpha[18][7]="              *  ";
	alpha[18][8]="* * * * * * * *  ";
}
void funcG()
{
	alpha[6][0]="* * * * * * * * *  ";
	alpha[6][1]="*                  ";
	alpha[6][2]="*                  ";
	alpha[6][3]="*                  ";
	alpha[6][4]="*       * * * * *  ";
	alpha[6][5]="*       *       *  ";
	alpha[6][6]="*       *       *  ";
	alpha[6][7]="*       *       *  ";
	alpha[6][8]="* * * * *       *  ";
}
void funcV()
{
	alpha[21][0]="*               *  ";
	alpha[21][1]=" *             *   ";
	alpha[21][2]="  *           *    ";
	alpha[21][3]="   *         *     ";
	alpha[21][4]="    *       *      ";
	alpha[21][5]="     *     *       ";
	alpha[21][6]="      *   *        ";
	alpha[21][7]="       * *         ";
	alpha[21][8]="        *          ";
}
void funcL()
{
	alpha[11][0]="*                ";
	alpha[11][1]="*                ";
	alpha[11][2]="*                ";
	alpha[11][3]="*                ";
	alpha[11][4]="*                ";
	alpha[11][5]="*                ";
	alpha[11][6]="*                ";
	alpha[11][7]="*                ";
	alpha[11][8]="* * * * * * * *  ";
}
void funcU()
{
	alpha[20][0]="*             *  ";
	alpha[20][1]="*             *  ";
	alpha[20][2]="*             *  ";
	alpha[20][3]="*             *  ";
	alpha[20][4]="*             *  ";
	alpha[20][5]="*             *  ";
	alpha[20][6]="*             *  ";
	alpha[20][7]=" *           *   ";
	alpha[20][8]="  * * * * * *    ";
}
void func2()
{
	alpha[29][0]="# # # # # # # #   ";
	alpha[29][1]="              #   ";
	alpha[29][2]="              #   ";
	alpha[29][3]="              #   ";
	alpha[29][4]="# # # # # # # #   ";
	alpha[29][5]="#                 ";
	alpha[29][6]="#                 ";
	alpha[29][7]="#                 ";
	alpha[29][8]="# # # # # # # #   ";
}
void func0()
{
	alpha[27][0]="# # # # # # # #   ";
	alpha[27][1]="#             #   ";
	alpha[27][2]="#             #   ";
	alpha[27][3]="#             #   ";
	alpha[27][4]="#             #   ";
	alpha[27][5]="#             #   ";
	alpha[27][6]="#             #   ";
	alpha[27][7]="#             #   ";
	alpha[27][8]="# # # # # # # #   ";
}
void func3()
{
	alpha[30][0]="# # # # # # # #   ";
	alpha[30][1]="              #   ";
	alpha[30][2]="              #   ";
	alpha[30][3]="              #   ";
	alpha[30][4]="# # # # # # # #   ";
	alpha[30][5]="              #   ";
	alpha[30][6]="              #   ";
	alpha[30][7]="              #   ";
	alpha[30][8]="# # # # # # # #   ";
}
void func1()
{
	alpha[28][0]="        #        ";
	alpha[28][1]="     #  #        ";
	alpha[28][2]="  #     #        ";
	alpha[28][3]="        #        ";
	alpha[28][4]="        #        ";
	alpha[28][5]="        #        ";
	alpha[28][6]="        #        ";
	alpha[28][7]="        #        ";
	alpha[28][8]="  # # # # # # #  ";
}
void hypen()
{
	alpha[37][0]="                 ";
	alpha[37][1]="                 ";
	alpha[37][2]="                 ";
	alpha[37][3]="                 ";
	alpha[37][4]="* * * * * * * *  ";
	alpha[37][5]="                 ";
	alpha[37][6]="                 ";
	alpha[37][7]="                 ";
	alpha[37][8]="                 ";
}
void plusP()
{
	alpha[38][0]="                ";
	alpha[38][1]="      *         ";
	alpha[38][2]="      *         ";
	alpha[38][3]="      *         ";
	alpha[38][4]="* * * * * * *   ";
	alpha[38][5]="      *         ";
	alpha[38][6]="      *         ";
	alpha[38][7]="      *         ";
	alpha[38][8]="                ";
}
void space()
{
	alpha[26][0]="              ";
	alpha[26][1]="              ";
	alpha[26][2]="              ";
	alpha[26][3]="              ";
	alpha[26][4]="              ";
	alpha[26][5]="              ";
	alpha[26][6]="              ";
	alpha[26][7]="              ";
	alpha[26][8]="              ";
}
void funcEM()
{
	alpha[39][0]="# # # # # # # # #   ";
	alpha[39][1]="#               #   ";
	alpha[39][2]="#   $       $   #   ";
	alpha[39][3]="#               #   ";
	alpha[39][4]="#               #   ";
	alpha[39][5]="#   *       *   #   ";
	alpha[39][6]="#     * * *     #   ";
	alpha[39][7]="#               #   ";
	alpha[39][8]="# # # # # # # # #   ";
}
void wish(string input,int end=10e7,int end1=10e5,bool flag=false)
{
	cout<<'\n';
	cout<<'\n';
	for(int i=0;i<9;i++)
	{
        if(!flag)
        {
		((i%3==0) ? system("Color C") : ((i%3==1) ? system("Color A") : system("Color 9") ));
	    } 
		for(int j=0;j<input.size();j++)
		{
			int ch;
			if(input[j]>='A' && input[j]<='Z')
			{
				ch=input[j]-'A';
			}
			else if(input[j]==' ')
			{
				ch=26;
			}
			else if(input[j]>='0' & input[j]<='9')
			{
				ch=27+int(input[j]-'0');
			}
			else if(input[j]=='-')
			{
				ch=37;
			}
			else if(input[j]=='+')
			{
				ch=38;
			}
			else
			{
				ch=39;
			}
			for(char it:alpha[ch][i])
			{
				cout<<it;
				loop(end1);
			}
		}
		cout<<"\n";
	}
	cout<<'\n';
	loop(end);
}
int main()
{
	funcA();
	funcB();
	funcP();
	funcY();
	funcN();
	funcH();
	funcE();
	funcW();
	funcR();
	funcC();
	funcD();
	funcG();
	funcI();
	funcL();
	funcO();
	funcS();
	funcT();
	funcV();
	funcU();
	func2();
	func1();
	func0();
	func3();
	space();
	hypen();
	plusP();
	funcEM();
	system("CLS");
	for(int i=3;i>=1;i--)
	{
		((i%3==0) ? system("Color C") : ((i%3==1) ? system("Color A") : system("Color E") ));
		wish("       "+to_string(i),10e2,5*10e4,1);
		system("CLS");
	}
	string input[8];
	input[0]="    WISHING";
	input[1]="    YOU";
	input[2]="    ALL";
	input[3]="    A VERY";
	input[4]="    HAPPY";
	input[5]="    NEW";
	input[6]="    YEAR";
	input[7]="    2023 $";
	for(int i=0;i<4;i++)
	{   
	    if(i!=3)
	    {
	    ((i%3==0) ? system("Color 9") : ((i%3==1) ? system("Color A") : system("Color B") ));
	    }
	    else
	    {
	    	system("Color E");
		}
		wish(input[i],3*10e4,5*10e4,1);
		
	}
	system("CLS");
	
   for(int i=4;i<8;i++)
   {
	    system("Color 0A");
		wish(input[i],7*10e4,7*10e4);
		//system("CLS");
   }
//wish("CODED IN C++");
    int i=0;
	while(i<=6)
	{
	
	    system("Color 4");
		loop(10e5);
		system("Color 3");
		loop(10e5);
		system("Color 1");
		loop(10e5);
		system("Color C");
		loop(10e5);
		system("Color A");
		loop(10e5);
		system("Color 9");
		loop(10e5);
		system("Color D");
		loop(10e5);
		system("Color E");
		loop(10e5);
		i++;
	}
	system("CLS");
	system("Color 7");
	wish("CODED IN C++",10e5,10e5,1);
	system("CLS");
	wish("BY - ",10e5,10e5,1);
	system("Color 2");
	wish("   SIDHARTH",10e5,10e5,1);
	wish("   PARTH",10e5,10e5,1);
	wish("   SARATHI",10e5,10e5,1);
	loop(2*10e8);
	return 0;
}
			
		             
