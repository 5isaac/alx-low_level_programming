#include <stdio.h>
#include <unistd.h>

/** main - prints exactly "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19"
 *   followed by a newline,tovthe standard error.
 *   Return: Always 0 (success)
 */
int main(void)
{
write(2, "end that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
