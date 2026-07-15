#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer to the string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	/* الخطوة الأولى: حساب طول النص للوصول إلى نهايته */
	while (s[len] != '\0')
	{
		len++;
	}

	/* نرجع خطوة واحدة للخلف لنتجاهل الحرف الفراغي '\0' */
	len--;

	/* الخطوة الثانية: الطباعة بالعكس حتى نصل إلى أول حرف */
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}

	/* طباعة سطر جديد في النهاية */
	_putchar('\n');
}
