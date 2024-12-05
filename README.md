<div align="center">
  <!-- Logo -->
  <a href="https://github.com/tolgauzan/libft">
  <img src="docs/libft.png" alt="Logo" width="150" height="150">
  </a>
</div>

# Libft

Kullanışlı standart fonksiyonlara sahip temel bir C kütüphanesi.

Bu projenin amacı bir C kütüphanesi yazmaktır. Yazacağınız diğer programlarda işinize yarayacak yaygın kullanımlı fonksiyonları içerecektir.
C programlama, kullanışlı standart fonksiyonlara erişiminiz olmadığında çok sıkıcı olabilir.Bu proje, bu fonksiyonların çalışma mantığını anlamak, onları implement edebilmek ve nasıl kullanılması gerekteğini öğrenmekle ilgilidir.

Not : 125/100 \
Pdf v.16.1 : [`TR`](docs/libft_v16.1.tr.pdf) [`EN`](docs/libft_v16.1.en.pdf) \
42 Norm v.4 : [`EN`](docs/norm_v4.en.pdf)

## İçerik

#### Bölüm-1 (Libc Fonksiyonları)
#### Standart C Kütüphanesi Fonksiyonları
### `<ctype.h>` Kütüphanesi Fonksiyonları

- [`ft_isalpha`](ft_isalpha.c)	- Alfabetik bir karakter olup olmadığını kontrol eder
- [`ft_isdigit`](ft_isdigit.c)	- Bir rakam (0 ila 9) olup olmadığını kontrol eder.
- [`ft_isalnum`](ft_isalnum.c)	- Alfanümerik bir karakter olup olmadığını kontrol eder
- [`ft_isascii`](ft_isascii.c)	- Karakterin ASCII karakter kümesine uyup uymadığını kontrol eder
- [`ft_isprint`](ft_isprint.c)	- Yazdırılabilir karakter olup olmadığını kontrol eder
- [`ft_toupper`](ft_toupper.c)	- Karakteri büyük harfe dönüştürür
- [`ft_tolower`](ft_tolower.c)	- Karakteri küçük harfe dönüştürür

### `<string.h>` Kütüphanesi Fonksiyonları

- [`ft_memset`](ft_memset.c)	- Belleği sabit verilen bir bayt ile doldurur
- [`ft_strlen`](ft_strlen.c)	- Bir string'in uzunluğunu hesaplar
- [`ft_bzero`](ft_bzero.c)	- Belleği sıfır ile doldurur
- [`ft_memcpy`](ft_memcpy.c)	- Bellek alanını kopyalar
- [`ft_memmove`](ft_memmove.c)	- Bellek alanını örtüşme olmadan(overlapping) kopyalar
- [`ft_strlcpy`](ft_strlcpy.c)	- String'i belirli bir boyuta kopyalar
- [`ft_strlcat`](ft_strlcat.c)	- String'i belirli bir boyutta birleştirir
- [`ft_strchr`](ft_strchr.c)	- Karakteri string içinde bulur
- [`ft_strrchr`](ft_strrchr.c)	- Karakteri string içinde tersten bulur
- [`ft_strncmp`](ft_strncmp.c)	- İki string karşılaştırır
- [`ft_memchr`](ft_memchr.c)	- Bir karakter için belleği tarar
- [`ft_memcmp`](ft_memcmp.c)	- Bellek alanlarını karşılaştırır
- [`ft_strnstr`](ft_strnstr.c)	- Bir string içindeki bir alt dizeyi bulur
- [`ft_strdup`](ft_strdup.c)	- Parametre olarak aktarılan string için bir kopya oluşturur

### `<stdlib.h>` Kütüphanesi Fonksiyonları
- [`ft_atoi`](ft_atoi.c)		- Bir dizeyi tamsayıya(int) dönüştürür
- [`ft_calloc`](ft_calloc.c)	- Bellek ayırır ve bayt değerlerini 0 olarak ayarlar

#### Bölüm-2 (Ek Fonksiyonlar)
#### Standart Olmayan Fonksiyonlar
- [`ft_substr`](ft_substr.c)	- Bir string içinden bir alt dize döndürür
- [`ft_strjoin`](ft_strjoin.c)	- İki string'i birleştirir
- [`ft_strtrim`](ft_strtrim.c)	- String başını ve sonunu belirli karakter kümesiyle kırpar
- [`ft_split`](ft_split.c)		- Parametre olarak bir karakter kullanarak bir dizeyi böler
- [`ft_itoa`](ft_itoa.c)		- Bir sayıyı(int) dizeye dönüştürür
- [`ft_strmapi`](ft_strmapi.c)	- Bir string her karakterine bir fonksiyon uygular, yeni dizeyi döndürür
- [`ft_striteri`](ft_striteri.c)	- Bir string her karakterine bir fonksiyonu uygular
- [`ft_putchar_fd`](ft_putchar_fd.c)	- Bir dosya tanımlayıcısına bir karakter çıktısı verir
- [`ft_putstr_fd`](ft_putstr_fd.c)	- Bir dosya tanımlayıcısına bir string çıktısı verir
- [`ft_putendl_fd`](ft_putendl_fd.c)	- Bir dosya tanımlayıcısına bir string çıktısı verir ve ardından yeni bir satır ekler
- [`ft_putnbr_fd`](ft_putnbr_fd.c)	- Bir dosya tanımlayıcısına bir sayı çıktısı verir

#### Bölüm-3 (Bonus Bölüm)
#### Linked List Fonksiyonları

- [`ft_lstnew`](ft_lstnew_bonus.c)	- Yeni bir liste öğesi oluşturur
- [`ft_lstadd_front`](ft_lstadd_front_bonus.c)	- Listenin başına bir öğe ekler
- [`ft_lstsize`](ft_lstsize_bonus.c)	- Bir listedeki öğe sayısını sayar
- [`ft_lstlast`](ft_lstlast_bonus.c)	- Bir listenin son öğesini döndürür
- [`ft_lstadd_back`](ft_lstadd_back_bonus.c)	- Listenin sonuna bir öğe ekler
- [`ft_lstclear`](ft_lstclear_bonus.c)	- Listeyi siler ve listeyi serbest bırakır
- [`ft_lstiter`](ft_lstiter_bonus.c)	- listenin her bir elemanına bir fonksiyon uygular
- [`ft_lstmap`](ft_lstmap_bonus.c)	- Bir listenin her bir öğesine bir fonksiyon uygular ve uygulanmış işlemler sonucunda oluşan yeni bir liste döndürür

## Kullanım

#### Makefile Kurallar (Targets)
* `make`veya `make all` - libft.a kütüphanesini bonus fonksiyonlar olmadan derleyin
* `make bonus` - libft.a kütüphanesini bonus fonksiyonlarla derleyin
* `make clean` - Tüm nesne dosyalarını .o temizleyin
* `make fclean` - Tüm nesne dosyalarını .o ve libft.a kütüphanesini temizleyin
* `make re` - Tüm nesne dosyalarını .o ve libft.a kütüphanesini temizleyin ve kütüphaneyi bonus olmadan yeniden derleyin

#### Kütüphaneyi kodunuzda kullanın
libft.a kütüphanesini derledikten sonra, başlığı kodunuza dahil edin :
```c
#include "libft.h"
```
Kütüphaneyi `main.c` dahil ettikten sonra kullanarak derleyin :
```bash
[ gcc | clang | cc ] main.c -I path/to/libft.h -L path/to/libft.a -lft
```
Alternatif olarak, eğer `main.c` dosyanız bu deponun kök `/` dizininde bulunuyorsa :
```bash
[ gcc | clang | cc ] main.c libft.a
```

## Test Uygulamaları

Bunlar, tamamlayıcı testleri çalıştırmak için üçüncü taraf test edicilerdir, bunları kendi sorumluluğunuzda kullanın.

* Tripouille [libftTester](https://github.com/Tripouille/libftTester)
* alelievr [libft-unit-test](https://github.com/alelievr/libft-unit-test)
* 0x050f [libft-war-machine](https://github.com/0x050f/libft-war-machine)
* xicodomingues [francinette](https://github.com/xicodomingues/francinette)
