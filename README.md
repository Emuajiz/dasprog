# dasprog

## Praktikum 1

1. Coklat untuk Bebek

Batas Waktu 	1 detik
Batas Memori 	32 MB
Oleh 	Reinhard Dennis, TOKI 2009, modified by Muhammad Adinata, TOKI 2009

Pak Dengklek memiliki banyak sekali bebek di kandangnya. Bebek-bebek tersebut diberi nomor mulai dari 1.

Karena hari Valentine sebentar lagi akan tiba, Pak Dengklek berencana untuk menghadiahkan coklat untuk bebek-bebeknya. Uniknya, Pak Dengklek ingin agar bebek-bebeknya tersebut menerima jumlah coklat sesuai aturan berikut: bebek pertama mendapat 1 coklat, bebek kedua mendapat 2 coklat, bebek ketiga mendapat 3 coklat, dan seterusnya sampai Pak Dengklek tidak dapat memberi coklatnya lagi karena kurang atau habis.

Sayangnya, karena keterbatasan keuangan bulan ini, Pak Dengklek hanya mampu membeli X (0 <= X <= 1018) buah coklat. Tentukan nomor bebek pertama yang tidak mendapat coklat.
Format Masukan

Baris pertama berisi sebuah bilangan bulat X.
Format Keluaran

Sebuah baris yang berisi jawaban yang dimaksud.
Contoh Masukan

14

Contoh Keluaran

5

Penjelasan

Bebek nomor 1 - 4 akan mendapat 1+2+3+4 = 10 coklat, sehingga tersisa 4 coklat. Bebek nomor 5 tidak mendapat coklat karena sisa coklat kurang.


2. Warisan

Time limit 	1 detik
Memory limit 	16 MB
Pak Dengklek baru saja mendapatkan warisan dari salah satu leluhurnya. Warisan tersebut adalah sepotong tanah berbentuk segitiga. Oleh karena bentuknya yang aneh tersebut, Pak Dengklek membutuhkan bantuan Anda untuk menghitung luasnya.

Terlebih lagi, pada potongan tanah yang ia dapatkan, terdapat banyak pohon-pohon yang sudah tidak elok lagi dipandang. Pohon-pohon tersebut hendak Pak Dengklek tebang. Ongkos menebang satu pohon adalah 1 dolar. Bantu juga Pak Dengklek dalam menghitung berapa uang yang perlu ia keluarkan untuk menebang semua pohon tersebut. Pohon yang ia tebang tentu adalah pohon yang ada di dalam area tanah miliknya, yakni yang terletak di dalam atau tepat di garis segitiga. 
Format Masukan

Tiga baris pertama berisi koordinat tiga titik sudut dari tanah Pak Dengklek. Baris berikutnya berisi sebuah bilangan bulat N (1≤N≤100), banyaknya pohon yang ingin ditebang. N baris berikutnya masing-masing berisi koordinat sebuah pohon.
Format Keluaran

Baris pertama berisi sebuah bilangan yang menyatakan luas tanah Pak Dengklek (dibulatkan sampai satu angka di belakang koma). Baris kedua berisi sebuah bilangan bulat yang menyatakan jumlah ongkos yang perlu Pak Dengklek keluarkan untuk membersihkan tanahnya dari pohon-pohon yang sudah tidak elok lagi.
Contoh Masukan

2 6
5 1
7 8
5
1 4
3 5
6 4
6 5
4 7

Contoh Keluaran

15.5
2



## Praktikum 2

3. Adakah Bilangan Ini?

Batas Waktu 	0.05 detik
Batas Memori 	8MB

Diketahui sekumpulan n bilangan bulat (A), dan sekumpulan m bilangan bulat (B). Buat program untuk memeriksa bilangan mana saja dalam A yang tidak terdapat di dalam B. Bilangan yang terdapat di dalam A maupun B bernilai dengan kisaran -100 sampai dengan 100.
Format Masukan

Baris pertama bilangan n yang menunjukkan banyaknya bilangan dalam A, dan baris kedua berisi n bilangan bulat dengan kisaran nilai -100 sampai dengan 100. Baris ketiga bilangan m yang menunjukkan banyaknya bilangan B, dan baris keempat berisi m bilangan bulat dengan kisaran nilai -100 sampai dengan 100. Diasumsikan bahwa 2≤n,m≤100000.
Format Keluaran

Bilangan unik dalam A terurut dari kecil ke besar yang tidak terdapat pada B.
Contoh Masukan

6
-2 -1 0 1 4 4
7
-3 -2 -1 1 2 3 5

Contoh Keluaran

0
4

4. Median

Batas Waktu 	1 detik
Batas Memori 	32 MB

Median adalah nilai tengah dari suatu kumpulan bilangan yang sudah terurut. Misalnya diberikan data [10, -1, 8, 4, 5], maka data tersebut menjadi [-1, 4, 5, 8, 10] setelah diurutkan. Median dari kumpulan bilangan tersebut adalah 5. Bila banyak bilangan genap, maka median dari kumpulan bilangan tersebut adalah rata-rata dari dua nilai tengahnya.

Pak Dengklek memberikan Anda N (1 ≤ N ≤ 2.000.000) buah bilangan. Tentukan median dari N bilangan tersebut.
Format Masukan

Baris pertama berisi sebuah bilangan bulat N. Baris berikutnya berisi N buah bilangan, antara -8.000 sampai 8.000, yaitu bilangan-bilangan tersebut.
Format Keluaran

Sebuah baris berisi sebuah bilangan nyata yaitu median dari bilangan-bilangan tersebut, dengan dua angka di belakang koma.
Contoh Masukan

6
10 -1 8 4 5 3

Contoh Keluaran

4.50

