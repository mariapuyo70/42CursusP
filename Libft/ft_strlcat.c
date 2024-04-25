#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t final_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	final_len = dst_len + src_len;
/*	if (final_len <= dstsize)
	{
		ft_memcpy(dst, src, dstsize - dst_len -1);
		dst[final_len - 1] = '\0';
		return (final_len);
	}
	else
	{
		ft_memcpy(dst, src, src_len + 1);
		return (final_len);
	}
*/
	if (dst_len >= dstsize)
		return (src_len + dstsize);
	ft_memcpy(dst + dst_len, src, dstsize - dst_len -1);
	dst[dstsize - 1] = '\0';
	return (final_len);
}
