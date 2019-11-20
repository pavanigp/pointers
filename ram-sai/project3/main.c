#include <stdio.h>
#include"pattren.h"
#include"mathfun.h"
#define r 2
#define c 5
int main()
{
    float arr[r][c]={{1.6,2.8,8,-34,10},{5,5,5,5,5}};
    //int i,j;
    int row,col;
    float value;
    /*printf("enter the array elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          scanf("%f",&arr[i][j]);  
        }
    }*/
    printf("enter the row and column numbers:\n");
    scanf("%d %d",&row,&col);
    if(row==0)
    {
    	value=arr[row][col];
	fun(value,col);
    }
    else
    {
	value=arr[row][col];
     	pattren((int)value,col);
    }
    
            
    return 0;
}

/*
ramsai@TSHYD-015:~/Desktop/projects/project3$ make
gcc -c -g -Wall -Werror  -I. main.c
gcc -c -g -Wall -Werror  -I. mathfun.c
gcc -c -g -Wall -Werror  -I. pattren.c
gcc -Wall -Werror  -I. -o prog main.o mathfun.o pattren.o -lm
ramsai@TSHYD-015:~/Desktop/projects/project3$ ./prog
enter the row and column numbers:
0
0
floor(1.600000):1.0 
ramsai@TSHYD-015:~/Desktop/projects/project3$ ./prog
enter the row and column numbers:
0
1
ceil(2.800000):3.0 
ramsai@TSHYD-015:~/Desktop/projects/project3$ ./prog
enter the row and column numbers:
0
2
pow(8 8):16777216
ramsai@TSHYD-015:~/Desktop/projects/project3$ ./prog
enter the row and column numbers:
0 
4
log(10):2.302585 
ramsai@TSHYD-015:~/Desktop/projects/project3$ ./prog
enter the row and column numbers:
1
0
0 1 1 1 1 
2 0 2 2 2 
3 3 0 3 3 
4 4 4 0 4 
5 5 5 5 0 
ramsai@TSHYD-015:~/Desktop/projects/project3$ ./prog
enter the row and column numbers:
1
1
        1 
      2 1 
    3 2 1 
  4 3 2 1 
5 4 3 2 1 
ramsai@TSHYD-015:~/Desktop/projects/project3$ ./prog
enter the row and column numbers:
1
2
1 
2 4 
3 6 9 
4 8 12 16 
5 10 15 20 25 
ramsai@TSHYD-015:~/Desktop/projects/project3$ ./prog
enter the row and column numbers:
1
3
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
ramsai@TSHYD-015:~/Desktop/projects/project3$ ./prog
enter the row and column numbers:
1
4
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
     
ramsai@TSHYD-015:~/Desktop/projects/project3$ 

*/
