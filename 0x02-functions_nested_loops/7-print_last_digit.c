#include &quot;main.h&quot;
/**
* print_last_digit - prints the last digit of a number
* @n: the int to extract the last digit from
* Return: value of the last digit
*/
int print_last_digit(int n)
{
int a;
if (n &lt; 0)
n = -n;
a = n % 10;
if (a &lt; 0)
a = -a;
_putchar(a + &#39;0&#39;);
return (a);
}
