#include &lt;stdio.h&gt;
#include &quot;main.h&quot;

/**
* main - prints all arguments it receives
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{

int i;

for (i = 0; i &lt; argc; i++)
{
printf(&quot;%s\n&quot;, argv[i]);
}

return (0);
}
