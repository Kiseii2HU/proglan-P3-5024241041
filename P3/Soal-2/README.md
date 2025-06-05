# Soal 2 : Simulasi Rakit Komputer (Multiple Inheritance & Diamond Problem)

## KERJAKAN MAIN SAJA

## Deskripsi
Pada soal ini, kamu diminta untuk melengkapi bagian `main` pada file `soal2.cpp` untuk mensimulasikan sistem perakitan komputer dengan konsep multiple inheritance dan diamond problem di C++. Terdapat class dasar `Komponen`, dua class turunan `Prosesor` dan `VGA`, serta class `PCRakitan` yang mewarisi dari keduanya menggunakan virtual inheritance. Setiap komponen memiliki nama, tipe (dari Prosesor/VGA), merk, dan harga. PC rakitan dapat menampilkan detail lengkap seluruh komponennya beserta total harga.

Kamu harus membuat objek PCRakitan dan memanggil method tampilkanInfo yang tepat tanpa terjadi duplikasi data akibat diamond problem.

## Input
- Nama prosesor
- Tipe prosesor
- Merk prosesor
- Harga prosesor
- Nama VGA
- Tipe VGA
- Merk VGA
- Harga VGA

## Output
- Detail PC rakitan dengan format yang jelas, menampilkan seluruh atribut komponen dan total harga.

## Expected Input
```
Ryzen5 5600X AMD 3000000
RTX3060 Ti NVIDIA 7000000
```

## Expected Output
```
Prosesor: Ryzen5, Tipe: 5600X, Merk: AMD, Harga: 3000000
VGA: RTX3060, Tipe: Ti, Merk: NVIDIA, Harga: 7000000
Total Harga: 10000000
```

## Catatan
- Lengkapi bagian `main` pada file `soal2.cpp`.
- Gunakan objek turunan dari class `PCRakitan`.
- Gunakan virtual inheritance untuk menghindari duplikasi data pada diamond problem.
- Jangan gunakan AI karena akan menumpulkan dasar pemrogramanmu. Jika bingung, cari referensi di Modul atau Stack Overflow.
