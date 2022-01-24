#include <stdlib.h>
#include "libft.h"

static size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (!dstsize || len_dst >= dstsize)
		return (len_src + dstsize);
	i = 0;
	dstsize -= len_dst;
	while (i < dstsize - 1 && src[i])
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*dest;
	size_t	dstsize;

	if (!s1 || !s2)
		return (NULL);
	dstsize = ft_strlen(s1) + ft_strlen(s2) + 1;
	dest = malloc(sizeof(char) * dstsize);
	if (!dest)
		return (NULL);
	dest[0] = '\0';
	ft_strlcat(dest, s1, dstsize);
	ft_strlcat(dest, s2, dstsize);
	return (dest);
}
