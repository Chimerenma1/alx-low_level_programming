#include &quot;main.h&quot;
/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
* followed by a new line
*/
void print_alphabet_x10(void)
{
char ch;
int i;
i = 0;
while (i &lt; 10)
{
ch = &#39;a&#39;;
while (ch &lt;= &#39;z&#39;)
{
_putchar(ch);
ch++;
}
_putchar(&#39;\n&#39;);
i++;
}
}
