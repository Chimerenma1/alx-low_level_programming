#include &quot;main.h&quot;
/**
* _isalpha - checks for alphabetic character
* @c: the character to be checked
* Return: 1 if c is a letter, 0 otherwise
*/
int _isalpha(int c)
{
return ((c &gt;= &#39;a&#39; &amp;&amp; c &lt;= &#39;z&#39;) || (c &gt;= &#39;A&#39; &amp;&amp; c &lt;= &#39;Z&#39;));
}
