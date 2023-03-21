#include &quot;main.h&quot;
/**
* _islower - check if char is lowercase
* @c: is the char to be checked
* Return: 1 if char is lowercase, otherwise 0.
*/
int _islower(int c)
{
if (c &gt;= &#39;a&#39; &amp;&amp; c &lt;= &#39;z&#39;)
return (1);
else
return (0);

}
