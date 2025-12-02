#Example02-open() system calls<br>

##purpose
bu uygulamanın amacı open sistem çağrısını pekiştirmek amaçlı bir uygulama.bir dosyayının içeriğini başka bir dosyaya ekler ve bir dosyanın içeriğini tamamen kopyalar.<br>

##System Calls / Functions Used<br>
system calls:open(), write(), read<br>

##How İt Works<br>
Program bir dosyadan veri okur.<br>
Bu veriyi iki farklı dosyaya yazar:<br>
-Birine ekleme yapar (mevcut içerik korunur).<br>
-Diğerine tam kopyasını yazar (mevcut içerik silinir).<br>

##how to Compile and Run<br>
gcc main.c -o app<br>
./app<br>
