/**
* _strncat - this concatenates two strings,
* @dest: the destination.
* @src: the source.
* @n: the amount of bytes used from src.
* Return: the pointer to dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int p;
int q;

p = 0;
while (dest[p] != '\0')
{
p++;
}

q = 0;
while (q < n && src[q] != '\0')
{
dest[p] = src[q];
p++;
q++;
}
dest[p] = '\0';

return (dest);
}
