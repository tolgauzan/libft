/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:58:34 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/16 13:58:34 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void	ft_isalpha_check(void)
{
	printf("#include \"libft.h\" ft_isalpha()\n");
	printf("\'a\' :  %d\n", ft_isalpha('a'));
	printf("\'1\' :  %d\n", ft_isalpha('1'));
	printf("5   :  %d\n", ft_isalpha(5));
	printf("#include <ctype.h> isalpha()\n");
	printf("\'a\' :  %d\n", isalpha('a'));
	printf("\'1\' :  %d\n", isalpha('1'));
	printf("5   :  %d\n\n\n", isalpha(5));
}

void	ft_isdigit_check(void)
{
	printf("#include \"libft.h\" ft_isdigit()\n");
	printf("\'5\' :  %d\n", ft_isdigit('5'));
	printf("\'a\' :  %d\n", ft_isdigit('a'));
	printf("\' \' :  %d\n", ft_isdigit(' '));
	printf("#include <ctype.h> isdigit()\n");
	printf("\'5\' :  %d\n", isdigit('5'));
	printf("\'a\' :  %d\n", isdigit('a'));
	printf("\' \' :  %d\n\n\n", isdigit(' '));
}

void	ft_isalnum_check(void)
{
	printf("#include \"libft.h\" ft_isalnum()\n");
	printf("\'5\' :  %d\n", ft_isalnum('5'));
	printf("\'a\' :  %d\n", ft_isalnum('a'));
	printf("\' \' :  %d\n", ft_isalnum(' '));
	printf("#include <ctype.h> isalnum()\n");
	printf("\'5\' :  %d\n", isalnum('5'));
	printf("\'a\' :  %d\n", isalnum('a'));
	printf("\' \' :  %d\n\n\n", isalnum(' '));
}

void	ft_isascii_check(void)
{
	printf("#include \"libft.h\" ft_isascii()\n");
	printf("\'5\' :  %d\n", ft_isascii('5'));
	printf("\'a\' :  %d\n", ft_isascii('a'));
	printf("128 :  %d\n", ft_isascii(128));
	printf("\'\\0\' :  %d\n", ft_isascii('\0'));
	printf("#include <ctype.h> isascii()\n");
	printf("\'5\' :  %d\n", isascii('5'));
	printf("\'a\' :  %d\n", isascii('a'));
	printf("128 :  %d\n", isascii(128));
	printf("\'\\0\' :  %d\n\n\n", isascii('\0'));
}

void	ft_isprint_check(void)
{
	printf("#include \"libft.h\" ft_isprint()\n");
	printf("\' \' :  %d\n", ft_isprint(' '));
	printf("\'~\' :  %d\n", ft_isprint('~'));
	printf("\'a\' :  %d\n", ft_isprint('a'));
	printf("\'\\0\' :  %d\n", ft_isprint('\0'));
	printf("#include <ctype.h> isprint()\n");
	printf("\' \' :  %d\n", isprint(' '));
	printf("\'~\' :  %d\n", isprint('~'));
	printf("\'a\' :  %d\n", isprint('a'));
	printf("\'\\0\' :  %d\n\n\n", isprint('\0'));
}

void 	ft_toupper_check(void)
{
	printf("#include \"libft.h\" ft_toupper(c)\n");
	printf("%c \n",ft_toupper(122));
	printf("#include <ctype.h> toupper(c)\n");
	printf("%c \n\n\n",toupper('z'));
}

void 	ft_tolower_check(void)
{
	printf("#include \"libft.h\" ft_tolower(c)\n");
	printf("%c \n",ft_tolower(65));
	printf("#include <ctype.h> tolower(c)\n");
	printf("%c \n\n\n",tolower('A'));
}

#include <string.h>
void	ft_strlen_check(void)
{
	char str[] = "tolgauzan";
	size_t result_len;

	printf("#include \"libft.h\" ft_strlen(str);\n");
	result_len = ft_strlen(str);
	printf("ft_strlen : %ld \n",result_len);
	printf("#include <string.h> strlen(str);\n");
	result_len = strlen(str);
	printf("strlen : %ld\n\n\n",result_len);
}

void	ft_memset_check(void)
{
	char myarr[6] = "hello";
	printf("myarr[6] = %s \n", myarr);
	printf("ft_memset(myarr,65,sizeof(myarr)- 1)\n");
	char *pmyarr = (char *)ft_memset(myarr,255,sizeof(myarr) - 1);
	printf("Pointer'a return değeri atananak kullanım pmyarr[6] = %s \n", pmyarr);
	
	printf("myarr[6] = %s \n", myarr);
	int myarr2[5] = {1,2,3,4,5};
	int  *myres_arr2 =(int *) ft_memset(myarr2,12,sizeof(myarr2));
	for (int i = 0; i < 5; i++)
	{
		printf("myres_arr2[%d] = %d\n", i, myres_arr2[i]);
	}
	printf("-------------------------\n");
	char arr[6] = "hello";
	printf("arr[6] = %s \n", arr);
	memset(arr,97,sizeof(arr) - 1);
	printf("memset(arr,65,sizeof(arr)- 1)\n");
	printf("arr[6] = %s \n", arr);
	int arr2[5] = {1,2,3,4,5};
	int  *res_arr2 =(int *) memset(arr2,12,sizeof(arr2));
	for (int i = 0; i < 5; i++)
	{
		printf("res_arr2[%d] = %d\n", i, res_arr2[i]);
	}
	printf("\n\n\n");
}

void	ft_bzero_check(void)
{
	char myarr[6] = "hello";
	printf("myarr[6] = %s \n", myarr);
	printf("ft_bzero(myarr,sizeof(myarr)- 1)\n");
	ft_bzero(myarr,sizeof(myarr) - 1);
	printf("myarr[6] = %s \n", myarr);

	int myarr2[5] = {1,2,3,4,5};
	ft_bzero(myarr2,sizeof(myarr2));
	for (int i = 0; i < 5; i++)
	{
		printf("myarr2[%d] = %d\n", i, myarr2[i]);
	}
	printf("-------------------------\n");
	char arr[6] = "hello";
	printf("arr[6] = %s \n", arr);
	bzero(arr,sizeof(arr) - 1);
	printf("bzero(arr,sizeof(arr)- 1)\n");
	printf("arr[6] = %s \n", arr);
	int arr2[5] = {1,2,3,4,5};
	bzero(arr2,sizeof(arr2));
	for (int i = 0; i < 5; i++)
	{
		printf("arr2[%d] = %d\n", i, arr2[i]);
	}
	printf("\n\n\n");
}

void	ft_memcpy_check(void)
{
	char src1[] ="Tolga Uzan";
	char dest1[20];
	printf("ft_memcpy()\n");
	ft_memcpy(dest1, src1, ft_strlen(src1) + 1);
	printf("dest[] = %s\n", dest1);
	char src2[] ="Tolga Uzan";
	char dest2[20];
	printf("memcpy()\n");
	memcpy(dest2, src2, ft_strlen(src2) + 1);
	printf("dest2[] = %s\n\n\n", dest2);
}

void 	ft_memmove_check(void)
{
	char str[50] = "HelloWorld";
	printf("Orj str %s\n", str);
	ft_memmove(str + 2, str ,ft_strlen(str) + 1);
	printf("ft_memmove result : %s\n\n\n\n", str);
}

void	ft_strlcpy_check(void)
{
	char dest[10];
	char src[] = "tolga";
	int strlen = ft_strlcpy(dest, src, 4);
	printf("return value srclen: %d \n", strlen);
	printf("dest : %s\n\n\n", dest);
}

void	ft_strlcat_check(void)
{
	char dest[20] = "tolga";
	char src[] = "uzan";
	int res = ft_strlcat(dest,src,10);
	printf("return : %d\n dest :%s\n\n\n",res, dest);
}

void	ft_strchr_check(void)
{
	char arr[] = "tolgauzan";
	printf("Arr ilk adresi : %p\n", arr); 
	printf("Null bulunan adresi : %p \n\n\n", ft_strchr(arr,'\0'));
}

void	ft_strrchr_check(void)
{
	char arr[] = "tolgauzan";
	printf("Sonraki nullterminator'u bul %p\n",&arr[9]);
	printf("Sondan ara %p\n\n\n", ft_strrchr(arr, '\0'));
}

void	ft_strncmp_check(void)
{
	char arr1[] = "aaabaa";
	char arr2[] = "aaab";
	printf("ft_strncmp() %d \n", ft_strncmp(arr1,arr2,4));
	printf("strncmp() %d\n\n\n",strncmp(arr1,arr2,4));
}

void	ft_memchr_check(void)
{
	char arr[] = "Tolga Uzan";
	char *result  = (char *)ft_memchr(arr,'a',5);
	if(result != NULL)
		printf("Karakter adresi %p\n", result);
	printf("Manuel erişim : %p\n\n", &arr[4]);
	printf("memchr() : %p\n\n", memchr(arr,'a',5));
}

void	ft_memcmp_check(void)
{
	char arr1[] = "aaaaa";
	char arr2[] = "aaaz";
	printf("ft_memcmp : %d\n",ft_memcmp(arr1,arr2,4));
	printf("memcmp():  %d\n\n\n", memcmp(arr1,arr2,4));
}

void	ft_strnstr_check(void)
{
	char fullstr[]= "tolgauzan hello";
	char substr[]= "uzan";
	char *result = ft_strnstr(fullstr,substr,5);
	printf("Bulunamadı %s \n", ft_strnstr(fullstr,substr,5));
	printf("Bulundu ilk adres %p\n", ft_strnstr(fullstr,substr,9));
	printf("Aranan ilk harfin adresi %p\n", &fullstr[5]);
	printf("Bulundu ilk adres %s\n\n\n", ft_strnstr(fullstr,substr,9));
}

void	ft_strdup_check(void)
{
	char arr[] = "tolga";
	char *dest = ft_strdup(arr);
	if (dest)
		printf("ft_strdup();\n%s \n\n\n", dest);
	free(dest);
}

#include <stdlib.h>

void	ft_atoi_check(void)
{
	printf("#include \"ftlib.h\" ft_atoi(str);\n");
	printf("ft_atoi() : %d \n", ft_atoi("\t\n\v\r\f  -+-2147483647"));
	printf("#include <stdlib.h> atoi(str);\n");
	printf("atoi() : %d \n", atoi("\t\n\v\r  -+-2147483647"));
	printf("#include \"ftlib.h\" ft_atoi(str);\n");
	printf("ft_atoi() : %d \n", ft_atoi("\t\n\v\r\f  -2147483648"));
	printf("#include <stdlib.h> atoi(str);\n");
	printf("atoi() : %d \n", atoi("\t\n\v\r  -2147483648"));
	printf("#include \"ftlib.h\" ft_atoi(str);\n");
	printf("ft_atoi() : %d \n", ft_atoi("\t\n\v\r\f   +2147483647"));
	printf("#include <stdlib.h> atoi(str);\n");
	printf("atoi() : %d \n", atoi("\t\n\v\r\f   +2147483647"));
	printf("#include \"ftlib.h\" ft_atoi(str);\n");
	printf("ft_atoi() : %d \n", ft_atoi("\t\n\v\r\f   +21474836499"));
	printf("#include <stdlib.h> atoi(str);\n");
	printf("atoi() : %d \n\n\n", atoi("\t\n\v\r\f   +21474836499"));
}

void	ft_calloc_check(void)
{
	int *ptr = (int *)ft_calloc(5,sizeof(int));
	if (ptr)
	{
		printf("calloc () Bellek tahsis edildi ve başlatıldı\n");
		for(int i = 0; i < 5; i++)
		{
			printf("%d\n",ptr[i]);
		}
		free(ptr); //Bellek serbest bırakıldı
	}
	printf("\n\n\n");
}
//addition funcs
void	ft_strjoin_check(void)
{
	char arr1[] = "tolga";
	char arr2[] = "uzan";
	char *resultarr = ft_strjoin(arr1,arr2);
	printf("%s", resultarr);
	free(resultarr);
}

void	ft_strtrim_check(void)
{
	printf("%s", ft_strtrim(" , , |tolgauzan | , , ", " ,"));
}

void	ft_strsub_check(void)
{
	char str[] = "tolgauzan";

	char *result = ft_substr(str,1,2);
	printf("%s", result);
	free(result);
}

void	ft_split_check(void)
{
	char **result;
	int i = 0;

	result = ft_split(" tolga uzan tolga uzan ", ' ');
	
	while (result[i] != NULL)
	{
		printf("Kelime %d: %s\n", i + 1, result[i]);
		free(result[i]); // Her kelimeyi serbest bırak
		i++;
	}
	free(result); // Son diziyi serbest bırak
}

void	ft_itoa_check(void)
{
	int num = -2147483648;
    char *result = ft_itoa(num);

    if (result) {
        printf("ft_itoa() %s\n", result);
        free(result);
    } else {
        printf("Bellek ayrılamadı\n");
    }
}
//striteri
void	ft_iter(unsigned int index, char *c)
{
	if (index % 2 == 0)
	{
		*c = ft_toupper(*c);
		//*c = '*';
	}	
}
void	ft_striteri_check(void)
{
	char arr[] = "toLGa UzAnNnNnNnN";
	ft_striteri(arr, ft_iter);
	printf("ft_iteri(); arr[] = %s\n\n\n", arr);
}

//strmapi
char	to_upper(unsigned int index, char c)
{
	return (char)ft_toupper(c);
}
void	ft_strmapi_check(void)
{
	char orjinalstr[] = "ToLGa UzAn";
	char *resultstr;

	resultstr = ft_strmapi(orjinalstr, to_upper);

	if (resultstr)
	{
		printf("strmapi() Result str : %s\n\n\n", resultstr);
		free(resultstr);
	}
	else
		printf("Bellek tahsisis başarısız oldu");
	
}

#include <fcntl.h>    // open ve flag'ler için
#include <sys/stat.h> // mode için
#include <unistd.h>   // write ve close için
void	ft_putchar_fd_check()
{
	
	int fd = open("dosya.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		printf("fd açılmadı");
	}
	ft_putchar_fd('T', fd);
	ft_putchar_fd('\n', fd);

	close(fd);
}

//BONUS 
//yeni liste oluştur
void	ft_lstnew_check()
{
	t_list *name;
	name = ft_lstnew("Tolga Uzan");
	printf("%s", (char *)name->content);

	int value = 42;
	t_list *node = ft_lstnew(&value); //Yeni bir node oluşturdum
	if (node != NULL)
		printf("Node oluşuturuldu. Contentii %d\n", *(int *)node->content);
}

//listede önüne ekle
void	ft_lstadd_front_check()
{
	t_list *head;
	t_list *newnode1;
	t_list *newnode2;
	int val1 = 42;
	int val2 = 84;

	newnode1 = ft_lstnew(&val1); //İlk node' u oluşturdum
	head = newnode1; //head pointer başı gösteriyor

	newnode2 = ft_lstnew(&val2);
	//newnode2 yi head'in öüne ekleyerek listeyi oluşturmaya başlamak
	ft_lstadd_front(&head, newnode2); //2.node listenin başına ekle

	printf("Listenin başı: %d\n", *(int *)head->content);
    printf("İkinci node: %d\n", *(int *)head->next->content);

}

//listenin kaç liste içerdiği(toplam node sayisi)
void	ft_lstsize_check()
{
	t_list *head;
    t_list *node1;
    t_list *node2;
    int value1 = 42;
    int value2 = 84;

    node1 = ft_lstnew(&value1);  // İlk node
    head = node1;                // Head, ilk node'u işaret ediyor

    node2 = ft_lstnew(&value2);  // İkinci node
    ft_lstadd_front(&head, node2);  // İkinci node'u başa ekle

    int size = ft_lstsize(head);  // Listenin boyutunu bul
    printf("Listenin boyutu: %d\n", size);  // 2 yazdırır
}

//Listenin son node(düğümünü bulur) vedöndürür
void	ft_lstlast_check()
{
	t_list *head;
    t_list *node1;
    t_list *node2;
    int value1 = 42;
    int value2 = 84;

    node1 = ft_lstnew(&value1);  // İlk node
    head = node1;                // Head, ilk node'u işaret ediyor

    node2 = ft_lstnew(&value2);  // İkinci node
    ft_lstadd_front(&head, node2);  // İkinci node'u başa ekle

    t_list *last = ft_lstlast(head);  // Listenin son node'unu bul
    printf("Son node'un içeriği: %d\n", *(int *)last->content);  // 42 yazdırır
}

//yeni bir node'u linkedlistin sonuna ekler
void	ft_lstadd_back_check()
{
	t_list *head = NULL;  // Liste başlangıçta boş
    t_list *node1;
    t_list *node2;
    int value1 = 42;
    int value2 = 84;

    // İlk node'u oluştur ve listeye ekle
    node1 = ft_lstnew(&value1);  // İlk node
    ft_lstadd_back(&head, node1);  // İlk node'u başa ekle

    // İkinci node'u oluştur ve listeye ekle
    node2 = ft_lstnew(&value2);  // İkinci node
    ft_lstadd_back(&head, node2);  // İkinci node'u sona ekle

    // Listenin içeriğini yazdır
    t_list *current = head;  // Başlangıç node'unu işaretle
    while (current != NULL)  // Liste sonuna kadar git
    {
        printf("Node içeriği: %d\n", *(int *)current->content);  // Node içeriğini yazdır
        current = current->next;  // Bir sonraki node'a geç
    }
}


//bir node'u silmek için kullanılır
void	del(void *data)
{
	free(data);
}
void	ft_lstdelone_check()
{
	t_list *node = ft_lstnew(malloc(sizeof(int))); // İçeriği için hafıza ayırıyoruz
    if (node == NULL) {
        perror("Hafıza ayıramadık");
        return;  // Burada return 1; olmamalı
    }
    
    *(int *)node->content = 42;  // Node içeriğini ayarla
    node->next = NULL;  // İlk node olduğu için next NULL

    printf("Silinecek node içeriği: %d\n", *(int *)node->content);  // Node içeriğini yazdır

    ft_lstdelone(node, del);  // Node'u sil

    // Node artık geçersiz, bu yüzden içeriğine erişmeye çalışmak bir hata verebilir
}


//LinkedListi komple temizler nodelar ve içerikler
void	ft_lstclear_check() {
    t_list *node1 = ft_lstnew(malloc(sizeof(int))); // İçeriği için hafıza ayırıyoruz
    t_list *node2 = ft_lstnew(malloc(sizeof(int))); // İkinci node
    if (node1 == NULL || node2 == NULL) {
        perror("Hafıza ayıramadık");
        return;
    }
    
    *(int *)node1->content = 42;  // İlk node'un içeriğini ayarla
    *(int *)node2->content = 84;  // İkinci node'un içeriğini ayarla
    node1->next = node2;          // İlk node'u ikinciye bağla
    node2->next = NULL;           // İkinci node son olduğu için next NULL

    printf("Silinecek liste içeriği: %d, %d\n", *(int *)node1->content, *(int *)node2->content);  // Node içeriğini yazdır

    ft_lstclear(&node1, del);  // Listeyi sil

    // Node'lar artık geçersiz, bu yüzden içeriğine erişmeye çalışmak bir hata verebilir
}

// liste üzerinde gezinerek, her node'un içeriğine bir fonksiyon uygulamak için kullanılır
void 	print(void *content) {
    printf("Node içeriği: %d\n", *(int *)content);  // İçeriği yazdır
}
void 	ft_lstiter_check() {
    t_list *node1 = ft_lstnew(malloc(sizeof(int))); // İlk node
    t_list *node2 = ft_lstnew(malloc(sizeof(int))); // İkinci node
    t_list *node3 = ft_lstnew(malloc(sizeof(int))); // Üçüncü node

    if (node1 == NULL || node2 == NULL || node3 == NULL) {
        perror("Hafıza ayıramadık");
        return;
    }

    *(int *)node1->content = 10;  // İlk node'un içeriğini ayarla
    *(int *)node2->content = 20;  // İkinci node'un içeriğini ayarla
    *(int *)node3->content = 30;  // Üçüncü node'un içeriğini ayarla

    node1->next = node2;  // İlk node'u ikinciye bağla
    node2->next = node3;  // İkinci node'u üçüncüye bağla
    node3->next = NULL;   // Üçüncü node son olduğu için next NULL

    ft_lstiter(node1, print);  // Listeyi iterasyona al ve yazdırma fonksiyonunu uygula
}

//bir bağlı listeyi dolaşarak, her node'un içeriğine bir fonksiyon uygulayıp sonuçları 
//yeni bir liste halinde döndürmek için kullanılır. Eğer hafıza tahsisi sırasında bir hata olursa, 
//tüm oluşturulan node'lar serbest bırakılmalıdır.
void *f(void *content)
{
    char *str = strdup((char *)content);  // Yeni bir kopya oluştur
    if (str)
        str[0] -= 32;  // İlk harfi büyük harfe çevir
    return str;  // Değişiklikleri döndür
}

void print_list(t_list *lst)
{
    while (lst)
    {
        printf("Node içeriği: %s\n", (char *)lst->content);
        lst = lst->next;  // Sonraki düğüme geç
    }
}

void ft_lstmap_check()
{
    // Orijinal listeyi oluştur
    t_list *node1 = ft_lstnew(strdup("apple"));
    t_list *node2 = ft_lstnew(strdup("banana"));
    t_list *node3 = ft_lstnew(strdup("cherry"));

    if (!node1 || !node2 || !node3)
    {
        perror("Hafıza ayıramadık.");
        free(node1);
        free(node2);
        free(node3);
        return;  // Burayı döndürün.
    }

    node1->next = node2;  // Node'ları birbirine bağla
    node2->next = node3;

    // Orijinal listeyi yazdır
    printf("Orijinal Liste:\n");
    print_list(node1);

    // ft_lstmap fonksiyonunu test et
    t_list *mapped_list = ft_lstmap(node1, f, del);

    if (mapped_list == NULL)
    {
        printf("ft_lstmap başarısız oldu.\n");
        ft_lstclear(&node1, del);
        return;
    }

    // Haritalanmış listeyi yazdır
    printf("\nHaritalanmış Liste (İlk harf büyük):\n");
    print_list(mapped_list);

    // Hafızayı temizle
    ft_lstclear(&node1, del);      // Orijinal listeyi temizle
    ft_lstclear(&mapped_list, del);  // Haritalanmış listeyi temizle
}

int main(void)
{
    ft_lstmap_check();
    return 0;
}