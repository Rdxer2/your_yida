一.改错
1.
#include <stdio.h>

int main()
{
    int a = 10++;
    
    int b = 10.0 % 2;
    return 0;
}

/*———————————————————华丽的分割线—————————————————————————*/

二、天空题

1． 设int x=9,y=8; 表达式x == y + 1的结果是________。
2． 定义int x, y; 执行y =(x = 1, ++x, x + 2);后, y的值是________。
3． 定义int x = 10, y, z; 执行y = z = x; x = y == z; 后， x的结果是________1。
4． 设int a=1,b=2,c,d,e; 执行
c=(-a++)+(++b);
d=(b--)+(++a)-a;
e=(a/(++b))-(a/(--a));
请问a,b,c,d,e的结果是：_______。

5． 设int a=2,b=3,c,d,e,f; 执行
c=(a++>= --b);
d=(a==++b);
e=(a--!=b);
f=(++a>b--);
请问a,b,c,d,e,f的结果是：________。

6．以下程序运行后的输出结果是_____________。
#include ”stdio.h”
main()
{
    int x=10, y=20, t=0;
    
    if (x==y) t=x; x=y; y=t;
    
    printf("%d,%d\n",x,y);
}

7．执行以下语句后，x、y和z 的值分别为_____________。
int x,y,z;
x=y=z=0;
++x || ++y && ++z;
printf("%d,%d,%d",x,y,z);

8． 已有定义：int x=3, y=4, z=5; 则表达式!(x+y)+z-1 && y+z/2的值是__。

9． 设a=5,b=6,c=7,d=8,m=2,n=2, 则执行(m=a>b) && (n=c>d)后n的值为__。

10． 设x、y和z都是int类型变量，且x=3,y=4,z=5, 则下面的表达式中，值为0的表达式为（   ）。
A．’x’ && ’y’                      B．x<=y
C．x||y+z && y-z                      D．!((x<y)&&!z||1)

11． 以下关于运算符优先顺序的描述中正确的是（     ）。
A．关系运算符<算术运算符<赋值运算符<逻辑与运算符
B．逻辑与运算符<关系运算符<算术运算符<赋值运算符
C．赋值运算符<逻辑与运算符<关系运算符<算术运算符
D．算术运算符<关系运算符<赋值运算符<逻辑与运算符

12． 下列运算符中优先级最高的是（    ）。
A．<           B．&&          C．+            D．!=

13． 能正确表示“当x的取值在[-58,-40]并且[40,58]范围内为真，否则为假”的表达式是（    ）。
A．(x>= -58) && (x<= -40) && (x>=40) && (x<=58)
B．(x>= -58) || (x<= -40) || (x>=40) || (x<=58)
C．(x>= -58) && (x<= -40) || (x>=40) && (x<=58)
D．(x>= -58) | |(x<= -40) && (x>=40) || (x<=58)

14．若希望当x的值为奇数时，表达式的值为“真”，x的值为偶数时，表达式的值为“假”。则以下不能满足要求的表达式是（    ）。
A．x%2==1                             B．!(x%2==0)
C．!(x%2)                              D．x%2

15．已知 x=45, y=’a’, z=0; 则表达式(x>=z && y<’z’ || !y)的值是（    ）。
A．0                                   B．语法错
C．1                                   D．“假”

16．执行以下语句后，y 的值为（    ）。

int x,y,z;

x=y=z=0;

++x || ++y && ++z;

A．0              B．1             C．2             D．不确定值

17．设以下变量均为int类型，则值不等于7的表达式是（    ）。
A．(m=n=6, m+n, m+1)
B．(m=n=6, m+n, n+1)
C．(m=6, m+1, n=6, m+n)
D．(m=6, m+1, n=m, n+1)

18．假设所有变量均为整型，则表达式(x=2, y=5, y++, x+y)的值是（    ）。
A．7           B．8            C．6               D．2

19．设x、y均为float型变量，则不正确的赋值语句是（    ）。
A．++x ;                                     B．x*=y-2;
C．y=(x%3)/10;                               D．x=y=0;

20．若x和y均定义为int 型，z定义为double型，以下不合法的scanf（）函数调用语句为（   ）。
A．scanf（”%d%lx，%le”，&x,&y,&z）;
B．scanf (”%2d*%d%lf ”, &x, &y, &z);
C．scanf(”%x%*d%o”, &x,&y);
D．scanf(”%x%o%6.2f”, &x,&y,&z);

21．有如下程序段：
int  x1, x2;
char  y1, y2;
scanf("%d%c%d%c", &x1, &y1, &x2, &y2);
若要求x1、x2、y1、y2的值分别为10、20、A、B，正确的数据输入是（    ）。（注：└┘代表空格）
A．10A└┘20B                                 B．10└┘A20B
C．10 └┘A└┘20└┘ B                            D．10A20└┘B

22．若变量已正确说明为float类型， 要通过语句scanf("%f %f%f", &a, &b, &c);给a赋予10.0， b赋予22.0， c赋予33.0， 不正确的输入形式为（   ）。
A．10<回车>                                 B．10.0,22.0,33.0<回车>
22<回车>
33
C．10.0<回车>                                D．10   22<回车>
22.0    33.0<回车>                            33<回车>

23．有如下程序，若要求x1、x2、y1、y2的值分别为10、20、A、B，正确的数据输入是（      ）。（注：└┘代表空格）
int  x1, x2;
char  y1, y2;
scanf("%d%d", &x1,&x2);
scanf("%c%c", &y1,&y2);
A．1020AB                                    B．10└┘20└┘ABC
C．10└┘20<回车>                                     D．10└┘20AB
AB

24．有如下程序段，对应正确的数据输入是（     ）。
float x,y;
scanf("%f%f", &x,&y);
printf("a=%f,b=%f", x,y);
A．2.04<回车>                           B．2.04,5.67<回车>
5.67<回车>
C．A=2.04,B=5.67<回车>                  D．2.055.67<回车>



三.编程题
1.在控制台输出 %
2.输入两个数，打印（printf）这两个数的和、差、积、商、以及余数。


