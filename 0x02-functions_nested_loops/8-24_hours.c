#include &quot;main.h&quot;

/**
* jack_bauer - prints every minute of the day of Jack Bauer
* starting from 00:00 to 23:59
*/
void jack_bauer(void)
{
int i, j;
i = 0;
while (i &lt; 24)
{
j = 0;
while (j &lt; 60)
{
_putchar((i / 10) + &#39;0&#39;);
_putchar((i % 10) + &#39;0&#39;);
_putchar(&#39;:&#39;);
_putchar((j / 10) + &#39;0&#39;);
_putchar((j % 10) + &#39;0&#39;);
_putchar(&#39;\n&#39;);
j++;
}
i++;
}
}
